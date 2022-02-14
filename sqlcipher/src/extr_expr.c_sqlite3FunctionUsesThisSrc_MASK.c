
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct SrcCount {scalar_t__ nThis; scalar_t__ nOther; int * pSrc; } ;
struct TYPE_7__ {struct SrcCount* pSrcCount; } ;
struct TYPE_9__ {TYPE_1__ u; scalar_t__ xSelectCallback; int xExprCallback; } ;
typedef TYPE_3__ Walker ;
struct TYPE_8__ {int pList; } ;
struct TYPE_10__ {scalar_t__ op; TYPE_2__ x; } ;
typedef int SrcList ;
typedef TYPE_4__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int ) ;

int FUNC_2(Expr *VAR_2, SrcList *VAR_3){
  Walker VAR_4;
  struct SrcCount VAR_5;
  FUNC_0( VAR_2->op==VAR_0 );
  VAR_4.xExprCallback = VAR_1;
  VAR_4.xSelectCallback = 0;
  VAR_4.u.pSrcCount = &VAR_5;
  VAR_5.pSrc = VAR_3;
  VAR_5.nThis = 0;
  VAR_5.nOther = 0;
  FUNC_1(&VAR_4, VAR_2->x.pList);
  return VAR_5.nThis>0 || VAR_5.nOther==0;
}
