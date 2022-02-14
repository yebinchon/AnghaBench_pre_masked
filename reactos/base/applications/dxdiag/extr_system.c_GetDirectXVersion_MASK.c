
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szVer ;
typedef int WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static
BOOL
FUNC_3(WCHAR * VAR_4)
{
    WCHAR VAR_5[20];

    if (!FUNC_0(VAR_1, L"SOFTWARE\\Microsoft\\DirectX", L"Version", VAR_2, VAR_5, sizeof(VAR_5)))
        return VAR_0;

    if(!FUNC_1(VAR_5, L"4.02.0095"))
        FUNC_2(VAR_4, L"1.0");
    else if (!FUNC_1(VAR_5, L"4.03.00.1096"))
        FUNC_2(VAR_4, L"2.0");
    else if (!FUNC_1(VAR_5, L"4.04.0068"))
        FUNC_2(VAR_4, L"3.0");
    else if (!FUNC_1(VAR_5, L"4.04.0069"))
        FUNC_2(VAR_4, L"3.0");
    else if (!FUNC_1(VAR_5, L"4.05.00.0155"))
        FUNC_2(VAR_4, L"5.0");
    else if (!FUNC_1(VAR_5, L"4.05.01.1721"))
        FUNC_2(VAR_4, L"5.0");
    else if (!FUNC_1(VAR_5, L"4.05.01.1998"))
        FUNC_2(VAR_4, L"5.0");
    else if (!FUNC_1(VAR_5, L"4.06.02.0436"))
        FUNC_2(VAR_4, L"6.0");
    else if (!FUNC_1(VAR_5, L"4.07.00.0700"))
        FUNC_2(VAR_4, L"7.0");
    else if (!FUNC_1(VAR_5, L"4.07.00.0716"))
        FUNC_2(VAR_4, L"7.0a");
    else if (!FUNC_1(VAR_5, L"4.08.00.0400"))
        FUNC_2(VAR_4, L"8.0");
    else if (!FUNC_1(VAR_5, L"4.08.01.0881"))
        FUNC_2(VAR_4, L"8.1");
    else if (!FUNC_1(VAR_5, L"4.08.01.0810"))
        FUNC_2(VAR_4, L"8.1");
    else if (!FUNC_1(VAR_5, L"4.09.0000.0900"))
        FUNC_2(VAR_4, L"9.0");
    else if (!FUNC_1(VAR_5, L"4.09.00.0900"))
        FUNC_2(VAR_4, L"9.0");
    else if (!FUNC_1(VAR_5, L"4.09.0000.0901"))
        FUNC_2(VAR_4, L"9.0a");
    else if (!FUNC_1(VAR_5, L"4.09.00.0901"))
        FUNC_2(VAR_4, L"9.0a");
    else if (!FUNC_1(VAR_5, L"4.09.0000.0902"))
        FUNC_2(VAR_4, L"9.0b");
    else if (!FUNC_1(VAR_5, L"4.09.00.0902"))
        FUNC_2(VAR_4, L"9.0b");
    else if (!FUNC_1(VAR_5, L"4.09.00.0904"))
        FUNC_2(VAR_4, L"9.0c");
    else if (!FUNC_1(VAR_5, L"4.09.0000.0904"))
        FUNC_2(VAR_4, L"9.0c");
    else
        return VAR_0;

    return VAR_3;
}
