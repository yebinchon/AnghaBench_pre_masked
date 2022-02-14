
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ inTrans; int * pBt; } ;
typedef int Pgno ;
typedef TYPE_1__ Btree ;
typedef int BtShared ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int FUNC_6(Btree *VAR_2, int VAR_3, int *VAR_4){
  int VAR_5;
  BtShared *VAR_6 = VAR_2->pBt;
  FUNC_4(VAR_2);
  FUNC_0( VAR_2->inTrans==VAR_1 );

  VAR_5 = FUNC_3(VAR_6, (Pgno)VAR_3, 0);

  if( VAR_0==VAR_5 ){



    FUNC_2(VAR_2, (Pgno)VAR_3, 0, 1);
    VAR_5 = FUNC_1(VAR_6, (Pgno)VAR_3, 0, VAR_4);
  }
  FUNC_5(VAR_2);
  return VAR_5;
}
