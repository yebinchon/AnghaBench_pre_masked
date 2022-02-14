
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dictSize; int * dict; int dStage; } ;
typedef TYPE_1__ LZ4F_dctx ;


 int VAR_0 ;

void FUNC_0(LZ4F_dctx* VAR_1)
{
    VAR_1->dStage = VAR_0;
    VAR_1->dict = ((void*)0);
    VAR_1->dictSize = 0;
}
