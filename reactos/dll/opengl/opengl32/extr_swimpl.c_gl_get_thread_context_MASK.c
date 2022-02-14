
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_context {int * gl_ctx; } ;
typedef int GLcontext ;


 scalar_t__ FUNC_0 () ;

GLcontext* FUNC_1(void)
{
    struct sw_context* VAR_0 = (struct sw_context*)FUNC_0();
    return VAR_0->gl_ctx;
}
