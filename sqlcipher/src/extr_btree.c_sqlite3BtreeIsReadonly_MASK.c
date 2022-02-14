
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pBt; } ;
struct TYPE_4__ {int btsFlags; } ;
typedef TYPE_2__ Btree ;


 int VAR_0 ;

int FUNC_0(Btree *VAR_1){
  return (VAR_1->pBt->btsFlags & VAR_0)!=0;
}
