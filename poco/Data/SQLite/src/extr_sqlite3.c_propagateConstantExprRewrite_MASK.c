
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int nConst; TYPE_5__** apExpr; TYPE_2__* pParse; int nChng; } ;
typedef TYPE_3__ WhereConst ;
struct TYPE_12__ {TYPE_3__* pConst; } ;
struct TYPE_15__ {TYPE_1__ u; } ;
typedef TYPE_4__ Walker ;
struct TYPE_16__ {scalar_t__ op; scalar_t__ iTable; scalar_t__ iColumn; int pLeft; } ;
struct TYPE_13__ {int db; } ;
typedef TYPE_5__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_5(Walker *VAR_5, Expr *VAR_6){
  int VAR_7;
  WhereConst *VAR_8;
  if( VAR_6->op!=VAR_2 ) return VAR_3;
  if( FUNC_1(VAR_6, VAR_0) ) return VAR_3;
  VAR_8 = VAR_5->u.pConst;
  for(VAR_7=0; VAR_7<VAR_8->nConst; VAR_7++){
    Expr *VAR_9 = VAR_8->apExpr[VAR_7*2];
    if( VAR_9==VAR_6 ) continue;
    if( VAR_9->iTable!=VAR_6->iTable ) continue;
    if( VAR_9->iColumn!=VAR_6->iColumn ) continue;

    VAR_8->nChng++;
    FUNC_0(VAR_6, VAR_1);
    FUNC_2(VAR_6, VAR_0);
    FUNC_3( VAR_6->pLeft==0 );
    VAR_6->pLeft = FUNC_4(VAR_8->pParse->db, VAR_8->apExpr[VAR_7*2+1], 0);
    break;
  }
  return VAR_4;
}
