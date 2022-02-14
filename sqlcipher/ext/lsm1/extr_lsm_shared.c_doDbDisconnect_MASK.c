
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int iRwclient; scalar_t__ pShmhdr; int pEnv; int pFS; TYPE_2__* pDatabase; scalar_t__ bReadonly; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_14__ {int pFile; scalar_t__ bMultiProc; } ;
typedef TYPE_2__ Database ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int) ;
 int FUNC_9 (TYPE_1__*,int ,int,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_13(lsm_db *VAR_8){
  int VAR_9;

  if( VAR_8->bReadonly ){
    FUNC_8(VAR_8, VAR_4, VAR_6, 0);
  }else{


    VAR_9 = FUNC_8(VAR_8, VAR_2, VAR_5, 1);
    if( VAR_9==VAR_7 ){

      FUNC_8(VAR_8, VAR_3, VAR_6, 0);




      VAR_9 = FUNC_9(VAR_8, VAR_3, 1, VAR_5);
      if( VAR_9==VAR_7 ){
        VAR_9 = FUNC_9(VAR_8, VAR_1, 1, VAR_5);
      }
      if( VAR_9==VAR_7 ){
        int VAR_10 = 0;
        VAR_9 = FUNC_11(VAR_8, 0);
        if( VAR_9==VAR_7 && (FUNC_10(VAR_8) || FUNC_12(VAR_8)>0) ){
          VAR_9 = FUNC_5(VAR_8);
        }




        if( VAR_9==VAR_7 ){
          VAR_9 = FUNC_9(VAR_8, VAR_4, 1, VAR_5);
          if( VAR_9==VAR_0 ){
            VAR_10 = 1;
            VAR_9 = VAR_7;
          }
        }


        if( VAR_9==VAR_7 ){
          VAR_9 = FUNC_2(VAR_8, 0);
        }



        if( VAR_9==VAR_7 ){
          int VAR_11 = 0;
          Database *VAR_12 = VAR_8->pDatabase;



          VAR_9 = FUNC_3(VAR_8, &VAR_11);
          if( VAR_9==VAR_7 && VAR_11==0 ){
            FUNC_6(VAR_8->pFS);
          }



          if( VAR_10==0 && VAR_11==0 ){
            FUNC_7(VAR_8->pFS);
            FUNC_1(VAR_8);
            if( VAR_12->pFile && VAR_12->bMultiProc ){
              FUNC_4(VAR_8->pEnv, VAR_12->pFile, 1);
            }
          }
        }
      }
    }

    if( VAR_8->iRwclient>=0 ){
      FUNC_8(VAR_8, FUNC_0(VAR_8->iRwclient), VAR_6, 0);
      VAR_8->iRwclient = -1;
    }

    FUNC_8(VAR_8, VAR_2, VAR_6, 0);
  }
  VAR_8->pShmhdr = 0;
}
