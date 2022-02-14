
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IUriBuilder ;
typedef int IUri ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int *,int ,int ,int **) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int **) ;

__attribute__((used)) static void FUNC_7(void) {
    HRESULT VAR_3;
    IUriBuilder *VAR_4 = ((void*)0);
    IUri *VAR_5;

    VAR_3 = FUNC_5(((void*)0), 0, 0, ((void*)0));
    FUNC_4(VAR_3 == VAR_0, "Error: CreateIUriBuilder returned 0x%08x, expected 0x%08x\n",
        VAR_3, VAR_0);


    VAR_3 = FUNC_6(VAR_2, 0, 0, &VAR_5);
    FUNC_4(VAR_3 == VAR_1, "Error: CreateUri returned 0x%08x, expected 0x%08x.\n", VAR_3, VAR_1);
    if(FUNC_2(VAR_3)) {
        ULONG VAR_6, VAR_7;

        VAR_7 = FUNC_3(VAR_5);
        VAR_3 = FUNC_5(VAR_5, 0, 0, &VAR_4);
        FUNC_4(VAR_3 == VAR_1, "Error: CreateIUriBuilder returned 0x%08x, expected 0x%08x.\n", VAR_3, VAR_1);
        FUNC_4(VAR_4 != ((void*)0), "Error: Expecting builder not to be NULL\n");

        VAR_6 = FUNC_3(VAR_5);
        FUNC_4(VAR_6 == VAR_7+1, "Error: Expected the ref count to be %u, but was %u instead.\n", VAR_7+1, VAR_6);

        if(VAR_4) FUNC_0(VAR_4);
        VAR_6 = FUNC_3(VAR_5);
        FUNC_4(VAR_6 == VAR_7, "Error: Expected the ref count to be %u, but was %u instead.\n", VAR_7, VAR_6);
    }
    if(VAR_5) FUNC_1(VAR_5);
}
