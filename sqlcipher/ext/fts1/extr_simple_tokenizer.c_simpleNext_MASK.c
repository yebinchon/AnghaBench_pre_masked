
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ pTokenizer; } ;
typedef TYPE_1__ sqlite3_tokenizer_cursor ;
struct TYPE_6__ {char* pCurrent; char* pInput; int nBytes; int nTokenAllocated; char* zToken; int iToken; } ;
typedef TYPE_2__ simple_tokenizer_cursor ;
struct TYPE_7__ {int zDelim; } ;
typedef TYPE_3__ simple_tokenizer ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 char FUNC_2 (unsigned char) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_tokenizer_cursor *VAR_2,
  const char **VAR_3, int *VAR_4,
  int *VAR_5, int *VAR_6, int *VAR_7
){
  simple_tokenizer_cursor *VAR_8 = (simple_tokenizer_cursor *) VAR_2;
  simple_tokenizer *VAR_9 = (simple_tokenizer *) VAR_2->pTokenizer;
  int VAR_10;

  while( VAR_8->pCurrent-VAR_8->pInput<VAR_8->nBytes ){
    int VAR_11 = (int) FUNC_1(VAR_8->pCurrent, VAR_9->zDelim);
    if( VAR_11>0 ){
      if( VAR_11+1>VAR_8->nTokenAllocated ){
        VAR_8->zToken = FUNC_0(VAR_8->zToken, VAR_11+1);
      }
      for(VAR_10=0; VAR_10<VAR_11; VAR_10++){



        char VAR_12 = VAR_8->pCurrent[VAR_10];
        VAR_8->zToken[VAR_10] = (unsigned char)VAR_12<0x80 ? FUNC_2((unsigned char)VAR_12):VAR_12;
      }
      VAR_8->zToken[VAR_11] = '\0';
      *VAR_3 = VAR_8->zToken;
      *VAR_4 = VAR_11;
      *VAR_5 = (int) (VAR_8->pCurrent-VAR_8->pInput);
      *VAR_6 = *VAR_5+VAR_11;
      *VAR_7 = VAR_8->iToken++;
      VAR_8->pCurrent += VAR_11 + 1;

      return VAR_1;
    }
    VAR_8->pCurrent += VAR_11 + 1;



  }
  return VAR_0;
}
