
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ nPage; } ;
struct TYPE_6__ {TYPE_5__* pBt; } ;
typedef TYPE_1__ Btree ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(Btree *VAR_0){
  int VAR_1;
  FUNC_1(VAR_0);
  VAR_0->pBt->nPage = 0;
  VAR_1 = FUNC_0(VAR_0->pBt);
  FUNC_2(VAR_0);
  return VAR_1;
}
