
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int w ;
struct TYPE_5__ {int i; } ;
struct TYPE_6__ {TYPE_1__ u; int xSelectCallback; int xExprCallback; } ;
typedef TYPE_2__ Walker ;
typedef int Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_2(Expr *VAR_2, int VAR_3){
  Walker VAR_4;
  FUNC_0(&VAR_4, 0, sizeof(VAR_4));
  VAR_4.u.i = VAR_3;
  VAR_4.xExprCallback = VAR_0;
  VAR_4.xSelectCallback = VAR_1;
  FUNC_1(&VAR_4, VAR_2);
  return VAR_4.u.i;
}
