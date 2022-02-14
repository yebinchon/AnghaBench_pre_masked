
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 char const* FUNC_3 (char*,char const*,...) ;

__attribute__((used)) static const char* FUNC_4(ULONG *VAR_1)
{
    char VAR_2[12];
    const char* VAR_3;
    switch (FUNC_1(*VAR_1))
    {
    case 129:
        VAR_3="MSHCTX_LOCAL";
        break;
    case 128:
        VAR_3="MSHCTX_NOSHAREDMEM";
        break;
    case 131:
        VAR_3="MSHCTX_DIFFERENTMACHINE";
        break;
    case 130:
        VAR_3="MSHCTX_INPROC";
        break;
    default:
        FUNC_2(VAR_2, "%d", FUNC_1(*VAR_1));
        VAR_3=VAR_2;
    }

    if (FUNC_0(*VAR_1) == VAR_0)
        return FUNC_3("MAKELONG(%s, NDR_LOCAL_DATA_REPRESENTATION)", VAR_3);
    else
        return FUNC_3("MAKELONG(%s, 0x%04x)", VAR_3, FUNC_0(*VAR_1));
}
