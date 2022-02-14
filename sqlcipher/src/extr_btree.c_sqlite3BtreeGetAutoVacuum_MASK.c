
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pBt; } ;
struct TYPE_6__ {int incrVacuum; int autoVacuum; } ;
typedef TYPE_2__ Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int FUNC_2(Btree *VAR_3){



  int VAR_4;
  FUNC_0(VAR_3);
  VAR_4 = (
    (!VAR_3->pBt->autoVacuum)?VAR_2:
    (!VAR_3->pBt->incrVacuum)?VAR_0:
    VAR_1
  );
  FUNC_1(VAR_3);
  return VAR_4;

}
