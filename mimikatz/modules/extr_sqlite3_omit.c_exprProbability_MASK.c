
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zToken; } ;
struct TYPE_5__ {scalar_t__ op; TYPE_1__ u; } ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,double*,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(Expr *VAR_2){
  double VAR_3 = -1.0;
  if( VAR_2->op!=VAR_1 ) return -1;
  FUNC_1(VAR_2->u.zToken, &VAR_3, FUNC_2(VAR_2->u.zToken), VAR_0);
  FUNC_0( VAR_3>=0.0 );
  if( VAR_3>1.0 ) return -1;
  return (int)(VAR_3*134217728.0);
}
