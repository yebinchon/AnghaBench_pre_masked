
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUri ;
typedef int HRESULT ;
typedef int * BSTR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int,char*,int ,...) ;
 int FUNC_8 (int *,int *,int,int **,int ) ;
 int FUNC_9 (int ,int ,int ,int **) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(void) {
    HRESULT VAR_9;
    IUri *VAR_10 = ((void*)0);

    VAR_9 = FUNC_9(VAR_6, 0, 0, &VAR_10);
    FUNC_7(FUNC_4(VAR_9), "Error: CreateUri returned 0x%08x.\n", VAR_9);
    if(FUNC_4(VAR_9)) {
        IUri *VAR_11 = ((void*)0);

        VAR_9 = FUNC_9(VAR_7, VAR_5, 0, &VAR_11);
        FUNC_7(FUNC_4(VAR_9), "Error: CreateUri returned 0x%08x.\n", VAR_9);
        if(FUNC_4(VAR_9)) {
            IUri *VAR_12 = ((void*)0);

            FUNC_3(VAR_0);

            VAR_9 = FUNC_8(VAR_10, VAR_11, VAR_2|VAR_4|VAR_3,
                                        &VAR_12, 0);
            FUNC_7(VAR_9 == VAR_1, "Error: CoInternetCombineIUri returned 0x%08x, expected 0x%08x.\n", VAR_9, VAR_1);

            FUNC_0(VAR_0);

            if(FUNC_4(VAR_9)) {
                BSTR VAR_13 = ((void*)0);
                VAR_9 = FUNC_1(VAR_12, &VAR_13);
                FUNC_7(VAR_9 == VAR_1, "Error: Expected S_OK, but got 0x%08x instead.\n", VAR_9);
                if(FUNC_4(VAR_9)) {
                    FUNC_7(!FUNC_6(VAR_8, VAR_13), "Error: Expected %s, but got %s.\n",
                        FUNC_10(VAR_8), FUNC_10(VAR_13));
                }
                FUNC_5(VAR_13);
            }
            if(VAR_12) FUNC_2(VAR_12);
        }
        if(VAR_11) FUNC_2(VAR_11);
    }
    if(VAR_10) FUNC_2(VAR_10);
}
