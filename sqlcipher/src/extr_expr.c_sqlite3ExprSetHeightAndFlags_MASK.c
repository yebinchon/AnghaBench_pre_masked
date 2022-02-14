
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nHeight; } ;
struct TYPE_7__ {scalar_t__ nErr; } ;
typedef TYPE_1__ Parse ;
typedef TYPE_2__ Expr ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

void FUNC_2(Parse *VAR_0, Expr *VAR_1){
  if( VAR_0->nErr ) return;
  FUNC_0(VAR_1);
  FUNC_1(VAR_0, VAR_1->nHeight);
}
