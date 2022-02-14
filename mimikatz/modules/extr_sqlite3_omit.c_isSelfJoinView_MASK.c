
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ viaCoroutine; } ;
struct SrcList_item {scalar_t__ zName; scalar_t__ zDatabase; TYPE_3__* pSelect; TYPE_1__ fg; } ;
struct TYPE_7__ {scalar_t__ selId; int pWhere; } ;
struct TYPE_6__ {struct SrcList_item* a; } ;
typedef TYPE_2__ SrcList ;
typedef TYPE_3__ Select ;


 scalar_t__ FUNC_0 (int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static struct SrcList_item *FUNC_2(
  SrcList *VAR_0,
  struct SrcList_item *VAR_1
){
  struct SrcList_item *VAR_2;
  for(VAR_2 = VAR_0->a; VAR_2<VAR_1; VAR_2++){
    Select *VAR_3;
    if( VAR_2->pSelect==0 ) continue;
    if( VAR_2->fg.viaCoroutine ) continue;
    if( VAR_2->zName==0 ) continue;
    if( FUNC_1(VAR_2->zDatabase, VAR_1->zDatabase)!=0 ) continue;
    if( FUNC_1(VAR_2->zName, VAR_1->zName)!=0 ) continue;
    VAR_3 = VAR_2->pSelect;
    if( VAR_1->pSelect->selId!=VAR_3->selId ){


      continue;
    }
    if( FUNC_0(0, VAR_1->pSelect->pWhere, VAR_3->pWhere, -1) ){


      continue;
    }
    return VAR_2;
  }
  return 0;
}
