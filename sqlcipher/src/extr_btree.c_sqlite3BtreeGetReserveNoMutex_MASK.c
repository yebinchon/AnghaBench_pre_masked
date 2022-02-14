
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pBt; } ;
struct TYPE_4__ {int pageSize; int usableSize; int mutex; } ;
typedef TYPE_2__ Btree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(Btree *VAR_0){
  int VAR_1;
  FUNC_0( FUNC_1(VAR_0->pBt->mutex) );
  VAR_1 = VAR_0->pBt->pageSize - VAR_0->pBt->usableSize;
  return VAR_1;
}
