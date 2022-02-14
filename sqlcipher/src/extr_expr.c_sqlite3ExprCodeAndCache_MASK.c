
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_9__ {scalar_t__ op; } ;
struct TYPE_8__ {int nMem; int * pVdbe; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_3 (int *,int ,int,int) ;

void FUNC_4(Parse *VAR_2, Expr *VAR_3, int VAR_4){
  Vdbe *VAR_5 = VAR_2->pVdbe;
  int VAR_6;

  FUNC_0( VAR_4>0 );
  FUNC_0( VAR_3->op!=VAR_1 );
  FUNC_2(VAR_2, VAR_3, VAR_4);
  VAR_6 = ++VAR_2->nMem;
  FUNC_3(VAR_5, VAR_0, VAR_4, VAR_6);
  FUNC_1(VAR_3, VAR_6);
}
