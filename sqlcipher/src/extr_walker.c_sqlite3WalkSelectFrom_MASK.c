
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pFuncArg; } ;
struct TYPE_6__ {scalar_t__ isTabFunc; } ;
struct SrcList_item {TYPE_2__ u1; TYPE_1__ fg; scalar_t__ pSelect; } ;
typedef int Walker ;
struct TYPE_9__ {TYPE_3__* pSrc; } ;
struct TYPE_8__ {int nSrc; struct SrcList_item* a; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Select ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;

int FUNC_3(Walker *VAR_2, Select *VAR_3){
  SrcList *VAR_4;
  int VAR_5;
  struct SrcList_item *VAR_6;

  VAR_4 = VAR_3->pSrc;
  FUNC_0( VAR_4!=0 );
  for(VAR_5=VAR_4->nSrc, VAR_6=VAR_4->a; VAR_5>0; VAR_5--, VAR_6++){
    if( VAR_6->pSelect && FUNC_2(VAR_2, VAR_6->pSelect) ){
      return VAR_0;
    }
    if( VAR_6->fg.isTabFunc
     && FUNC_1(VAR_2, VAR_6->u1.pFuncArg)
    ){
      return VAR_0;
    }
  }
  return VAR_1;
}
