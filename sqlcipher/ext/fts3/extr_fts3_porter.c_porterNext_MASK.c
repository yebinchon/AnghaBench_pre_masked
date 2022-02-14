
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_tokenizer_cursor ;
struct TYPE_2__ {char* zInput; size_t iOffset; size_t nInput; int nAllocated; char* zToken; int iToken; } ;
typedef TYPE_1__ porter_tokenizer_cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,int,char*,int*) ;
 char* FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(
  sqlite3_tokenizer_cursor *VAR_3,
  const char **VAR_4,
  int *VAR_5,
  int *VAR_6,
  int *VAR_7,
  int *VAR_8
){
  porter_tokenizer_cursor *VAR_9 = (porter_tokenizer_cursor *) VAR_3;
  const char *VAR_10 = VAR_9->zInput;

  while( VAR_9->iOffset<VAR_9->nInput ){
    int VAR_11, VAR_12;


    while( VAR_9->iOffset<VAR_9->nInput && FUNC_0(VAR_10[VAR_9->iOffset]) ){
      VAR_9->iOffset++;
    }


    VAR_11 = VAR_9->iOffset;
    while( VAR_9->iOffset<VAR_9->nInput && !FUNC_0(VAR_10[VAR_9->iOffset]) ){
      VAR_9->iOffset++;
    }

    if( VAR_9->iOffset>VAR_11 ){
      int VAR_13 = VAR_9->iOffset-VAR_11;
      if( VAR_13>VAR_9->nAllocated ){
        char *VAR_14;
        VAR_9->nAllocated = VAR_13+20;
        VAR_14 = FUNC_2(VAR_9->zToken, VAR_9->nAllocated);
        if( !VAR_14 ) return VAR_1;
        VAR_9->zToken = VAR_14;
      }
      FUNC_1(&VAR_10[VAR_11], VAR_13, VAR_9->zToken, VAR_5);
      *VAR_4 = VAR_9->zToken;
      *VAR_6 = VAR_11;
      *VAR_7 = VAR_9->iOffset;
      *VAR_8 = VAR_9->iToken++;
      return VAR_2;
    }
  }
  return VAR_0;
}
