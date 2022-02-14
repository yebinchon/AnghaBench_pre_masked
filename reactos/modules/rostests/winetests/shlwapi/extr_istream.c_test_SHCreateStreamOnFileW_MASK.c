
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
 int * VAR_3 ;
 int * FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,char*,int,int *,int) ;
 int * FUNC_6 (int *,int,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(DWORD VAR_11, DWORD VAR_12)
{
    IStream * VAR_13;
    HRESULT VAR_14;
    ULONG VAR_15;
    WCHAR VAR_16[VAR_4];
    CHAR VAR_17[VAR_4];
    static const CHAR VAR_18[] = "\\testW.txt";

    FUNC_12("SHCreateStreamOnFileW: testing mode %d, STGM flags %08x\n", VAR_11, VAR_12);


    FUNC_2(VAR_4, VAR_17);
    FUNC_7(VAR_17, VAR_18);
    FUNC_5(VAR_0, 0, VAR_17, -1, VAR_16, VAR_4);



    if (0)
    {

        VAR_13 = ((void*)0);
        VAR_14 = FUNC_6(((void*)0), VAR_11 | VAR_12, &VAR_13);
        FUNC_8(VAR_14 == FUNC_3(VAR_2) ||
           VAR_14 == VAR_3 ,
          "SHCreateStreamOnFileW: expected HRESULT_FROM_WIN32(ERROR_PATH_NOT_FOUND) or E_INVALIDARG, got 0x%08x\n", VAR_14);
        FUNC_8(VAR_13 == ((void*)0), "SHCreateStreamOnFileW: expected a NULL IStream object, got %p\n", VAR_13);
    }

    if (0)
    {

            VAR_14 = FUNC_6(VAR_16, VAR_11 | VAR_12, ((void*)0));
            FUNC_8(VAR_14 == VAR_3, "SHCreateStreamOnFileW: expected E_INVALIDARG, got 0x%08x\n", VAR_14);
    }

    VAR_13 = ((void*)0);
    VAR_14 = FUNC_6(VAR_16, VAR_11 | VAR_5 | VAR_12, &VAR_13);
    FUNC_8(VAR_14 == VAR_3, "SHCreateStreamOnFileW: expected E_INVALIDARG, got 0x%08x\n", VAR_14);
    FUNC_8(VAR_13 == ((void*)0), "SHCreateStreamOnFileW: expected a NULL IStream object, got %p\n", VAR_13);

    VAR_13 = ((void*)0);
    VAR_14 = FUNC_6(VAR_16, VAR_11 | VAR_7 | VAR_12, &VAR_13);
    FUNC_8(VAR_14 == VAR_3, "SHCreateStreamOnFileW: expected E_INVALIDARG, got 0x%08x\n", VAR_14);
    FUNC_8(VAR_13 == ((void*)0), "SHCreateStreamOnFileW: expected a NULL IStream object, got %p\n", VAR_13);

    VAR_13 = ((void*)0);
    VAR_14 = FUNC_6(VAR_16, VAR_11 | VAR_9 | VAR_12, &VAR_13);
    FUNC_8(VAR_14 == VAR_3, "SHCreateStreamOnFileW: expected E_INVALIDARG, got 0x%08x\n", VAR_14);
    FUNC_8(VAR_13 == ((void*)0), "SHCreateStreamOnFileW: expected a NULL IStream object, got %p\n", VAR_13);



    VAR_13 = ((void*)0);
    VAR_14 = FUNC_6(VAR_16, VAR_11 | VAR_8 | VAR_12, &VAR_13);
    if (VAR_14 == VAR_3) {
        FUNC_13("Not supported\n");
        return;
    }

    FUNC_8(VAR_14 == FUNC_3(VAR_1), "SHCreateStreamOnFileW: expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got 0x%08x\n", VAR_14);
    FUNC_8(VAR_13 == ((void*)0), "SHCreateStreamOnFileW: expected a NULL IStream object, got %p\n", VAR_13);

    VAR_13 = ((void*)0);
    VAR_14 = FUNC_6(VAR_16, VAR_11 | VAR_6 | VAR_12, &VAR_13);
    FUNC_8(VAR_14 == VAR_10, "SHCreateStreamOnFileW: expected S_OK, got 0x%08x\n", VAR_14);
    FUNC_8(VAR_13 != ((void*)0), "SHCreateStreamOnFileW: expected a valid IStream object, got NULL\n");

    if (VAR_13) {
        FUNC_10(VAR_13);
        FUNC_9(VAR_13, VAR_11);

        VAR_15 = FUNC_4(VAR_13);
        FUNC_8(VAR_15 == 0, "SHCreateStreamOnFileW: expected 0, got %d\n", VAR_15);
    }





    VAR_13 = ((void*)0);
    VAR_14 = FUNC_6(VAR_16, VAR_11 | VAR_8 | VAR_12, &VAR_13);
    FUNC_8(VAR_14 == VAR_10, "SHCreateStreamOnFileW: expected S_OK, got 0x%08x\n", VAR_14);
    FUNC_8(VAR_13 != ((void*)0), "SHCreateStreamOnFileW: expected a valid IStream object, got NULL\n");

    if (VAR_13) {
        FUNC_9(VAR_13, VAR_11);

        VAR_15 = FUNC_4(VAR_13);
        FUNC_8(VAR_15 == 0, "SHCreateStreamOnFileW: expected 0, got %d\n", VAR_15);
    }

    VAR_13 = ((void*)0);
    VAR_14 = FUNC_6(VAR_16, VAR_11 | VAR_6 | VAR_12, &VAR_13);
    FUNC_8(VAR_14 == VAR_10, "SHCreateStreamOnFileW: expected S_OK, got 0x%08x\n", VAR_14);
    FUNC_8(VAR_13 != ((void*)0), "SHCreateStreamOnFileW: expected a valid IStream object, got NULL\n");

    if (VAR_13) {
        BOOL VAR_19;

        FUNC_11(VAR_13, VAR_11);
        FUNC_9(VAR_13, VAR_11);

        VAR_15 = FUNC_4(VAR_13);
        FUNC_8(VAR_15 == 0, "SHCreateStreamOnFileW: expected 0, got %d\n", VAR_15);

        VAR_19 = FUNC_0(VAR_17);
        FUNC_8(VAR_19, "SHCreateStreamOnFileW: could not delete the test file, got error %d\n",
           FUNC_1());
    }
}
