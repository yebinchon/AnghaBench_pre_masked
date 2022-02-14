
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef char WCHAR ;
typedef int VOID ;
struct TYPE_20__ {scalar_t__ cb; } ;
struct TYPE_25__ {TYPE_1__ mkid; } ;
struct TYPE_22__ {int cb; int * abID; } ;
struct TYPE_24__ {TYPE_3__ mkid; } ;
struct TYPE_21__ {int member_0; } ;
struct TYPE_23__ {TYPE_2__ member_1; int member_0; } ;
typedef int STRRET ;
typedef TYPE_4__ SHITEMID ;
typedef int LPSHELLFOLDER ;
typedef TYPE_5__* LPITEMIDLIST ;
typedef TYPE_5__* LPCITEMIDLIST ;
typedef int IUnknown ;
typedef TYPE_7__ ITEMIDLIST ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int *) ;
 scalar_t__ FUNC_2 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__* FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (int ,TYPE_5__*,int *,int *,int **) ;
 int FUNC_10 (int ,TYPE_5__*,int ,int *) ;
 int FUNC_11 (int ,int *,int *,char*,int *,TYPE_5__**,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *,TYPE_5__*,char const*,int ,TYPE_5__**) ;
 int FUNC_14 (int *) ;
 int VAR_15 ;
 int FUNC_15 (int ,int ,char*,int,char*,int) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (TYPE_5__*,int *,void**,TYPE_5__**) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_5__*,char*) ;
 int FUNC_20 (int *,char*,int ,int ) ;
 int VAR_18 ;
 int FUNC_21 (int *,TYPE_5__*,char*,int) ;
 scalar_t__ FUNC_22 (int) ;
 int FUNC_23 (char*,char const*) ;
 int FUNC_24 (char*,char const*) ;
 int FUNC_25 (char*,char const*) ;
 int FUNC_26 (char*,char*) ;
 int FUNC_27 (char*,char*) ;
 int FUNC_28 (int,char*,...) ;

__attribute__((used)) static void FUNC_29(void)
{
    BOOL VAR_19;
    HRESULT VAR_20;
    HANDLE VAR_21;
    WCHAR VAR_22[VAR_15], VAR_23[VAR_15];
    char VAR_24[VAR_15], VAR_25[VAR_15];
    DWORD VAR_26;
    STRRET VAR_27;
    LPSHELLFOLDER VAR_28, VAR_29;
    IUnknown *VAR_30;
    SHITEMID VAR_31 = { 0, 0 };
    LPITEMIDLIST VAR_32, VAR_33 = (LPITEMIDLIST)&VAR_31;
    LPCITEMIDLIST VAR_34;
    static const CHAR VAR_35[] = "winetest.foo";
    static const WCHAR VAR_36[] = { 'w','i','n','e','t','e','s','t','.','f','o','o',0 };
    static const WCHAR VAR_37[] = { 'w','i','n','e','t','e','s','t',0 };


    WCHAR VAR_38[] = { 'C',':','\\','w','i','n','e','t','e','s','t', 0 };
    LPITEMIDLIST VAR_39;
    VAR_19 = FUNC_20(((void*)0), VAR_25, VAR_2, VAR_8);
    FUNC_28(VAR_19, "SHGetSpecialFolderPathA failed! Last error: %u\n", FUNC_5());
    if (!VAR_19) return;


    FUNC_23(VAR_25, "\\winetest");
    FUNC_1(VAR_25, ((void*)0));
    VAR_26=FUNC_4(VAR_25);
    if (VAR_26 == VAR_13 || !(VAR_26 & VAR_9))
    {
        FUNC_28(0, "unable to create the '%s' directory\n", VAR_25);
        return;
    }

    FUNC_27(VAR_24, VAR_25);
    FUNC_23(VAR_24, "\\");
    FUNC_23(VAR_24, VAR_35);
    VAR_21 = FUNC_2(VAR_24, VAR_10, 0, ((void*)0), VAR_1, 0, ((void*)0));
    FUNC_28((VAR_21 != VAR_14), "CreateFileA failed! Last error: %u\n", FUNC_5());
    if (VAR_21 == VAR_14) return;
    FUNC_0(VAR_21);


    VAR_20 = FUNC_18(&VAR_28);
    FUNC_28(VAR_20 == VAR_18, "SHGetDesktopFolder failed! hr = %08x\n", VAR_20);
    if (VAR_20 != VAR_18) return;

    FUNC_15(VAR_0, 0, VAR_24, -1, VAR_22, VAR_15);

    VAR_20 = FUNC_11(VAR_28, ((void*)0), ((void*)0), VAR_22, ((void*)0), &VAR_32, ((void*)0));
    FUNC_28(VAR_20 == VAR_18, "Desktop->ParseDisplayName failed! hr = %08x\n", VAR_20);
    if (VAR_20 != VAR_18) {
        FUNC_12(VAR_28);
        return;
    }

    VAR_34 = FUNC_7(VAR_32);
    FUNC_28(VAR_34->mkid.cb >= 76, "Expected pidl length of at least 76, got %d.\n", VAR_34->mkid.cb);
    if (VAR_34->mkid.cb >= 28) {
        FUNC_28(!FUNC_24((CHAR*)&VAR_34->mkid.abID[12], VAR_35),
            "Filename should be stored as ansi-string at this position!\n");
    }

    if (VAR_34->mkid.cb >= 76) {
        FUNC_28(!FUNC_25((WCHAR*)&VAR_34->mkid.abID[46], VAR_36) ||
            (VAR_34->mkid.cb >= 94 && !FUNC_25((WCHAR*)&VAR_34->mkid.abID[64], VAR_36)) ||
            (VAR_34->mkid.cb >= 98 && !FUNC_25((WCHAR*)&VAR_34->mkid.abID[68], VAR_36)) ||
            (VAR_34->mkid.cb >= 102 && !FUNC_25((WCHAR*)&VAR_34->mkid.abID[72], VAR_36)),
            "Filename should be stored as wchar-string at this position!\n");
    }



    VAR_20 = FUNC_9(VAR_28, VAR_32, ((void*)0), &VAR_12, (VOID**)&VAR_30);
    FUNC_28 (VAR_20 == FUNC_6(VAR_4) ||
        VAR_20 == VAR_6,
        "hr = %08x\n", VAR_20);
    if (VAR_20 == VAR_18) {
        FUNC_14(VAR_30);
    }


    VAR_20 = FUNC_17(VAR_32, &VAR_11, (void **)&VAR_29, &VAR_34);
    FUNC_28(VAR_20 == VAR_18, "SHBindToParent failed! hr = %08x\n", VAR_20);


    VAR_20 = FUNC_13(VAR_29, ((void*)0), VAR_34, VAR_37, VAR_17, &VAR_39);
    FUNC_28 (VAR_20 == VAR_18, "SetNameOf failed! hr = %08x\n", VAR_20);

    FUNC_28 (((ITEMIDLIST *)((BYTE *)VAR_39 + VAR_39->mkid.cb))->mkid.cb == 0,
        "pidl returned from SetNameOf should be simple!\n");



    VAR_20 = FUNC_13(VAR_29, ((void*)0), VAR_39, VAR_38, VAR_16, ((void*)0));
    FUNC_28 (VAR_20 == FUNC_6(VAR_3), "SetNameOf succeeded! hr = %08x\n", VAR_20);



    VAR_20 = FUNC_13(VAR_29, ((void*)0), VAR_39, VAR_36, VAR_16, ((void*)0));
    FUNC_28 (VAR_20 == VAR_18, "SetNameOf failed! hr = %08x\n", VAR_20);

    FUNC_8(VAR_39);
    FUNC_12(VAR_29);


    FUNC_3(VAR_24);
    FUNC_16(VAR_25);


    VAR_19 = FUNC_19(VAR_32, VAR_23);
    FUNC_28 (VAR_19, "SHGetPathFromIDListW failed! Last error: %u\n", FUNC_5());
    FUNC_28 (!FUNC_26(VAR_22, VAR_23), "SHGetPathFromIDListW returns incorrect path!\n");


    VAR_20 = FUNC_17(((void*)0), &VAR_11, (void **)&VAR_29, &VAR_34);
    FUNC_28 (VAR_20 == VAR_5 || FUNC_22(VAR_20 == VAR_7) ,
        "SHBindToParent(NULL) should fail! hr = %08x\n", VAR_20);


    VAR_20 = FUNC_17(VAR_33, &VAR_11, (void **)&VAR_29, &VAR_34);
    FUNC_28 (VAR_20 == VAR_18, "SHBindToParent(empty PIDL) should succeed! hr = %08x\n", VAR_20);
    FUNC_28 (VAR_34 == VAR_33, "The last element of an empty PIDL should be the PIDL itself!\n");
    if (VAR_20 == VAR_18)
        FUNC_12(VAR_29);


    VAR_20 = FUNC_17(VAR_32, &VAR_11, (void **)&VAR_29, &VAR_34);
    FUNC_28 (VAR_20 == VAR_18, "SHBindToParent failed! hr = %08x\n", VAR_20);
    if (VAR_20 != VAR_18) {
        FUNC_12(VAR_28);
        return;
    }



    FUNC_28 (FUNC_7(VAR_32) == VAR_34,
                                "SHBindToParent doesn't return the last id of the pidl param!\n");

    VAR_20 = FUNC_10(VAR_29, VAR_34, VAR_16, &VAR_27);
    FUNC_28 (VAR_20 == VAR_18, "Personal->GetDisplayNameOf failed! hr = %08x\n", VAR_20);
    if (VAR_20 != VAR_18) {
        FUNC_12(VAR_28);
        FUNC_12(VAR_29);
        return;
    }

    VAR_20 = FUNC_21(&VAR_27, VAR_34, VAR_23, VAR_15);
    FUNC_28 (VAR_20 == VAR_18, "StrRetToBufW failed! hr = %08x\n", VAR_20);
    FUNC_28 (!FUNC_26(VAR_22, VAR_23), "GetDisplayNameOf returns incorrect path!\n");

    FUNC_8(VAR_32);
    FUNC_12(VAR_28);
    FUNC_12(VAR_29);
}
