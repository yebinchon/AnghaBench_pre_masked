
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nTransOpen; scalar_t__ eSafety; int pFS; } ;
typedef TYPE_1__ lsm_db ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(lsm_db *VAR_2, int VAR_3){
  int VAR_4 = VAR_0;

  FUNC_1( VAR_2 );


  if( VAR_3<0 ) VAR_3 = FUNC_0(0, VAR_2->nTransOpen - 1);

  if( VAR_3<VAR_2->nTransOpen ){
    if( VAR_3==0 ){
      int VAR_5;

      if( VAR_4==VAR_0 ) VAR_4 = FUNC_5(VAR_2);
      if( VAR_4==VAR_0 && VAR_2->eSafety==VAR_1 ){
        VAR_4 = FUNC_4(VAR_2->pFS);
      }
      VAR_5 = FUNC_3(VAR_2, (VAR_4==VAR_0));
      if( VAR_4==VAR_0 ) VAR_4 = VAR_5;
    }
    VAR_2->nTransOpen = VAR_3;
  }
  FUNC_2(VAR_2);
  return VAR_4;
}
