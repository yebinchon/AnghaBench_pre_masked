
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* zToken; } ;
struct TYPE_10__ {scalar_t__ op; TYPE_1__ u; } ;
struct TYPE_9__ {int nExpr; TYPE_2__* a; } ;
struct TYPE_8__ {char* zName; } ;
typedef int Parse ;
typedef TYPE_3__ ExprList ;
typedef TYPE_4__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,char*) ;

__attribute__((used)) static int FUNC_2(
  Parse *VAR_1,
  ExprList *VAR_2,
  Expr *VAR_3
){
  int VAR_4;

  FUNC_0(VAR_1);

  if( VAR_3->op==VAR_0 ){
    char *VAR_5 = VAR_3->u.zToken;
    for(VAR_4=0; VAR_4<VAR_2->nExpr; VAR_4++){
      char *VAR_6 = VAR_2->a[VAR_4].zName;
      if( VAR_6!=0 && FUNC_1(VAR_6, VAR_5)==0 ){
        return VAR_4+1;
      }
    }
  }
  return 0;
}
