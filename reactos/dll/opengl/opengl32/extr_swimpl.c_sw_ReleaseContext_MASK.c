
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_context {int * hook; } ;
typedef scalar_t__ DHGLRC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(DHGLRC VAR_0)
{
    struct sw_context* VAR_1 = (struct sw_context*)VAR_0;


    FUNC_1(((void*)0), ((void*)0));


    if(VAR_1->hook)
    {
        FUNC_0(VAR_1->hook);
        VAR_1->hook = ((void*)0);
    }
}
