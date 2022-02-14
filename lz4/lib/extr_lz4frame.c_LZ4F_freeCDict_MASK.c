
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HCCtx; int fastCtx; struct TYPE_4__* dictContent; } ;
typedef TYPE_1__ LZ4F_CDict ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(LZ4F_CDict* VAR_0)
{
    if (VAR_0==((void*)0)) return;
    FUNC_0(VAR_0->dictContent);
    FUNC_1(VAR_0->fastCtx);
    FUNC_2(VAR_0->HCCtx);
    FUNC_0(VAR_0);
}
