
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int wtFlags; size_t iParent; scalar_t__ nChild; TYPE_1__* pWC; int pExpr; } ;
typedef TYPE_2__ WhereTerm ;
struct TYPE_8__ {scalar_t__ iLeftJoin; } ;
typedef TYPE_3__ WhereLevel ;
struct TYPE_6__ {TYPE_2__* a; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(WhereLevel *VAR_2, WhereTerm *VAR_3){
  if( VAR_3
      && (VAR_3->wtFlags & VAR_1)==0
      && (VAR_2->iLeftJoin==0 || FUNC_0(VAR_3->pExpr, VAR_0))
  ){
    VAR_3->wtFlags |= VAR_1;
    if( VAR_3->iParent>=0 ){
      WhereTerm *VAR_4 = &VAR_3->pWC->a[VAR_3->iParent];
      if( (--VAR_4->nChild)==0 ){
        FUNC_1(VAR_2, VAR_4);
      }
    }
  }
}
