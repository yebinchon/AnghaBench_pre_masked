
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int pEnv; int pFS; int xLog; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_13__ {scalar_t__ iFirst; } ;
typedef TYPE_2__ Segment ;
typedef int Page ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,char**) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,TYPE_2__*,scalar_t__,int **) ;
 int FUNC_4 (TYPE_2__*,int *,int,int **) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int ,char*,char*) ;
 char* FUNC_8 (int ,TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*,int *,int) ;

void FUNC_10(lsm_db *VAR_2, Segment *VAR_3, int VAR_4){
  FUNC_0( VAR_2->xLog );
  if( VAR_3 && VAR_3->iFirst ){
    int VAR_5 = (VAR_4 ? VAR_0 : 0);
    char *VAR_6;
    Page *VAR_7;

    VAR_6 = FUNC_8(VAR_2->pEnv, VAR_3, 0);
    FUNC_7(VAR_2, VAR_1, "Segment: %s", VAR_6);
    FUNC_2(VAR_2->pEnv, VAR_6);

    FUNC_3(VAR_2->pFS, VAR_3, VAR_3->iFirst, &VAR_7);
    while( VAR_7 ){
      Page *VAR_8;
      char *VAR_9 = 0;
      FUNC_1(VAR_2, FUNC_5(VAR_7), VAR_5, &VAR_9);
      FUNC_7(VAR_2, VAR_1, "%s", VAR_9);
      FUNC_2(VAR_2->pEnv, VAR_9);



      FUNC_4(VAR_3, VAR_7, 1, &VAR_8);
      FUNC_6(VAR_7);
      VAR_7 = VAR_8;
    }
  }
}
