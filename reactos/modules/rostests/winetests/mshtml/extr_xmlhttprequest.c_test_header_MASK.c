
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HEADER_TYPE {char* value; int key; } ;
typedef int all ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 scalar_t__ FUNC_1 (int ,int *,int **) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int *,int,char*,int,int *,int *) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,int ) ;
 int * FUNC_9 (char*,char*) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_11(const struct HEADER_TYPE VAR_3[], int VAR_4)
{
    int VAR_5;
    BSTR VAR_6, VAR_7, VAR_8;
    HRESULT VAR_9;
    char VAR_10[4096], VAR_11[512];

    VAR_8 = ((void*)0);
    VAR_9 = FUNC_0(VAR_2, &VAR_8);
    FUNC_5(VAR_9 == VAR_1, "getAllResponseHeader failed: %08x\n", VAR_9);
    FUNC_5(VAR_8 != ((void*)0), "all_header == NULL\n");

    FUNC_3(VAR_0, 0, VAR_8, -1, VAR_10, sizeof(VAR_10), ((void*)0), ((void*)0));
    FUNC_2(VAR_8);

    for(VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
        VAR_7 = ((void*)0);
        VAR_6 = FUNC_4(VAR_3[VAR_5].key);
        VAR_9 = FUNC_1(VAR_2, VAR_6, &VAR_7);
        FUNC_5(VAR_9 == VAR_1, "getResponseHeader failed, got %08x\n", VAR_9);
        FUNC_5(VAR_7 != ((void*)0), "text == NULL\n");
        FUNC_5(!FUNC_7(VAR_7, VAR_3[VAR_5].value),
            "Expect %s: %s, got %s\n", VAR_3[VAR_5].key, VAR_3[VAR_5].value, FUNC_10(VAR_7));
        FUNC_2(VAR_6);
        FUNC_2(VAR_7);

        FUNC_8(VAR_11, VAR_3[VAR_5].key);
        FUNC_6(VAR_11, ": ");
        FUNC_6(VAR_11, VAR_3[VAR_5].value);
        FUNC_5(FUNC_9(VAR_10, VAR_11) != ((void*)0), "AllResponseHeaders(%s) don't have expected substr(%s)\n", VAR_10, VAR_11);
    }
}
