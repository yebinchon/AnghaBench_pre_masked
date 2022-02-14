
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pFuncArg; int zIndexedBy; } ;
struct TYPE_6__ {scalar_t__ isTabFunc; scalar_t__ isIndexedBy; } ;
struct SrcList_item {int pUsing; int pOn; int pSelect; int pTab; TYPE_2__ u1; TYPE_1__ fg; int zAlias; int zName; int zDatabase; } ;
typedef int sqlite3 ;
struct TYPE_8__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_3__ SrcList ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

void FUNC_7(sqlite3 *VAR_0, SrcList *VAR_1){
  int VAR_2;
  struct SrcList_item *VAR_3;
  if( VAR_1==0 ) return;
  for(VAR_3=VAR_1->a, VAR_2=0; VAR_2<VAR_1->nSrc; VAR_2++, VAR_3++){
    FUNC_0(VAR_0, VAR_3->zDatabase);
    FUNC_0(VAR_0, VAR_3->zName);
    FUNC_0(VAR_0, VAR_3->zAlias);
    if( VAR_3->fg.isIndexedBy ) FUNC_0(VAR_0, VAR_3->u1.zIndexedBy);
    if( VAR_3->fg.isTabFunc ) FUNC_4(VAR_0, VAR_3->u1.pFuncArg);
    FUNC_2(VAR_0, VAR_3->pTab);
    FUNC_6(VAR_0, VAR_3->pSelect);
    FUNC_3(VAR_0, VAR_3->pOn);
    FUNC_5(VAR_0, VAR_3->pUsing);
  }
  FUNC_1(VAR_0, VAR_1);
}
