
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* zToken; } ;
struct TYPE_5__ {scalar_t__ op; TYPE_1__ u; } ;
typedef TYPE_2__ Expr ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__*,char*) ;

int FUNC_2(const Expr *VAR_1){
  FUNC_0( VAR_1->op==VAR_0 );
  FUNC_0( FUNC_1(VAR_1->u.zToken,"true")==0
       || FUNC_1(VAR_1->u.zToken,"false")==0 );
  return VAR_1->u.zToken[4]==0;
}
