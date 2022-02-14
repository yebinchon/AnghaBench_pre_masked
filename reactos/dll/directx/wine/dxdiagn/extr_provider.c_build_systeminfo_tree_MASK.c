
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int msex ;
typedef int info ;
typedef int __ms_va_list ;
typedef char WCHAR ;
struct TYPE_7__ {int dwLength; int ullTotalPhys; int ullTotalPageFile; int ullAvailPageFile; } ;
struct TYPE_6__ {int dwOSVersionInfoSize; int dwMajorVersion; int dwMinorVersion; int dwBuildNumber; int dwPlatformId; char const* szCSDVersion; } ;
typedef TYPE_1__ OSVERSIONINFOW ;
typedef TYPE_2__ MEMORYSTATUSEX ;
typedef int IDxDiagContainerImpl_Container ;
typedef int HRESULT ;
typedef char* DWORD_PTR ;
typedef char* DWORD ;


 char* FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,char*,int ,int ,char*,char*,int *) ;
 int FUNC_3 (char*,char**) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *,char const*,int ) ;
 int FUNC_9 (int *,char const*,char const*) ;
 int FUNC_10 (int *,char const*,int) ;
 int FUNC_11 (int *,char const*,int) ;
 int VAR_8 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,TYPE_1__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 () ;
 int FUNC_17 (char*,char const*,char*,...) ;
 char const* VAR_9 ;

__attribute__((used)) static HRESULT FUNC_18(IDxDiagContainerImpl_Container *VAR_10)
{
    static const WCHAR VAR_11[] = {'d','w','D','i','r','e','c','t','X','V','e','r','s','i','o','n','M','a','j','o','r',0};
    static const WCHAR VAR_12[] = {'d','w','D','i','r','e','c','t','X','V','e','r','s','i','o','n','M','i','n','o','r',0};
    static const WCHAR VAR_13[] = {'s','z','D','i','r','e','c','t','X','V','e','r','s','i','o','n','L','e','t','t','e','r',0};
    static const WCHAR VAR_14[] = {'c',0};
    static const WCHAR VAR_15[] = {'b','D','e','b','u','g',0};
    static const WCHAR VAR_16[] = {'b','N','E','C','P','C','9','8',0};
    static const WCHAR VAR_17[] = {'s','z','D','i','r','e','c','t','X','V','e','r','s','i','o','n','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_18[] = {'4','.','0','9','.','0','0','0','0','.','0','9','0','4',0};
    static const WCHAR VAR_19[] = {'s','z','D','i','r','e','c','t','X','V','e','r','s','i','o','n','L','o','n','g','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_20[] = {'=',' ','"','D','i','r','e','c','t','X',' ','9','.','0','c',' ','(','4','.','0','9','.','0','0','0','0','.','0','9','0','4',')',0};
    static const WCHAR VAR_21[] = {'u','l','l','P','h','y','s','i','c','a','l','M','e','m','o','r','y',0};
    static const WCHAR VAR_22[] = {'u','l','l','U','s','e','d','P','a','g','e','F','i','l','e',0};
    static const WCHAR VAR_23[] = {'u','l','l','A','v','a','i','l','P','a','g','e','F','i','l','e',0};
    static const WCHAR VAR_24[] = {'b','N','e','t','M','e','e','t','i','n','g','R','u','n','n','i','n','g',0};
    static const WCHAR VAR_25[] = {'s','z','W','i','n','d','o','w','s','D','i','r',0};
    static const WCHAR VAR_26[] = {'d','w','O','S','M','a','j','o','r','V','e','r','s','i','o','n',0};
    static const WCHAR VAR_27[] = {'d','w','O','S','M','i','n','o','r','V','e','r','s','i','o','n',0};
    static const WCHAR VAR_28[] = {'d','w','O','S','B','u','i','l','d','N','u','m','b','e','r',0};
    static const WCHAR VAR_29[] = {'d','w','O','S','P','l','a','t','f','o','r','m','I','D',0};
    static const WCHAR VAR_30[] = {'s','z','C','S','D','V','e','r','s','i','o','n',0};
    static const WCHAR VAR_31[] = {'s','z','P','h','y','s','i','c','a','l','M','e','m','o','r','y','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_32[] = {'s','z','P','a','g','e','F','i','l','e','L','o','c','a','l','i','z','e','d',0};
    static const WCHAR VAR_33[] = {'s','z','P','a','g','e','F','i','l','e','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_34[] = {'s','z','M','a','c','h','i','n','e','N','a','m','e','L','o','c','a','l','i','z','e','d',0};
    static const WCHAR VAR_35[] = {'s','z','M','a','c','h','i','n','e','N','a','m','e','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_36[] = {'s','z','S','y','s','t','e','m','M','a','n','u','f','a','c','t','u','r','e','r','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_37[] = {'s','z','S','y','s','t','e','m','M','o','d','e','l','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_38[] = {'s','z','B','I','O','S','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_39[] = {'s','z','S','e','t','u','p','P','a','r','a','m','E','n','g','l','i','s','h',0};
    static const WCHAR VAR_40[] = {'s','z','D','x','D','i','a','g','V','e','r','s','i','o','n',0};

    static const WCHAR VAR_41[] = {'N','o','t',' ','p','r','e','s','e','n','t',0};

    static const WCHAR VAR_42[] = {'%','u','M','B',' ','u','s','e','d',',',' ','%','u','M','B',' ','a','v','a','i','l','a','b','l','e',0};
    static const WCHAR VAR_43[] = {'%','u','M','B',' ','R','A','M',0};

    HRESULT VAR_44;
    MEMORYSTATUSEX VAR_45;
    OSVERSIONINFOW VAR_46;
    DWORD VAR_47, VAR_48, VAR_49;
    WCHAR VAR_50[VAR_6], VAR_51[VAR_5 + 1], VAR_52[200], VAR_53[200];
    DWORD_PTR VAR_54[2];

    VAR_44 = FUNC_10(VAR_10, VAR_11, 9);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_10(VAR_10, VAR_12, 0);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_13, VAR_14);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_17, VAR_18);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_19, VAR_20);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_8(VAR_10, VAR_15, VAR_1);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_8(VAR_10, VAR_16, VAR_1);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_45.dwLength = sizeof(VAR_45);
    FUNC_6(&VAR_45);

    VAR_44 = FUNC_11(VAR_10, VAR_21, VAR_45.ullTotalPhys);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_11(VAR_10, VAR_22, VAR_45.ullTotalPageFile - VAR_45.ullAvailPageFile);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_11(VAR_10, VAR_23, VAR_45.ullAvailPageFile);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_8(VAR_10, VAR_24, FUNC_16());
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_46.dwOSVersionInfoSize = sizeof(VAR_46);
    FUNC_4(&VAR_46);

    VAR_44 = FUNC_10(VAR_10, VAR_26, VAR_46.dwMajorVersion);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_10(VAR_10, VAR_27, VAR_46.dwMinorVersion);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_10(VAR_10, VAR_28, VAR_46.dwBuildNumber);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_10(VAR_10, VAR_29, VAR_46.dwPlatformId);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_30, VAR_46.szCSDVersion);
    if (FUNC_1(VAR_44))
        return VAR_44;


    FUNC_17(VAR_52, VAR_43,
              (DWORD)(VAR_45.ullTotalPhys / (1024 * 1024)));
    VAR_44 = FUNC_9(VAR_10, VAR_31, VAR_52);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_48 = (DWORD)((VAR_45.ullTotalPageFile - VAR_45.ullAvailPageFile) / (1024 * 1024));
    VAR_49 = (DWORD)(VAR_45.ullAvailPageFile / (1024 * 1024));
    FUNC_7(VAR_8, VAR_4, VAR_53,
                FUNC_0(VAR_53));
    VAR_54[0] = VAR_48;
    VAR_54[1] = VAR_49;
    FUNC_2(VAR_3|VAR_2, VAR_53,
                   0, 0, VAR_52, FUNC_0(VAR_52), (__ms_va_list*)VAR_54);

    VAR_44 = FUNC_9(VAR_10, VAR_32, VAR_52);
    if (FUNC_1(VAR_44))
        return VAR_44;

    FUNC_17(VAR_52, VAR_42, VAR_48, VAR_49);

    VAR_44 = FUNC_9(VAR_10, VAR_33, VAR_52);
    if (FUNC_1(VAR_44))
        return VAR_44;

    FUNC_5(VAR_50, VAR_6);

    VAR_44 = FUNC_9(VAR_10, VAR_25, VAR_50);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_47 = FUNC_0(VAR_51);
    if (!FUNC_3(VAR_51, &VAR_47))
        return VAR_0;

    VAR_44 = FUNC_9(VAR_10, VAR_34, VAR_51);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_35, VAR_51);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_36, VAR_9);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_37, VAR_9);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_38, VAR_9);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_15(VAR_10);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_39, VAR_41);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_9(VAR_10, VAR_40, VAR_9);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_13(VAR_10);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_12(VAR_10);
    if (FUNC_1(VAR_44))
        return VAR_44;

    VAR_44 = FUNC_14(VAR_10, &VAR_46);
    if (FUNC_1(VAR_44))
        return VAR_44;

    return VAR_7;
}
