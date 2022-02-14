
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ss_sp; } ;
struct TYPE_6__ {TYPE_1__ uc_stack; } ;
struct TYPE_7__ {TYPE_2__ fibre; } ;
typedef TYPE_3__ async_fibre ;


 int FUNC_0 (int *) ;

void FUNC_1(async_fibre *VAR_0)
{
    FUNC_0(VAR_0->fibre.uc_stack.ss_sp);
    VAR_0->fibre.uc_stack.ss_sp = ((void*)0);
}
