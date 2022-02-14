
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;

void FUNC_3(void)
{
    FUNC_0((0,"other_module_cleanup_module()\n"));

    if(&FUNC_2)
    {
        FUNC_0((0,"other_module_cleanup_module(): calling %x\n",(ULONG)FUNC_2));
        FUNC_2();
    }

    if(VAR_0)
    {
        FUNC_0((0,"other_module_cleanup_module(): calling RevirtualizeBreakpointsForModule(%x)\n",(ULONG)VAR_0));
        FUNC_1(VAR_0);
    }
}
