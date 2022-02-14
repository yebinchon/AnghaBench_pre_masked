
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int LPSHELLFOLDER ;
typedef int LPITEMIDLIST ;
typedef int LPCITEMIDLIST ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int,int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int *,int *,char*,int *,int *,int *) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char const*,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ,char const*,int *,int *,int ,scalar_t__*) ;
 int FUNC_7 (int ,char const*,int ,int ,int ,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int,char*,...) ;
 int VAR_10 ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    HKEY VAR_11;
    LONG VAR_12;
    HRESULT VAR_13;
    DWORD VAR_14;
    LPSHELLFOLDER VAR_15;
    LPITEMIDLIST VAR_16;
    DWORD VAR_17, VAR_18, VAR_19, VAR_20;
    static const WCHAR VAR_21[] = { 'A','t','t','r','i','b','u','t','e','s',0 };
    static const WCHAR VAR_22[] = {
        'C','a','l','l','F','o','r','A','t','t','r','i','b','u','t','e','s',0 };
    static const WCHAR VAR_23[] = {
        'C','L','S','I','D','\\','{','4','5','0','D','8','F','B','A','-','A','D','2','5','-',
        '1','1','D','0','-','9','8','A','8','-','0','8','0','0','3','6','1','B','1','1','0','3','}',
        '\\','S','h','e','l','l','F','o','l','d','e','r',0 };
    WCHAR VAR_24[] = {
        ':',':','{','4','5','0','D','8','F','B','A','-','A','D','2','5','-','1','1','D','0','-',
        '9','8','A','8','-','0','8','0','0','3','6','1','B','1','1','0','3','}',0 };
    VAR_13 = FUNC_8(&VAR_15);
    FUNC_9 (VAR_13 == VAR_9, "SHGetDesktopFolder failed! hr = %08x\n", VAR_13);
    if (VAR_13 != VAR_9) return;

    VAR_13 = FUNC_2(VAR_15, ((void*)0), ((void*)0), VAR_24, ((void*)0),
                                       &VAR_16, ((void*)0));
    FUNC_9 (VAR_13 == VAR_9,
        "Desktop's ParseDisplayName failed to parse MyDocuments's CLSID! hr = %08x\n", VAR_13);
    if (VAR_13 != VAR_9) {
        FUNC_3(VAR_15);
        return;
    }

    VAR_17 = 0xffffffff;
    VAR_13 = FUNC_1(VAR_15, 1,
                                      (LPCITEMIDLIST*)&VAR_16, &VAR_17);
    FUNC_9 (VAR_13 == VAR_9, "Desktop->GetAttributesOf(MyDocuments) failed! hr = %08x\n", VAR_13);


    FUNC_9 (VAR_17 & VAR_6, "SFGAO_FILESYSTEM attribute is not set for MyDocuments!\n");
    FUNC_9 (!(VAR_17 & VAR_8), "SFGAO_ISSLOW attribute is set for MyDocuments!\n");
    FUNC_9 (!(VAR_17 & VAR_7), "SFGAO_GHOSTED attribute is set for MyDocuments!\n");




    VAR_12 = FUNC_5(VAR_2, VAR_23, 0, VAR_4|VAR_3, &VAR_11);
    FUNC_9 (VAR_12 == VAR_1 ||
        VAR_12 == VAR_0,
        "RegOpenKeyEx failed! result: %08x\n", VAR_12);
    if (VAR_12 != VAR_1) {
        if (VAR_12 == VAR_0)
            FUNC_10("Not enough rights to open the registry key\n");
        FUNC_0(VAR_10, VAR_16);
        FUNC_3(VAR_15);
        return;
    }


    VAR_14 = sizeof(DWORD);
    VAR_12 = FUNC_6(VAR_11, VAR_21, ((void*)0), ((void*)0), (LPBYTE)&VAR_19, &VAR_14);
    FUNC_9 (VAR_12 == VAR_1, "RegQueryValueEx failed! result: %08x\n", VAR_12);
    if (VAR_12 != VAR_1) {
        FUNC_4(VAR_11);
        FUNC_0(VAR_10, VAR_16);
        FUNC_3(VAR_15);
        return;
    }


    VAR_14 = sizeof(DWORD);
    VAR_12 = FUNC_6(VAR_11, VAR_22, ((void*)0), ((void*)0),
                              (LPBYTE)&VAR_20, &VAR_14);
    FUNC_9 (VAR_12 == VAR_1, "RegQueryValueEx failed! result: %08x\n", VAR_12);
    if (VAR_12 != VAR_1) {
        FUNC_4(VAR_11);
        FUNC_0(VAR_10, VAR_16);
        FUNC_3(VAR_15);
        return;
    }




    VAR_17 = VAR_8|VAR_7;
    FUNC_7(VAR_11, VAR_21, 0, VAR_5, (LPBYTE)&VAR_17, sizeof(DWORD));
    VAR_18 = VAR_8|VAR_6;
    FUNC_7(VAR_11, VAR_22, 0, VAR_5,
                   (LPBYTE)&VAR_18, sizeof(DWORD));






    VAR_17 = VAR_8|VAR_7|VAR_6;
    VAR_13 = FUNC_1(VAR_15, 1,
                                      (LPCITEMIDLIST*)&VAR_16, &VAR_17);
    FUNC_9 (VAR_13 == VAR_9, "Desktop->GetAttributesOf(MyDocuments) failed! hr = %08x\n", VAR_13);
    if (VAR_13 == VAR_9)
        FUNC_9 (VAR_17 == VAR_6,
            "Desktop->GetAttributes(MyDocuments) returned unexpected attributes: %08x\n",
            VAR_17);


    FUNC_7(VAR_11, VAR_21, 0, VAR_5, (LPBYTE)&VAR_19, sizeof(DWORD));
    FUNC_7(VAR_11, VAR_22, 0, VAR_5,
                   (LPBYTE)&VAR_20, sizeof(DWORD));
    FUNC_4(VAR_11);
    FUNC_0(VAR_10, VAR_16);
    FUNC_3(VAR_15);
}
