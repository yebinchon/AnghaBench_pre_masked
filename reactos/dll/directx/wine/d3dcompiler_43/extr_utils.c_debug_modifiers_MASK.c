
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,char*) ;
 char const* FUNC_1 (char*,char*) ;

const char *FUNC_2(DWORD VAR_13)
{
    char VAR_14[110];

    VAR_14[0] = 0;
    if (VAR_13 & VAR_6)
        FUNC_0(VAR_14, " extern");
    if (VAR_13 & VAR_8)
        FUNC_0(VAR_14, " nointerpolation");
    if (VAR_13 & VAR_4)
        FUNC_0(VAR_14, " precise");
    if (VAR_13 & VAR_9)
        FUNC_0(VAR_14, " shared");
    if (VAR_13 & VAR_7)
        FUNC_0(VAR_14, " groupshared");
    if (VAR_13 & VAR_10)
        FUNC_0(VAR_14, " static");
    if (VAR_13 & VAR_11)
        FUNC_0(VAR_14, " uniform");
    if (VAR_13 & VAR_12)
        FUNC_0(VAR_14, " volatile");
    if (VAR_13 & VAR_1)
        FUNC_0(VAR_14, " const");
    if (VAR_13 & VAR_5)
        FUNC_0(VAR_14, " row_major");
    if (VAR_13 & VAR_0)
        FUNC_0(VAR_14, " column_major");
    if ((VAR_13 & (VAR_2 | VAR_3)) == (VAR_2 | VAR_3))
        FUNC_0(VAR_14, " inout");
    else if (VAR_13 & VAR_2)
        FUNC_0(VAR_14, " in");
    else if (VAR_13 & VAR_3)
        FUNC_0(VAR_14, " out");

    return FUNC_1("%s", VAR_14[0] ? VAR_14 + 1 : "");
}
