
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ bReadonly; scalar_t__ pShmhdr; int pEnv; int aSnapshot; int pFS; scalar_t__ pDatabase; } ;
typedef TYPE_1__ lsm_db ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char const*,char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

int FUNC_10(lsm_db *VAR_2, const char *VAR_3){
  int VAR_4;

  if( VAR_2->pDatabase ){
    VAR_4 = VAR_0;
  }else{
    char *VAR_5;
    VAR_4 = FUNC_2(VAR_2->pEnv, VAR_3, &VAR_5);
    FUNC_0( VAR_4==VAR_1 || VAR_5==0 );


    if( VAR_4==VAR_1 ){
      VAR_4 = FUNC_6(VAR_2, VAR_5);
    }

    if( VAR_2->bReadonly==0 ){





      if( VAR_4==VAR_1 && VAR_1==(VAR_4 = FUNC_4(VAR_2, 0)) ){
        FUNC_9(VAR_2->pFS, FUNC_5(VAR_2->aSnapshot));
        FUNC_8(VAR_2->pFS, FUNC_3(VAR_2->aSnapshot));
      }
    }

    FUNC_7(VAR_2->pEnv, VAR_5);
    FUNC_1(VAR_2);
  }

  FUNC_0( VAR_2->bReadonly==0 || VAR_2->bReadonly==1 );
  FUNC_0( VAR_4!=VAR_1 || (VAR_2->pShmhdr==0)==(VAR_2->bReadonly==1) );

  return VAR_4;
}
