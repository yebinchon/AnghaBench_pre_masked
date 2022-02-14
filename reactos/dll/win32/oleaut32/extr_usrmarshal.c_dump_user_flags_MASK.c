
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;




 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void FUNC_3(const ULONG *VAR_1)
{
    if (FUNC_0(*VAR_1) == VAR_0)
        FUNC_2("MAKELONG(NDR_LOCAL_REPRESENTATION, ");
    else
        FUNC_2("MAKELONG(0x%04x, ", FUNC_0(*VAR_1));
    switch (FUNC_1(*VAR_1))
    {
        case 129: FUNC_2("MSHCTX_LOCAL)"); break;
        case 128: FUNC_2("MSHCTX_NOSHAREDMEM)"); break;
        case 131: FUNC_2("MSHCTX_DIFFERENTMACHINE)"); break;
        case 130: FUNC_2("MSHCTX_INPROC)"); break;
        default: FUNC_2("%d)", FUNC_1(*VAR_1));
    }
}
