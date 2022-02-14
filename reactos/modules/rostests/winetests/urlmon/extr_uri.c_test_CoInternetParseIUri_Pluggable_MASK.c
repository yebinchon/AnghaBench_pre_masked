
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IUri ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_7 (int *,int ,int,int *,int,scalar_t__*,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void) {
    HRESULT VAR_9;
    IUri *VAR_10 = ((void*)0);

    VAR_9 = FUNC_8(VAR_8, 0, 0, &VAR_10);
    FUNC_6(FUNC_3(VAR_9), "Error: Expected CreateUri to succeed, but got 0x%08x.\n", VAR_9);
    if(FUNC_3(VAR_9)) {
        WCHAR VAR_11[200];
        DWORD VAR_12;

        FUNC_2(VAR_1);

        VAR_5 = VAR_0;
        VAR_6 = VAR_4|VAR_3;

        VAR_9 = FUNC_7(VAR_10, VAR_5, VAR_6, VAR_11, 200, &VAR_12, 0);
        FUNC_6(VAR_9 == VAR_2, "Error: CoInternetParseIUri returned 0x%08x, expected 0x%08x.\n", VAR_9, VAR_2);

        FUNC_0(VAR_1);

        if(FUNC_3(VAR_9)) {
            FUNC_6(VAR_12 == FUNC_5(VAR_7), "Error: Expected %d, but got %d.\n",
                FUNC_5(VAR_7), VAR_12);
            FUNC_6(!FUNC_4(VAR_11, VAR_7), "Error: Expected %s, but got %s.\n",
                FUNC_9(VAR_7), FUNC_9(VAR_11));
        }
    }
    if(VAR_10) FUNC_1(VAR_10);
}
