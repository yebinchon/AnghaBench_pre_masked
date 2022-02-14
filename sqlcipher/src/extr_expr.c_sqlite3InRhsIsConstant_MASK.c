
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pLeft; } ;
typedef TYPE_1__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(Expr *VAR_1){
  Expr *VAR_2;
  int VAR_3;
  FUNC_1( !FUNC_0(VAR_1, VAR_0) );
  VAR_2 = VAR_1->pLeft;
  VAR_1->pLeft = 0;
  VAR_3 = FUNC_2(VAR_1);
  VAR_1->pLeft = VAR_2;
  return VAR_3;
}
