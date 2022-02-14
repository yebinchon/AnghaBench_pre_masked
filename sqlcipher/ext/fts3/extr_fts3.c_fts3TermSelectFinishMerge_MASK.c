
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


 int VAR_0 ;
 int FUNC_0 (char**) ;
 int FUNC_1 (int ,char*,int,char*,int,char**,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(Fts3Table *VAR_1, TermSelect *VAR_2){
  char *VAR_3 = 0;
  int VAR_4 = 0;
  int VAR_5;




  for(VAR_5=0; VAR_5<FUNC_0(VAR_2->aaOutput); VAR_5++){
    if( VAR_2->aaOutput[VAR_5] ){
      if( !VAR_3 ){
        VAR_3 = VAR_2->aaOutput[VAR_5];
        VAR_4 = VAR_2->anOutput[VAR_5];
        VAR_2->aaOutput[VAR_5] = 0;
      }else{
        int VAR_6;
        char *VAR_7;

        int VAR_8 = FUNC_1(VAR_1->bDescIdx,
            VAR_2->aaOutput[VAR_5], VAR_2->anOutput[VAR_5], VAR_3, VAR_4, &VAR_7, &VAR_6
        );
        if( VAR_8!=VAR_0 ){
          FUNC_2(VAR_3);
          return VAR_8;
        }

        FUNC_2(VAR_2->aaOutput[VAR_5]);
        FUNC_2(VAR_3);
        VAR_2->aaOutput[VAR_5] = 0;
        VAR_3 = VAR_7;
        VAR_4 = VAR_6;
      }
    }
  }

  VAR_2->aaOutput[0] = VAR_3;
  VAR_2->anOutput[0] = VAR_4;
  return VAR_0;
}
