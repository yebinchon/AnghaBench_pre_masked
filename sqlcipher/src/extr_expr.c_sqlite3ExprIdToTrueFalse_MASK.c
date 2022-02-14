
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zToken; } ;
struct TYPE_6__ {scalar_t__ op; TYPE_1__ u; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char*) ;

int FUNC_3(Expr *VAR_4){
  FUNC_1( VAR_4->op==VAR_1 || VAR_4->op==VAR_2 );
  if( !FUNC_0(VAR_4, VAR_0)
   && (FUNC_2(VAR_4->u.zToken, "true")==0
       || FUNC_2(VAR_4->u.zToken, "false")==0)
  ){
    VAR_4->op = VAR_3;
    return 1;
  }
  return 0;
}
