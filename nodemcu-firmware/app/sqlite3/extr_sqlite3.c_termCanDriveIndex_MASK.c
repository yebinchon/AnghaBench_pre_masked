
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct SrcList_item {scalar_t__ iCursor; TYPE_2__* pTab; } ;
struct TYPE_9__ {size_t leftColumn; } ;
struct TYPE_10__ {scalar_t__ leftCursor; int eOperator; int prereqRight; TYPE_6__* pExpr; TYPE_3__ u; } ;
typedef TYPE_4__ WhereTerm ;
struct TYPE_11__ {scalar_t__ op; } ;
struct TYPE_8__ {TYPE_1__* aCol; } ;
struct TYPE_7__ {char affinity; } ;
typedef int Bitmask ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*,char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(
  WhereTerm *VAR_3,
  struct SrcList_item *VAR_4,
  Bitmask VAR_5
){
  char VAR_6;
  if( VAR_3->leftCursor!=VAR_4->iCursor ) return 0;
  if( (VAR_3->eOperator & (VAR_1|VAR_2))==0 ) return 0;
  if( (VAR_3->prereqRight & VAR_5)!=0 ) return 0;
  if( VAR_3->u.leftColumn<0 ) return 0;
  VAR_6 = VAR_4->pTab->aCol[VAR_3->u.leftColumn].affinity;
  if( !FUNC_0(VAR_3->pExpr, VAR_6) ) return 0;
  FUNC_1( VAR_3->pExpr->op==VAR_0 );
  return 1;
}
