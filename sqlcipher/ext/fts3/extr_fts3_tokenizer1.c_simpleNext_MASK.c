
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pTokenizer; } ;
typedef TYPE_1__ sqlite3_tokenizer_cursor ;
struct TYPE_5__ {size_t iOffset; size_t nBytes; int nTokenAllocated; char* pToken; int iToken; scalar_t__ pInput; } ;
typedef TYPE_2__ simple_tokenizer_cursor ;
typedef int simple_tokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned char) ;
 char* FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(
  sqlite3_tokenizer_cursor *VAR_3,
  const char **VAR_4,
  int *VAR_5,
  int *VAR_6,
  int *VAR_7,
  int *VAR_8
){
  simple_tokenizer_cursor *VAR_9 = (simple_tokenizer_cursor *) VAR_3;
  simple_tokenizer *VAR_10 = (simple_tokenizer *) VAR_3->pTokenizer;
  unsigned char *VAR_11 = (unsigned char *)VAR_9->pInput;

  while( VAR_9->iOffset<VAR_9->nBytes ){
    int VAR_12;


    while( VAR_9->iOffset<VAR_9->nBytes && FUNC_0(VAR_10, VAR_11[VAR_9->iOffset]) ){
      VAR_9->iOffset++;
    }


    VAR_12 = VAR_9->iOffset;
    while( VAR_9->iOffset<VAR_9->nBytes && !FUNC_0(VAR_10, VAR_11[VAR_9->iOffset]) ){
      VAR_9->iOffset++;
    }

    if( VAR_9->iOffset>VAR_12 ){
      int VAR_13, VAR_14 = VAR_9->iOffset-VAR_12;
      if( VAR_14>VAR_9->nTokenAllocated ){
        char *VAR_15;
        VAR_9->nTokenAllocated = VAR_14+20;
        VAR_15 = FUNC_1(VAR_9->pToken, VAR_9->nTokenAllocated);
        if( !VAR_15 ) return VAR_1;
        VAR_9->pToken = VAR_15;
      }
      for(VAR_13=0; VAR_13<VAR_14; VAR_13++){



        unsigned char VAR_16 = VAR_11[VAR_12+VAR_13];
        VAR_9->pToken[VAR_13] = (char)((VAR_16>='A' && VAR_16<='Z') ? VAR_16-'A'+'a' : VAR_16);
      }
      *VAR_4 = VAR_9->pToken;
      *VAR_5 = VAR_14;
      *VAR_6 = VAR_12;
      *VAR_7 = VAR_9->iOffset;
      *VAR_8 = VAR_9->iToken++;

      return VAR_2;
    }
  }
  return VAR_0;
}
