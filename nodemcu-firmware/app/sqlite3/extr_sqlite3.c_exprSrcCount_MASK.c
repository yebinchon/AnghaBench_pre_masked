
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct SrcCount {int nOther; int nThis; TYPE_4__* pSrc; } ;
struct TYPE_9__ {struct SrcCount* pSrcCount; } ;
struct TYPE_10__ {TYPE_2__ u; } ;
typedef TYPE_3__ Walker ;
struct TYPE_12__ {scalar_t__ op; scalar_t__ iTable; } ;
struct TYPE_11__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_8__ {scalar_t__ iCursor; } ;
typedef TYPE_4__ SrcList ;
typedef TYPE_5__ Expr ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(Walker *VAR_3, Expr *VAR_4){





  if( VAR_4->op==VAR_1 || FUNC_0(VAR_4->op==VAR_0) ){
    int VAR_5;
    struct SrcCount *VAR_6 = VAR_3->u.pSrcCount;
    SrcList *VAR_7 = VAR_6->pSrc;
    int VAR_8 = VAR_7 ? VAR_7->nSrc : 0;
    for(VAR_5=0; VAR_5<VAR_8; VAR_5++){
      if( VAR_4->iTable==VAR_7->a[VAR_5].iCursor ) break;
    }
    if( VAR_5<VAR_8 ){
      VAR_6->nThis++;
    }else{
      VAR_6->nOther++;
    }
  }
  return VAR_2;
}
