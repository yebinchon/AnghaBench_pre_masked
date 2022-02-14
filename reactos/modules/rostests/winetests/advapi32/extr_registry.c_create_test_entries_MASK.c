
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int const*,int) ;
 int FUNC_1 (char*,char*) ;
 int VAR_4 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const DWORD VAR_7[2] = { 0x12345678, 0x87654321 };

    FUNC_1("LONGSYSTEMVAR", "bar");
    FUNC_1("FOO", "ImARatherLongButIndeedNeededString");

    FUNC_2(!FUNC_0(VAR_4,"TP1_EXP_SZ",0,VAR_2, (const BYTE *)VAR_5, FUNC_3(VAR_5)+1),
        "RegSetValueExA failed\n");
    FUNC_2(!FUNC_0(VAR_4,"TP1_SZ",0,VAR_3, (const BYTE *)VAR_5, FUNC_3(VAR_5)+1),
        "RegSetValueExA failed\n");
    FUNC_2(!FUNC_0(VAR_4,"TP1_ZB_SZ",0,VAR_3, (const BYTE *)"", 0),
       "RegSetValueExA failed\n");
    FUNC_2(!FUNC_0(VAR_4,"TP2_EXP_SZ",0,VAR_2, (const BYTE *)VAR_6, FUNC_3(VAR_6)+1),
        "RegSetValueExA failed\n");
    FUNC_2(!FUNC_0(VAR_4,"DWORD",0,VAR_1, (const BYTE *)VAR_7, 4),
        "RegSetValueExA failed\n");
    FUNC_2(!FUNC_0(VAR_4,"BIN32",0,VAR_0, (const BYTE *)VAR_7, 4),
        "RegSetValueExA failed\n");
    FUNC_2(!FUNC_0(VAR_4,"BIN64",0,VAR_0, (const BYTE *)VAR_7, 8),
        "RegSetValueExA failed\n");
}
