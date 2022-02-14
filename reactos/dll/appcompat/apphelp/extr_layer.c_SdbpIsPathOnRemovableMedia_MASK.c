
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ ULONG ;
typedef int* PCWSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int*) ;
 int VAR_3 ;

BOOL FUNC_3(PCWSTR VAR_4)
{
    WCHAR VAR_5[] = { 'A',':','\\',0 };
    ULONG VAR_6;
    if (!VAR_4 || VAR_4[0] == VAR_3)
    {
        FUNC_1("Invalid argument\n");
        return VAR_2;
    }
    switch (VAR_4[1])
    {
    case L':':
        break;
    case L'\\':
        FUNC_2("\"%S\" is a network path.\n", VAR_4);
        return VAR_2;
    default:
        FUNC_2("\"%S\" not a full path we can operate on.\n", VAR_4);
        return VAR_2;
    }
    VAR_5[0] = VAR_4[0];
    VAR_6 = FUNC_0(VAR_5);

    return VAR_6 == VAR_1 || VAR_6 == VAR_0;
}
