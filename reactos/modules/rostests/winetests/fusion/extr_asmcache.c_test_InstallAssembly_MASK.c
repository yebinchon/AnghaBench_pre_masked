
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float WCHAR ;
typedef int ULONG ;
typedef int IAssemblyCache ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,float const*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,float const*,int *,int*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (int **,int ) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    IAssemblyCache *VAR_10;
    HRESULT VAR_11;
    ULONG VAR_12;
    DWORD VAR_13;
    char VAR_14[VAR_7];

    static const WCHAR VAR_15[] = {0};
    static const WCHAR VAR_16[] = {'f','i','l','e',0};
    static const WCHAR VAR_17[] = {'f','i','l','e','.','b','a','d',0};
    static const WCHAR VAR_18[] = {'f','i','l','e','.','d','l','l',0};
    static const WCHAR VAR_19[] = {'f','i','l','e','.','e','x','e',0};
    static const WCHAR VAR_20[] = {'t','e','s','t','.','d','l','l',0};
    static const WCHAR VAR_21[] = {'w','i','n','e','.','d','l','l',0};
    static const WCHAR VAR_22[] = {'w','i','n','e',0};

    FUNC_8("test.dll", 100);
    FUNC_7("wine.dll");

    VAR_11 = FUNC_10(&VAR_10, 0);
    FUNC_9(VAR_11 == VAR_9, "Expected S_OK, got %08x\n", VAR_11);


    VAR_11 = FUNC_4(VAR_10, 0, ((void*)0), ((void*)0));
    FUNC_9(VAR_11 == VAR_3, "Expected E_INVALIDARG, got %08x\n", VAR_11);


    VAR_11 = FUNC_4(VAR_10, 0, VAR_15, ((void*)0));
    FUNC_9(VAR_11 == VAR_3, "Expected E_INVALIDARG, got %08x\n", VAR_11);


    VAR_11 = FUNC_4(VAR_10, 0, VAR_16, ((void*)0));
    FUNC_9(VAR_11 == FUNC_3(VAR_2),
       "Expected HRESULT_FROM_WIN32(ERROR_INVALID_NAME), got %08x\n", VAR_11);


    VAR_11 = FUNC_4(VAR_10, 0, VAR_17, ((void*)0));
    FUNC_9(VAR_11 == FUNC_3(VAR_2),
       "Expected HRESULT_FROM_WIN32(ERROR_INVALID_NAME), got %08x\n", VAR_11);


    VAR_11 = FUNC_4(VAR_10, 0, VAR_18, ((void*)0));
    FUNC_9(VAR_11 == FUNC_3(VAR_1),
       "Expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got %08x\n", VAR_11);


    VAR_11 = FUNC_4(VAR_10, 0, VAR_19, ((void*)0));
    FUNC_9(VAR_11 == FUNC_3(VAR_1),
       "Expected HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND), got %08x\n", VAR_11);


    VAR_11 = FUNC_4(VAR_10, 0, VAR_20, ((void*)0));
    FUNC_9(VAR_11 == VAR_0,
       "Expected COR_E_ASSEMBLYEXPECTED, got %08x\n", VAR_11);


    VAR_11 = FUNC_4(VAR_10, 0, VAR_21, ((void*)0));
    FUNC_9(VAR_11 == VAR_9, "Expected S_OK, got %08x\n", VAR_11);

    FUNC_2(VAR_14, VAR_7);
    FUNC_11(VAR_14, "\\assembly\\GAC_MSIL\\wine\\\\1.0.0.0__2d03617b1c31e2f5\\wine.dll");

    VAR_13 = FUNC_1(VAR_14);
    FUNC_9(VAR_13 != VAR_6, "Expected assembly to exist\n");


    VAR_12 = 0xf00dbad;
    VAR_11 = FUNC_6(VAR_10, 0, VAR_22, ((void*)0), &VAR_12);
    FUNC_9(VAR_11 == VAR_9, "Expected S_OK, got %08x\n", VAR_11);
    FUNC_9(VAR_12 == VAR_5,
       "Expected IASSEMBLYCACHE_UNINSTALL_DISPOSITION_UNINSTALLED, got %d\n", VAR_12);

    VAR_13 = FUNC_1(VAR_14);
    FUNC_9(VAR_13 == VAR_6, "Expected assembly not to exist\n");

    VAR_12 = 0xf00dbad;
    VAR_11 = FUNC_6(VAR_10, 0, VAR_22, ((void*)0), &VAR_12);
    FUNC_9(VAR_11 == VAR_8, "Expected S_FALSE, got %08x\n", VAR_11);
    FUNC_9(VAR_12 == VAR_4,
       "Expected IASSEMBLYCACHE_UNINSTALL_DISPOSITION_ALREADY_UNINSTALLED, got %d\n", VAR_12);

    FUNC_0("test.dll");
    FUNC_0("wine.dll");
    FUNC_5(VAR_10);
}
