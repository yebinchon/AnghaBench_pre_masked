
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pDestroy; scalar_t__ pFinal; scalar_t__ pStep; scalar_t__ pFunc; scalar_t__ interp; } ;
typedef TYPE_1__ CreateFunctionV2 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1){
  CreateFunctionV2 *VAR_2 = (CreateFunctionV2 *)VAR_1;

  if( VAR_2->interp && VAR_2->pDestroy ){
    int VAR_3 = FUNC_2(VAR_2->interp, VAR_2->pDestroy, 0);
    if( VAR_3!=VAR_0 ) FUNC_0(VAR_2->interp);
  }

  if( VAR_2->pFunc ) FUNC_1(VAR_2->pFunc);
  if( VAR_2->pStep ) FUNC_1(VAR_2->pStep);
  if( VAR_2->pFinal ) FUNC_1(VAR_2->pFinal);
  if( VAR_2->pDestroy ) FUNC_1(VAR_2->pDestroy);
  FUNC_3(VAR_2);
}
