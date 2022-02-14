
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int REGSAM ;
typedef scalar_t__ MSIINSTALLCONTEXT ;
typedef char* LPSTR ;
typedef char* LPCSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef char CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,char*,int,int *,int) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *,int,char*,int,int *,int *) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char*,...) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static void FUNC_10(LPCSTR VAR_11, MSIINSTALLCONTEXT VAR_12,
                               LPCSTR VAR_13, LPSTR VAR_14, BOOL VAR_15)
{
    WCHAR VAR_16[VAR_5];
    WCHAR VAR_17[VAR_5];
    CHAR VAR_18[VAR_5];
    CHAR VAR_19[VAR_5];
    CHAR VAR_20[VAR_5];
    CHAR VAR_21[VAR_5];
    LPCSTR VAR_22 = ((void*)0);
    HKEY VAR_23;
    REGSAM VAR_24 = VAR_3;

    if (VAR_10)
        VAR_24 |= VAR_4;

    FUNC_0(VAR_0, 0, VAR_13, -1, VAR_16, VAR_5);
    FUNC_9(VAR_16, VAR_17);
    FUNC_4(VAR_0, 0, VAR_17, -1, VAR_18, VAR_5, ((void*)0), ((void*)0));

    if (VAR_12 == VAR_6)
    {
        VAR_22 = "3D0DAE300FACA1300AD792060BCDAA92";
        FUNC_8(VAR_19,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\UserData\\S-1-5-18\\Components\\%s", VAR_18);
        FUNC_6(VAR_20,
                 "SOFTWARE\\Classes\\Installer\\"
                 "Products\\3D0DAE300FACA1300AD792060BCDAA92");
    }
    else if (VAR_12 == VAR_8)
    {
        VAR_22 = "7D2F387510109040002000060BECB6AB";
        FUNC_8(VAR_19,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\UserData\\%s\\Components\\%s", VAR_14, VAR_18);
        FUNC_8(VAR_20,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\%s\\Installer\\Products\\"
                "7D2F387510109040002000060BECB6AB", VAR_14);
    }
    else if (VAR_12 == VAR_7)
    {
        VAR_22 = "7D2F387510109040002000060BECB6AB";
        FUNC_8(VAR_19,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\UserData\\%s\\Components\\%s", VAR_14, VAR_18);
        FUNC_8(VAR_20,
                "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\"
                "Installer\\Managed\\%s\\Installer\\Products\\"
                "7D2F387510109040002000060BECB6AB", VAR_14);
    }

    FUNC_2(VAR_2, VAR_19, 0, ((void*)0), 0, VAR_24, ((void*)0), &VAR_23, ((void*)0));

    FUNC_6(VAR_21, VAR_1);
    FUNC_5(VAR_21, "\\");
    if (!VAR_15) FUNC_5(VAR_21, VAR_11);

    FUNC_3(VAR_23, VAR_22, 0, VAR_9, (LPBYTE)VAR_21, FUNC_7(VAR_21));
    FUNC_1(VAR_23);

    FUNC_2(VAR_2, VAR_20, 0, ((void*)0), 0, VAR_24, ((void*)0), &VAR_23, ((void*)0));
    FUNC_1(VAR_23);
}
