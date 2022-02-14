
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char const* LPCWSTR ;
typedef int IUriBuilder ;
typedef int IUri ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__*,char const**) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (int,char*,...) ;
 scalar_t__ FUNC_10 (int *,int ,int ,int **) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int **) ;
 scalar_t__ FUNC_12 (char const*) ;

__attribute__((used)) static void FUNC_13(void) {
    HRESULT VAR_5;
    IUriBuilder *VAR_6 = ((void*)0);

    VAR_5 = FUNC_10(((void*)0), 0, 0, &VAR_6);
    FUNC_9(VAR_5 == VAR_2, "Error: CreateIUriBuilder returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);
    if(FUNC_6(VAR_5)) {
        static const WCHAR VAR_7[] = {'g','o','o','g','l','e','.','c','o','m',0};
        IUri *VAR_8 = ((void*)0);
        BOOL VAR_9;

        VAR_5 = FUNC_1(VAR_6, ((void*)0));
        FUNC_9(VAR_5 == VAR_0, "Error: IUriBuilder_HasBeenModified returned 0x%08x, expected 0x%08x.\n",
            VAR_5, VAR_0);

        VAR_5 = FUNC_3(VAR_6, VAR_7);
        FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_SetHost returned 0x%08x, expected 0x%08x.\n",
            VAR_5, VAR_2);

        VAR_5 = FUNC_1(VAR_6, &VAR_9);
        FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_HasBeenModified returned 0x%08x, expected 0x%08x.\n",
            VAR_5, VAR_2);
        if(FUNC_6(VAR_5))
            FUNC_9(VAR_9 == VAR_3, "Error: Expected received to be TRUE.\n");

        VAR_5 = FUNC_11(VAR_4, 0, 0, &VAR_8);
        FUNC_9(VAR_5 == VAR_2, "Error: CreateUri returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);
        if(FUNC_6(VAR_5)) {
            LPCWSTR VAR_10;
            DWORD VAR_11 = -1;

            VAR_5 = FUNC_4(VAR_6, VAR_8);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_SetIUri returned 0x%08x, expected 0x%08x.\n",
                VAR_5, VAR_2);

            VAR_5 = FUNC_1(VAR_6, &VAR_9);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_HasBeenModified returned 0x%08x, expected 0x%08x.\n",
                VAR_5, VAR_2);
            if(FUNC_6(VAR_5))
                FUNC_9(VAR_9 == VAR_1, "Error: Expected received to be FALSE.\n");


            VAR_5 = FUNC_3(VAR_6, VAR_7);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_SetHost returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);

            VAR_5 = FUNC_1(VAR_6, &VAR_9);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_HasBeenModified returned 0x%08x, expected 0x%08x.\n",
                VAR_5, VAR_2);
            if(FUNC_6(VAR_5))
                FUNC_9(VAR_9 == VAR_3, "Error: Expected received to be TRUE.\n");

            VAR_5 = FUNC_4(VAR_6, VAR_8);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_SetIUri returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);




            VAR_5 = FUNC_1(VAR_6, &VAR_9);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_HasBeenModified returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);
            if(FUNC_6(VAR_5))
                FUNC_9(VAR_9 == VAR_3, "Error: Expected received to be TRUE.\n");

            VAR_5 = FUNC_0(VAR_6, &VAR_11, &VAR_10);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_GetHost returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);
            if(FUNC_6(VAR_5)) {
                FUNC_9(!FUNC_7(VAR_10, VAR_7), "Error: Expected %s but got %s instead.\n",
                    FUNC_12(VAR_7), FUNC_12(VAR_10));
                FUNC_9(VAR_11 == FUNC_8(VAR_7), "Error: Expected len to be %d, but was %d instead.\n",
                    FUNC_8(VAR_7), VAR_11);
            }

            VAR_5 = FUNC_4(VAR_6, ((void*)0));
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_SetIUri returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);

            VAR_5 = FUNC_3(VAR_6, VAR_7);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_SetHost returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);
            VAR_5 = FUNC_1(VAR_6, &VAR_9);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_HasBeenModified returned 0x%08x, expected 0x%08x.\n",
                VAR_5, VAR_2);
            if(FUNC_6(VAR_5))
                FUNC_9(VAR_9 == VAR_3, "Error: Expected received to be TRUE.\n");

            VAR_5 = FUNC_4(VAR_6, ((void*)0));
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_SetIUri returned 0x%08x, expected 0x%09x.\n", VAR_5, VAR_2);

            VAR_5 = FUNC_1(VAR_6, &VAR_9);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_HasBeenModified returned 0x%08x, expected 0x%08x.\n",
                VAR_5, VAR_2);
            if(FUNC_6(VAR_5))
                FUNC_9(VAR_9 == VAR_3, "Error: Expected received to be TRUE.\n");

            VAR_5 = FUNC_0(VAR_6, &VAR_11, &VAR_10);
            FUNC_9(VAR_5 == VAR_2, "Error: IUriBuilder_GetHost returned 0x%08x, expected 0x%08x.\n", VAR_5, VAR_2);
            if(FUNC_6(VAR_5)) {
                FUNC_9(!FUNC_7(VAR_10, VAR_7), "Error: Expected %s but got %s instead.\n",
                    FUNC_12(VAR_7), FUNC_12(VAR_10));
                FUNC_9(VAR_11 == FUNC_8(VAR_7), "Error: Expected len to %d, but was %d instead.\n",
                    FUNC_8(VAR_7), VAR_11);
            }
        }
        if(VAR_8) FUNC_5(VAR_8);
    }
    if(VAR_6) FUNC_2(VAR_6);
}
