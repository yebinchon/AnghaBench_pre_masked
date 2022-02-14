
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int REGSAM ;
typedef scalar_t__ MSIINSTALLCONTEXT ;
typedef char* LPSTR ;
typedef char* LPCSTR ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,char*,int,int *,int) ;
 int FUNC_1 (int ,int ,int *,int,char*,int,int *,int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (char*,char*,char*,...) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void FUNC_6(LPCSTR VAR_9, MSIINSTALLCONTEXT VAR_10, LPSTR VAR_11)
{
    WCHAR VAR_12[VAR_4];
    WCHAR VAR_13[VAR_4];
    WCHAR VAR_14[VAR_4];
    CHAR VAR_15[VAR_4];
    CHAR VAR_16[VAR_4];
    CHAR VAR_17[VAR_4];
    REGSAM VAR_18 = VAR_2;

    if (VAR_8)
        VAR_18 |= VAR_3;

    FUNC_0(VAR_0, 0, VAR_9, -1, VAR_12, VAR_4);
    FUNC_5(VAR_12, VAR_13);
    FUNC_1(VAR_0, 0, VAR_13, -1, VAR_15, VAR_4, ((void*)0), ((void*)0));

    if (VAR_10 == VAR_5)
    {
        FUNC_4(VAR_16,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\UserData\\S-1-5-18\\Components\\%s", VAR_15);
        FUNC_2(VAR_17,
                 "SOFTWARE\\Classes\\Installer\\"
                 "Products\\3D0DAE300FACA1300AD792060BCDAA92");
    }
    else if (VAR_10 == VAR_7)
    {
        FUNC_4(VAR_16,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\UserData\\%s\\Components\\%s", VAR_11, VAR_15);
        FUNC_4(VAR_17,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\%s\\Installer\\Products\\"
                "7D2F387510109040002000060BECB6AB", VAR_11);
    }
    else if (VAR_10 == VAR_6)
    {
        FUNC_4(VAR_16,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\UserData\\%s\\Components\\%s", VAR_11, VAR_15);
        FUNC_4(VAR_17,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\Managed\\%s\\Installer\\Products\\"
                "7D2F387510109040002000060BECB6AB", VAR_11);
    }

    FUNC_0(VAR_0, 0, VAR_16, -1, VAR_14, VAR_4);
    FUNC_3(VAR_1, VAR_14, VAR_18);

    FUNC_0(VAR_0, 0, VAR_17, -1, VAR_14, VAR_4);
    FUNC_3(VAR_1, VAR_14, VAR_18);
}
