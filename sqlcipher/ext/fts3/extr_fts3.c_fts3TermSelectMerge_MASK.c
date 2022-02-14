
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char** aaOutput; int* anOutput; } ;
typedef TYPE_1__ TermSelect ;
struct TYPE_6__ {int bDescIdx; } ;
typedef TYPE_2__ Fts3Table ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,char*,int,char**,int*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(
  Fts3Table *VAR_3,
  TermSelect *VAR_4,
  char *VAR_5,
  int VAR_6
){
  if( VAR_4->aaOutput[0]==0 ){
    VAR_4->aaOutput[0] = FUNC_6(VAR_6 + VAR_0 + 1);
    VAR_4->anOutput[0] = VAR_6;
    if( VAR_4->aaOutput[0] ){
      FUNC_3(VAR_4->aaOutput[0], VAR_5, VAR_6);
      FUNC_4(&VAR_4->aaOutput[0][VAR_6], 0, VAR_0);
    }else{
      return VAR_1;
    }
  }else{
    char *VAR_7 = VAR_5;
    int VAR_8 = VAR_6;
    int VAR_9;

    for(VAR_9=0; VAR_9<FUNC_0(VAR_4->aaOutput); VAR_9++){
      if( VAR_4->aaOutput[VAR_9]==0 ){
        FUNC_1( VAR_9>0 );
        VAR_4->aaOutput[VAR_9] = VAR_7;
        VAR_4->anOutput[VAR_9] = VAR_8;
        break;
      }else{
        char *VAR_10;
        int VAR_11;

        int VAR_12 = FUNC_2(VAR_3->bDescIdx, VAR_7, VAR_8,
            VAR_4->aaOutput[VAR_9], VAR_4->anOutput[VAR_9], &VAR_10, &VAR_11
        );
        if( VAR_12!=VAR_2 ){
          if( VAR_7!=VAR_5 ) FUNC_5(VAR_7);
          return VAR_12;
        }

        if( VAR_7!=VAR_5 ) FUNC_5(VAR_7);
        FUNC_5(VAR_4->aaOutput[VAR_9]);
        VAR_4->aaOutput[VAR_9] = 0;

        VAR_7 = VAR_10;
        VAR_8 = VAR_11;
        if( (VAR_9+1)==FUNC_0(VAR_4->aaOutput) ){
          VAR_4->aaOutput[VAR_9] = VAR_7;
          VAR_4->anOutput[VAR_9] = VAR_8;
        }
      }
    }
  }
  return VAR_2;
}
