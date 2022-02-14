
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUriBuilder ;
typedef int IUri ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,int,...) ;
 int FUNC_5 (int *,int ,int ,int **) ;
 int FUNC_6 (int ,int ,int ,int **) ;

__attribute__((used)) static void FUNC_7(void) {
    HRESULT VAR_3;
    IUri *VAR_4;

    VAR_3 = FUNC_6(VAR_2, 0, 0, &VAR_4);
    if(FUNC_3(VAR_3)) {
        IUriBuilder *VAR_5;

        VAR_3 = FUNC_5(VAR_4, 0, 0, &VAR_5);
        FUNC_4(VAR_3 == VAR_1, "Error: CreateIUriBuilder returned 0x%08x, expected 0x%08x.\n", VAR_3, VAR_1);
        if(FUNC_3(VAR_3)) {
            BOOL VAR_6 = -1;
            DWORD VAR_7 = -1;

            VAR_3 = FUNC_0(VAR_5, &VAR_6, &VAR_7);
            FUNC_4(VAR_3 == VAR_1, "Error: IUriBuilder_GetPort returned 0x%08x, expected 0x%08x.\n", VAR_3, VAR_1);
            if(FUNC_3(VAR_3)) {

                FUNC_4(VAR_6 == VAR_0, "Error: Expected 'has' to be FALSE, was %d instead.\n", VAR_6);

                FUNC_4(VAR_7 == 80, "Error: Expected the port to be 80, but, was %d instead.\n", VAR_7);
            }
        }
        if(VAR_5) FUNC_1(VAR_5);
    }
    if(VAR_4) FUNC_2(VAR_4);
}
