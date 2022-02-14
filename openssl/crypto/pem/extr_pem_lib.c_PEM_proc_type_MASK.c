
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,scalar_t__,char*,char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;

void FUNC_2(char *VAR_4, int VAR_5)
{
    const char *VAR_6;
    char *VAR_7 = VAR_4 + FUNC_1(VAR_4);

    if (VAR_5 == VAR_1)
        VAR_6 = "ENCRYPTED";
    else if (VAR_5 == VAR_2)
        VAR_6 = "MIC-CLEAR";
    else if (VAR_5 == VAR_3)
        VAR_6 = "MIC-ONLY";
    else
        VAR_6 = "BAD-TYPE";

    FUNC_0(VAR_7, VAR_0 - (size_t)(VAR_7 - VAR_4), "Proc-Type: 4,%s\n", VAR_6);
}
