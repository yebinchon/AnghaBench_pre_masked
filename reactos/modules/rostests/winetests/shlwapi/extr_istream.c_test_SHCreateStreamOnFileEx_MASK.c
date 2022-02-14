
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * ULONG ;
typedef int IStream ;
typedef int * HRESULT ;
typedef int DWORD ;
typedef char CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,char*,int,int *,int) ;
 int * FUNC_6 (int *,int,int ,int ,int *,int **) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int FUNC_7 (int) ;
 int VAR_14 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,int,int) ;
 int FUNC_15 (char*) ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_16(DWORD VAR_16, DWORD VAR_17)
{
    IStream * VAR_18;
    IStream * VAR_19 = ((void*)0);
    HRESULT VAR_20;
    ULONG VAR_21;
    WCHAR VAR_22[VAR_8];
    CHAR VAR_23[VAR_8];
    static const CHAR VAR_24[] = "\\testEx.txt";
    BOOL VAR_25;

    if (VAR_15 > 1)
        FUNC_14("SHCreateStreamOnFileEx: testing mode %d, STGM flags %08x\n", VAR_16, VAR_17);


    FUNC_2(VAR_8, VAR_23);
    FUNC_9(VAR_23, VAR_24);
    FUNC_5(VAR_0, 0, VAR_23, -1, VAR_22, VAR_8);



    if (0)
    {

        VAR_18 = ((void*)0);
        VAR_20 = FUNC_6(((void*)0), VAR_16, 0, VAR_7, ((void*)0), &VAR_18);
        FUNC_10(VAR_20 == FUNC_3(VAR_5) ||
           VAR_20 == VAR_6 ,
          "SHCreateStreamOnFileEx: expected HRESULT_FROM_WIN32(ERROR_PATH_NOT_FOUND) or E_INVALIDARG, got 0x%08x\n", VAR_20);
        FUNC_10(VAR_18 == ((void*)0), "SHCreateStreamOnFileEx: expected a NULL IStream object, got %p\n", VAR_18);
    }

    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16, 0, VAR_7, VAR_19, &VAR_18);
    if (VAR_20 == FUNC_3(VAR_1)) {
        FUNC_15("File probably locked by Anti-Virus/Spam software, trying again\n");
        FUNC_7(1000);
        VAR_20 = FUNC_6(VAR_22, VAR_16, 0, VAR_7, VAR_19, &VAR_18);
    }
    FUNC_10( VAR_20 == FUNC_3(VAR_3) ||
        VAR_20 == FUNC_3(VAR_4),
        "SHCreateStreamOnFileEx: expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND) or "
        "HRESULT_FROM_WIN32(ERROR_INVALID_PARAMETER), got 0x%08x\n", VAR_20);

    FUNC_10(VAR_18 == ((void*)0), "SHCreateStreamOnFileEx: expected a NULL IStream object, got %p\n", VAR_18);

    if (0)
    {

        VAR_20 = FUNC_6(VAR_22, VAR_16, 0, VAR_7, ((void*)0), ((void*)0));
        FUNC_10(VAR_20 == VAR_6, "SHCreateStreamOnFileEx: expected E_INVALIDARG, got 0x%08x\n", VAR_20);
    }



    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_10 | VAR_17, 0, VAR_7, ((void*)0), &VAR_18);
    if ((VAR_17 & VAR_12) == VAR_12 && VAR_16 == VAR_11) {
        FUNC_10(VAR_20 == FUNC_3(VAR_3) || VAR_20 == VAR_6 ,
          "SHCreateStreamOnFileEx: expected E_INVALIDARG or HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got 0x%08x\n", VAR_20);

        if (VAR_20 == VAR_6) {
            FUNC_11("SHCreateStreamOnFileEx: STGM_TRANSACTED not supported in this configuration.\n");
            return;
        }
    } else {
        FUNC_10( VAR_20 == FUNC_3(VAR_3) ||
            VAR_20 == FUNC_3(VAR_4),
            "SHCreateStreamOnFileEx: expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND) or "
            "HRESULT_FROM_WIN32(ERROR_INVALID_PARAMETER), got 0x%08x\n", VAR_20);
    }
    FUNC_10(VAR_18 == ((void*)0), "SHCreateStreamOnFileEx: expected a NULL IStream object, got %p\n", VAR_18);

    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_10 | VAR_17, 0, VAR_14, ((void*)0), &VAR_18);

    if (FUNC_8(VAR_20 == FUNC_3(VAR_4) && VAR_18 == ((void*)0))) {
        FUNC_11("Not supported\n");
        FUNC_0(VAR_23);
        return;
    }

    FUNC_10(VAR_20 == VAR_13, "SHCreateStreamOnFileEx: expected S_OK, got 0x%08x\n", VAR_20);
    FUNC_10(VAR_18 != ((void*)0), "SHCreateStreamOnFileEx: expected a valid IStream object, got NULL\n");

    if (VAR_18) {
        FUNC_13(VAR_18);
        FUNC_12(VAR_18, VAR_16);

        VAR_21 = FUNC_4(VAR_18);
        FUNC_10(VAR_21 == 0, "SHCreateStreamOnFileEx: expected 0, got %d\n", VAR_21);

        VAR_25 = FUNC_0(VAR_23);
        FUNC_10(VAR_25, "SHCreateStreamOnFileEx: could not delete the test file, got error %d\n",
           FUNC_1());
    }

    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_9 | VAR_17, 0, VAR_7, ((void*)0), &VAR_18);
    if (VAR_20 == FUNC_3(VAR_1)) {
        FUNC_15("File probably locked by Anti-Virus/Spam software, trying again\n");
        FUNC_7(1000);
        VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_9 | VAR_17, 0, VAR_7, ((void*)0), &VAR_18);
    }
    FUNC_10(VAR_20 == VAR_13, "SHCreateStreamOnFileEx: expected S_OK, got 0x%08x\n", VAR_20);
    FUNC_10(VAR_18 != ((void*)0), "SHCreateStreamOnFileEx: expected a valid IStream object, got NULL\n");

    if (VAR_18) {
        FUNC_12(VAR_18, VAR_16);

        VAR_21 = FUNC_4(VAR_18);
        FUNC_10(VAR_21 == 0, "SHCreateStreamOnFileEx: expected 0, got %d\n", VAR_21);

        VAR_25 = FUNC_0(VAR_23);
        FUNC_10(VAR_25, "SHCreateStreamOnFileEx: could not delete the test file, got error %d\n",
           FUNC_1());
    }

    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_9 | VAR_17, 0, VAR_14, ((void*)0), &VAR_18);
    if (VAR_20 == FUNC_3(VAR_1)) {
        FUNC_15("File probably locked by Anti-Virus/Spam software, trying again\n");
        FUNC_7(1000);
        VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_9 | VAR_17, 0, VAR_14, ((void*)0), &VAR_18);
    }
    FUNC_10(VAR_20 == VAR_13, "SHCreateStreamOnFileEx: expected S_OK, got 0x%08x\n", VAR_20);
    FUNC_10(VAR_18 != ((void*)0), "SHCreateStreamOnFileEx: expected a valid IStream object, got NULL\n");

    if (VAR_18) {
        FUNC_12(VAR_18, VAR_16);

        VAR_21 = FUNC_4(VAR_18);
        FUNC_10(VAR_21 == 0, "SHCreateStreamOnFileEx: expected 0, got %d\n", VAR_21);
    }





    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_10 | VAR_17, 0, VAR_7, ((void*)0), &VAR_18);
    FUNC_10(VAR_20 == VAR_13, "SHCreateStreamOnFileEx: expected S_OK, got 0x%08x\n", VAR_20);
    FUNC_10(VAR_18 != ((void*)0), "SHCreateStreamOnFileEx: expected a valid IStream object, got NULL\n");

    if (VAR_18) {
        FUNC_12(VAR_18, VAR_16);

        VAR_21 = FUNC_4(VAR_18);
        FUNC_10(VAR_21 == 0, "SHCreateStreamOnFileEx: expected 0, got %d\n", VAR_21);
    }

    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_10 | VAR_17, 0, VAR_14, ((void*)0), &VAR_18);
    FUNC_10(VAR_20 == FUNC_3(VAR_2), "SHCreateStreamOnFileEx: expected HRESULT_FROM_WIN32(ERROR_FILE_EXISTS), got 0x%08x\n", VAR_20);
    FUNC_10(VAR_18 == ((void*)0), "SHCreateStreamOnFileEx: expected a NULL IStream object, got %p\n", VAR_18);

    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_9 | VAR_17, 0, VAR_7, ((void*)0), &VAR_18);
    FUNC_10(VAR_20 == VAR_13, "SHCreateStreamOnFileEx: expected S_OK, got 0x%08x\n", VAR_20);
    FUNC_10(VAR_18 != ((void*)0), "SHCreateStreamOnFileEx: expected a valid IStream object, got NULL\n");

    if (VAR_18) {
        FUNC_12(VAR_18, VAR_16);

        VAR_21 = FUNC_4(VAR_18);
        FUNC_10(VAR_21 == 0, "SHCreateStreamOnFileEx: expected 0, got %d\n", VAR_21);
    }

    VAR_18 = ((void*)0);
    VAR_20 = FUNC_6(VAR_22, VAR_16 | VAR_9 | VAR_17, 0, VAR_14, ((void*)0), &VAR_18);
    FUNC_10(VAR_20 == VAR_13, "SHCreateStreamOnFileEx: expected S_OK, got 0x%08x\n", VAR_20);
    FUNC_10(VAR_18 != ((void*)0), "SHCreateStreamOnFileEx: expected a valid IStream object, got NULL\n");

    if (VAR_18) {
        FUNC_12(VAR_18, VAR_16);

        VAR_21 = FUNC_4(VAR_18);
        FUNC_10(VAR_21 == 0, "SHCreateStreamOnFileEx: expected 0, got %d\n", VAR_21);
    }

    VAR_25 = FUNC_0(VAR_23);
    FUNC_10(VAR_25, "SHCreateStreamOnFileEx: could not delete the test file, got error %d\n",
       FUNC_1());
}
