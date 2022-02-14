
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pProgram; } ;
typedef TYPE_1__ Vdbe ;
struct TYPE_6__ {struct TYPE_6__* pNext; } ;
typedef TYPE_2__ SubProgram ;



void FUNC_0(Vdbe *VAR_0, SubProgram *VAR_1){
  VAR_1->pNext = VAR_0->pProgram;
  VAR_0->pProgram = VAR_1;
}
