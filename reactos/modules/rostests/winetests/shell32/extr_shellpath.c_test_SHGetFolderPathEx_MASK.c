
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int * folderId; } ;
typedef int KNOWNFOLDERID ;
typedef int * HRESULT ;
typedef int DWORD ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int const VAR_3 ;
 int * FUNC_3 (int ) ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,char*,...) ;
 int * FUNC_7 (int const*,int ,int *,int *,int) ;
 int * FUNC_8 (int const*,int,int *,int **) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void)
{
    WCHAR VAR_12[VAR_9], *VAR_13, *VAR_14;
    unsigned int VAR_15;
    HRESULT VAR_16;
    DWORD VAR_17;

    if (!&FUNC_8 || !&FUNC_7)
    {
        FUNC_9("SHGetKnownFolderPath or SHGetFolderPathEx not available\n");
        return;
    }

if (0) {
    VAR_16 = FUNC_8(&VAR_3, 0, ((void*)0), ((void*)0));
    FUNC_6(VAR_16 == VAR_1, "expected E_INVALIDARG, got 0x%08x\n", VAR_16);
}

    VAR_13 = (void *)0xdeadbeef;
    VAR_16 = FUNC_8(&VAR_4, 0, ((void*)0), &VAR_13);
    FUNC_6(VAR_16 == FUNC_3(VAR_0), "got 0x%08x\n", VAR_16);
    FUNC_6(VAR_13 == ((void*)0), "got %p\n", VAR_13);

    VAR_13 = ((void*)0);
    VAR_16 = FUNC_8(&VAR_3, VAR_6, ((void*)0), &VAR_13);
    FUNC_6(VAR_16 == VAR_10, "expected S_OK, got 0x%08x\n", VAR_16);
    FUNC_6(VAR_13 != ((void*)0), "expected path != NULL\n");
    FUNC_1(VAR_13);

    for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_11); ++VAR_15)
    {
        const KNOWNFOLDERID *VAR_18 = VAR_11[VAR_15].folderId;

        VAR_13 = ((void*)0);
        VAR_16 = FUNC_8(VAR_18, VAR_5, ((void*)0), &VAR_13);
        if (FUNC_2(VAR_16))
            continue;
        FUNC_6(VAR_16 == VAR_10, "expected S_OK, got 0x%08x\n", VAR_16);
        FUNC_6(VAR_13 != ((void*)0), "expected path != NULL\n");

        VAR_14 = ((void*)0);
        VAR_16 = FUNC_8(VAR_18, VAR_8, ((void*)0), &VAR_14);
        FUNC_6(VAR_16 == VAR_10, "expected S_OK, got 0x%08x\n", VAR_16);
        FUNC_6(VAR_14 != ((void*)0), "expected path != NULL\n");
        FUNC_6(!FUNC_4(VAR_13, VAR_14), "expected equal paths: %s, %s\n", FUNC_10(VAR_13), FUNC_10(VAR_14));
        FUNC_1(VAR_14);

        VAR_14 = ((void*)0);
        VAR_16 = FUNC_8(VAR_18, VAR_7, ((void*)0), &VAR_14);
        FUNC_6(VAR_16 == VAR_10, "expected S_OK, got 0x%08x\n", VAR_16);
        FUNC_6(VAR_14 != ((void*)0), "expected path != NULL\n");
        FUNC_6(!FUNC_4(VAR_13, VAR_14), "expected equal paths: %s, %s\n", FUNC_10(VAR_13), FUNC_10(VAR_14));
        FUNC_1(VAR_14);

        VAR_14 = ((void*)0);
        VAR_16 = FUNC_8(VAR_18, VAR_8 | VAR_7, ((void*)0), &VAR_14);
        FUNC_6(VAR_16 == VAR_10, "expected S_OK, got 0x%08x\n", VAR_16);
        FUNC_6(VAR_14 != ((void*)0), "expected path != NULL\n");
        FUNC_6(!FUNC_4(VAR_13, VAR_14), "expected equal paths: %s, %s\n", FUNC_10(VAR_13), FUNC_10(VAR_14));
        FUNC_1(VAR_14);

        FUNC_1(VAR_13);
    }

    VAR_13 = ((void*)0);
    VAR_16 = FUNC_8(&VAR_3, 0, ((void*)0), &VAR_13);
    FUNC_6(VAR_16 == VAR_10, "expected S_OK, got 0x%08x\n", VAR_16);
    FUNC_6(VAR_13 != ((void*)0), "expected path != NULL\n");

    VAR_16 = FUNC_7(&VAR_3, 0, ((void*)0), VAR_12, VAR_9);
    FUNC_6(VAR_16 == VAR_10, "expected S_OK, got 0x%08x\n", VAR_16);
    FUNC_6(!FUNC_4(VAR_13, VAR_12), "expected equal paths\n");
    VAR_17 = FUNC_5(VAR_12);
    FUNC_1(VAR_13);

    VAR_16 = FUNC_7(&VAR_3, 0, ((void*)0), VAR_12, 0);
    FUNC_6(VAR_16 == VAR_1, "expected E_INVALIDARG, got 0x%08x\n", VAR_16);

if (0) {
    VAR_16 = FUNC_7(&VAR_3, 0, ((void*)0), ((void*)0), VAR_17 + 1);
    FUNC_6(VAR_16 == VAR_1, "expected E_INVALIDARG, got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_7(((void*)0), 0, ((void*)0), VAR_12, VAR_9);
    FUNC_6(VAR_16 == VAR_1, "expected E_INVALIDARG, got 0x%08x\n", VAR_16);
}
    VAR_16 = FUNC_7(&VAR_3, 0, ((void*)0), VAR_12, VAR_17);
    FUNC_6(VAR_16 == VAR_2, "expected E_NOT_SUFFICIENT_BUFFER, got 0x%08x\n", VAR_16);

    VAR_16 = FUNC_7(&VAR_3, 0, ((void*)0), VAR_12, VAR_17 + 1);
    FUNC_6(VAR_16 == VAR_10, "expected S_OK, got 0x%08x\n", VAR_16);
}
