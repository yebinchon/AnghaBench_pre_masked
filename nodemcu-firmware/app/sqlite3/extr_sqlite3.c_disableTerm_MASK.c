
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int wtFlags; int prereqAll; size_t iParent; scalar_t__ nChild; TYPE_1__* pWC; int pExpr; } ;
typedef TYPE_2__ WhereTerm ;
struct TYPE_8__ {scalar_t__ iLeftJoin; int notReady; } ;
typedef TYPE_3__ WhereLevel ;
struct TYPE_6__ {TYPE_2__* a; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(WhereLevel *VAR_4, WhereTerm *VAR_5){
  int VAR_6 = 0;
  while( FUNC_0(VAR_5!=0)
      && (VAR_5->wtFlags & VAR_1)==0
      && (VAR_4->iLeftJoin==0 || FUNC_1(VAR_5->pExpr, VAR_0))
      && (VAR_4->notReady & VAR_5->prereqAll)==0
  ){
    if( VAR_6 && (VAR_5->wtFlags & VAR_2)!=0 ){
      VAR_5->wtFlags |= VAR_3;
    }else{
      VAR_5->wtFlags |= VAR_1;
    }
    if( VAR_5->iParent<0 ) break;
    VAR_5 = &VAR_5->pWC->a[VAR_5->iParent];
    VAR_5->nChild--;
    if( VAR_5->nChild!=0 ) break;
    VAR_6++;
  }
}
