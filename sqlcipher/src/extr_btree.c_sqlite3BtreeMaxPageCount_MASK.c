
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pBt; } ;
struct TYPE_6__ {int pPager; } ;
typedef TYPE_2__ Btree ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(Btree *VAR_0, int VAR_1){
  int VAR_2;
  FUNC_0(VAR_0);
  VAR_2 = FUNC_2(VAR_0->pBt->pPager, VAR_1);
  FUNC_1(VAR_0);
  return VAR_2;
}
