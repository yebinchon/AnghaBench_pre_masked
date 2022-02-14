
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {TYPE_2__* pTab; } ;
struct TYPE_10__ {scalar_t__ op; int op2; size_t iColumn; TYPE_3__ y; struct TYPE_10__* pLeft; } ;
struct TYPE_8__ {TYPE_1__* aCol; } ;
struct TYPE_7__ {int notNull; } ;
typedef TYPE_4__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__ const*,int ) ;




 int VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_1(const Expr *VAR_4){
  u8 VAR_5;
  while( VAR_4->op==VAR_3 || VAR_4->op==VAR_2 ){
    VAR_4 = VAR_4->pLeft;
  }
  VAR_5 = VAR_4->op;
  if( VAR_5==VAR_1 ) VAR_5 = VAR_4->op2;
  switch( VAR_5 ){
    case 129:
    case 128:
    case 130:
    case 132:
      return 0;
    case 131:
      return FUNC_0(VAR_4, VAR_0) ||
             VAR_4->y.pTab==0 ||
             (VAR_4->iColumn>=0 && VAR_4->y.pTab->aCol[VAR_4->iColumn].notNull==0);
    default:
      return 1;
  }
}
