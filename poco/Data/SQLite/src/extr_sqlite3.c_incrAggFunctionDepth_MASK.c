
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int w ;
struct TYPE_5__ {int n; } ;
struct TYPE_6__ {TYPE_1__ u; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_2(Expr *VAR_1, int VAR_2){
  if( VAR_2>0 ){
    Walker VAR_3;
    FUNC_0(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.xExprCallback = VAR_0;
    VAR_3.u.n = VAR_2;
    FUNC_1(&VAR_3, VAR_1);
  }
}
