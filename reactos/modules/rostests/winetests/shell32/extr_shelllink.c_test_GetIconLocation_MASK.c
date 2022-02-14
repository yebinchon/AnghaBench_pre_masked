
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mypath ;
typedef int buffer ;
typedef int LPVOID ;
typedef int LPITEMIDLIST ;
typedef int IShellLinkW ;
typedef int IShellLinkA ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,char*,int,int*) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (char*,char const*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*,char*) ;

__attribute__((used)) static void FUNC_16(void)
{
    IShellLinkW *VAR_8;
    IShellLinkA *VAR_9;
    const char *VAR_10;
    char VAR_11[VAR_4], VAR_12[VAR_5];
    int VAR_13;
    HRESULT VAR_14;
    LPITEMIDLIST VAR_15;

    VAR_14 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
            &VAR_2, (LPVOID*)&VAR_9);
    FUNC_11(VAR_14 == VAR_7, "no IID_IShellLinkA (0x%08x)\n", VAR_14);
    if(VAR_14 != VAR_7)
        return;

    VAR_13 = 0xdeadbeef;
    FUNC_15(VAR_11, "garbage");
    VAR_14 = FUNC_2(VAR_9, VAR_11, sizeof(VAR_11), &VAR_13);
    FUNC_11(VAR_14 == VAR_7, "GetIconLocation failed (0x%08x)\n", VAR_14);
    FUNC_11(*VAR_11 == '\0', "GetIconLocation returned '%s'\n", VAR_11);
    FUNC_11(VAR_13 == 0, "GetIconLocation returned %d\n", VAR_13);

    VAR_10 = "c:\\some\\path";
    VAR_14 = FUNC_7(VAR_9, VAR_10);
    FUNC_11(VAR_14 == VAR_6 || VAR_14 == VAR_7, "SetPath failed (0x%08x)\n", VAR_14);

    VAR_13 = 0xdeadbeef;
    FUNC_15(VAR_11, "garbage");
    VAR_14 = FUNC_2(VAR_9, VAR_11, sizeof(VAR_11), &VAR_13);
    FUNC_11(VAR_14 == VAR_7, "GetIconLocation failed (0x%08x)\n", VAR_14);
    FUNC_11(*VAR_11 == '\0', "GetIconLocation returned '%s'\n", VAR_11);
    FUNC_11(VAR_13 == 0, "GetIconLocation returned %d\n", VAR_13);

    FUNC_1(VAR_12, sizeof(VAR_12) - 12);
    FUNC_14(VAR_12, "\\regedit.exe");
    VAR_15 = FUNC_13(VAR_12);
    VAR_14 = FUNC_5(VAR_9, VAR_15);
    FUNC_11(VAR_14 == VAR_7, "SetPath failed (0x%08x)\n", VAR_14);
    FUNC_12(VAR_15);

    VAR_13 = 0xdeadbeef;
    FUNC_15(VAR_11, "garbage");
    VAR_14 = FUNC_2(VAR_9, VAR_11, sizeof(VAR_11), &VAR_13);
    FUNC_11(VAR_14 == VAR_7, "GetIconLocation failed (0x%08x)\n", VAR_14);
    FUNC_11(*VAR_11 == '\0', "GetIconLocation returned '%s'\n", VAR_11);
    FUNC_11(VAR_13 == 0, "GetIconLocation returned %d\n", VAR_13);

    VAR_10 = "c:\\nonexistent\\file";
    VAR_14 = FUNC_6(VAR_9, VAR_10, 0xbabecafe);
    FUNC_11(VAR_14 == VAR_7, "SetIconLocation failed (0x%08x)\n", VAR_14);

    VAR_13 = 0xdeadbeef;
    VAR_14 = FUNC_2(VAR_9, VAR_11, sizeof(VAR_11), &VAR_13);
    FUNC_11(VAR_14 == VAR_7, "GetIconLocation failed (0x%08x)\n", VAR_14);
    FUNC_11(FUNC_10(VAR_11,VAR_10) == 0, "GetIconLocation returned '%s'\n", VAR_11);
    FUNC_11(VAR_13 == 0xbabecafe, "GetIconLocation returned %#x.\n", VAR_13);

    VAR_14 = FUNC_6(VAR_9, ((void*)0), 0xcafefe);
    FUNC_11(VAR_14 == VAR_7, "SetIconLocation failed (0x%08x)\n", VAR_14);

    VAR_13 = 0xdeadbeef;
    VAR_14 = FUNC_2(VAR_9, VAR_11, sizeof(VAR_11), &VAR_13);
    FUNC_11(VAR_14 == VAR_7, "GetIconLocation failed (0x%08x)\n", VAR_14);
    FUNC_11(!*VAR_11, "GetIconLocation returned '%s'\n", VAR_11);
    FUNC_11(VAR_13 == 0xcafefe, "GetIconLocation returned %#x.\n", VAR_13);

    VAR_14 = FUNC_3(VAR_9, &VAR_3, (void **)&VAR_8);
    FUNC_11(FUNC_9(VAR_14), "Failed to get IShellLinkW, hr %#x.\n", VAR_14);

    VAR_10 = "c:\\nonexistent\\file";
    VAR_14 = FUNC_6(VAR_9, VAR_10, 0xbabecafe);
    FUNC_11(VAR_14 == VAR_7, "SetIconLocation failed (0x%08x)\n", VAR_14);

    VAR_14 = FUNC_6(VAR_9, ((void*)0), 0xcafefe);
    FUNC_11(VAR_14 == VAR_7, "SetIconLocation failed (0x%08x)\n", VAR_14);

    VAR_13 = 0xdeadbeef;
    VAR_14 = FUNC_2(VAR_9, VAR_11, sizeof(VAR_11), &VAR_13);
    FUNC_11(VAR_14 == VAR_7, "GetIconLocation failed (0x%08x)\n", VAR_14);
    FUNC_11(!*VAR_11, "GetIconLocation returned '%s'\n", VAR_11);
    FUNC_11(VAR_13 == 0xcafefe, "GetIconLocation returned %#x.\n", VAR_13);

    FUNC_8(VAR_8);
    FUNC_4(VAR_9);
}
