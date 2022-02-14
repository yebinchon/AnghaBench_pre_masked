
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pBt; } ;
struct TYPE_4__ {scalar_t__ pPager; } ;
typedef TYPE_2__ Btree ;


 int FUNC_0 (int) ;
 char const* FUNC_1 (scalar_t__) ;

const char *FUNC_2(Btree *VAR_0){
  FUNC_0( VAR_0->pBt->pPager!=0 );
  return FUNC_1(VAR_0->pBt->pPager);
}
