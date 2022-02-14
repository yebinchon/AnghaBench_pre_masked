
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * LPWSTR ;
typedef int LPVOID ;
typedef int IMoniker ;
typedef int IHlink ;
typedef int HRESULT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char const*,int *,int *,int *,int ,int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int,int **,int **) ;
 int FUNC_5 (int *,int,int **,int **) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    HRESULT VAR_4;
    IHlink *VAR_5 = ((void*)0);
    IMoniker *VAR_6 = ((void*)0);
    const WCHAR VAR_7[] = { 'h','t','t','p',':','/','/','w','i','n','e','h','q','.','o','r','g',0 };
    const WCHAR VAR_8[] = { 'h','t','t','p',':','/','/','w','i','n','e','h','q','.','o','r','g','/',0 };
    LPWSTR VAR_9 = ((void*)0);

    VAR_4 = FUNC_2(VAR_7, ((void*)0), ((void*)0), ((void*)0),
                              0, ((void*)0), &VAR_2, (LPVOID*) &VAR_5);
    FUNC_10(VAR_4 == VAR_3, "failed to create link\n");
    if (FUNC_1(VAR_4))
        return;

    VAR_4 = FUNC_4(VAR_5, VAR_1, ((void*)0), ((void*)0));
    FUNC_10(VAR_4 == VAR_3, "failed\n");

    VAR_4 = FUNC_4(VAR_5, VAR_1, &VAR_6, &VAR_9);
    FUNC_10(VAR_4 == VAR_3, "failed\n");
    FUNC_10(VAR_6 != ((void*)0), "no moniker\n");
    FUNC_10(VAR_9 == ((void*)0), "string should be null\n");

    VAR_4 = FUNC_8(VAR_6);
    FUNC_10( VAR_4 == 1, "moniker refcount wrong\n");

    VAR_4 = FUNC_5(VAR_5, -1, &VAR_9, ((void*)0));
    FUNC_10(VAR_4 == VAR_3, "failed\n");
    FUNC_0(VAR_9);

    VAR_4 = FUNC_5(VAR_5, -1, ((void*)0), ((void*)0));
    FUNC_10(VAR_4 == VAR_3, "failed, r=%08x\n", VAR_4);

    VAR_4 = FUNC_5(VAR_5, -1, ((void*)0), &VAR_9);
    FUNC_10(VAR_4 == VAR_3, "failed, r=%08x\n", VAR_4);
    FUNC_10(VAR_9 == ((void*)0), "string should be null\n");

    VAR_4 = FUNC_5(VAR_5, VAR_1, &VAR_9, ((void*)0));
    FUNC_10(VAR_4 == VAR_3, "failed\n");
    FUNC_10(!FUNC_9(VAR_9, VAR_8), "url wrong\n");
    FUNC_0(VAR_9);

    VAR_4 = FUNC_5(VAR_5, VAR_1, ((void*)0), ((void*)0));
    FUNC_10(VAR_4 == VAR_3, "failed\n");

    VAR_4 = FUNC_5(VAR_5, VAR_1, ((void*)0), &VAR_9);
    FUNC_10(VAR_4 == VAR_3, "failed\n");
    FUNC_10(VAR_9 == ((void*)0), "string should be null\n");


    VAR_4 = FUNC_3(VAR_5, ((void*)0));
    FUNC_10(VAR_4 == VAR_0, "failed\n");

    VAR_4 = FUNC_7(VAR_5, ((void*)0));
    FUNC_10(VAR_4 == VAR_0, "failed\n");

    FUNC_6(VAR_5);
}
