
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ eState; scalar_t__ iPage; scalar_t__ ix; TYPE_1__* pPage; } ;
struct TYPE_6__ {scalar_t__ nCell; } ;
typedef TYPE_2__ BtCursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,unsigned char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(BtCursor *VAR_1, u32 VAR_2, u32 VAR_3, void *VAR_4){
  FUNC_1( FUNC_2(VAR_1) );
  FUNC_1( VAR_1->eState==VAR_0 );
  FUNC_1( VAR_1->iPage>=0 && VAR_1->pPage );
  FUNC_1( VAR_1->ix<VAR_1->pPage->nCell );
  return FUNC_0(VAR_1, VAR_2, VAR_3, (unsigned char*)VAR_4, 0);
}
