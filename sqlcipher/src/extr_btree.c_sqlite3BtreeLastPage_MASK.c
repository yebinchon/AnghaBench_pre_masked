
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int nPage; } ;
struct TYPE_5__ {TYPE_4__* pBt; } ;
typedef TYPE_1__ Btree ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*) ;

u32 FUNC_3(Btree *VAR_0){
  FUNC_0( FUNC_2(VAR_0) );
  FUNC_0( ((VAR_0->pBt->nPage)&0x80000000)==0 );
  return FUNC_1(VAR_0->pBt);
}
