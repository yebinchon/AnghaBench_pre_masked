
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ notIndexed; scalar_t__ isIndexedBy; int isTabFunc; } ;
struct TYPE_7__ {int * pFuncArg; } ;
struct SrcList_item {TYPE_2__ fg; TYPE_1__ u1; } ;
struct TYPE_10__ {int db; } ;
struct TYPE_9__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Parse ;
typedef int ExprList ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(Parse *VAR_0, SrcList *VAR_1, ExprList *VAR_2){
  if( VAR_1 ){
    struct SrcList_item *VAR_3 = &VAR_1->a[VAR_1->nSrc-1];
    FUNC_0( VAR_3->fg.notIndexed==0 );
    FUNC_0( VAR_3->fg.isIndexedBy==0 );
    FUNC_0( VAR_3->fg.isTabFunc==0 );
    VAR_3->u1.pFuncArg = VAR_2;
    VAR_3->fg.isTabFunc = 1;
  }else{
    FUNC_1(VAR_0->db, VAR_2);
  }
}
