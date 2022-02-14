
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_4__ {scalar_t__ pToplevel; int okConstFactor; int db; int * pVdbe; } ;
typedef TYPE_1__ Parse ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;

Vdbe *FUNC_2(Parse *VAR_1){
  if( VAR_1->pVdbe ){
    return VAR_1->pVdbe;
  }
  if( VAR_1->pToplevel==0
   && FUNC_0(VAR_1->db,VAR_0)
  ){
    VAR_1->okConstFactor = 1;
  }
  return FUNC_1(VAR_1);
}
