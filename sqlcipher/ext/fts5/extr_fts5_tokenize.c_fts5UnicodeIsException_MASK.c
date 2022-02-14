
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nException; int* aiException; } ;
typedef TYPE_1__ Unicode61Tokenizer ;



__attribute__((used)) static int FUNC_0(Unicode61Tokenizer *VAR_0, int VAR_1){
  if( VAR_0->nException>0 ){
    int *VAR_2 = VAR_0->aiException;
    int VAR_3 = 0;
    int VAR_4 = VAR_0->nException-1;

    while( VAR_4>=VAR_3 ){
      int VAR_5 = (VAR_4 + VAR_3) / 2;
      if( VAR_1==VAR_2[VAR_5] ){
        return 1;
      }else if( VAR_1>VAR_2[VAR_5] ){
        VAR_3 = VAR_5+1;
      }else{
        VAR_4 = VAR_5-1;
      }
    }
  }

  return 0;
}
