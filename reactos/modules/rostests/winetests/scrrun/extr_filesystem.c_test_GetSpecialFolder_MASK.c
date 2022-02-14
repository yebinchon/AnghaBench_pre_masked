
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IFolder ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef char* BSTR ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char**) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int,char*,scalar_t__,...) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    WCHAR VAR_8[VAR_2];
    IFolder *VAR_9;
    HRESULT VAR_10;
    DWORD VAR_11;
    BSTR VAR_12;

    VAR_10 = FUNC_4(VAR_7, VAR_6, ((void*)0));
    FUNC_9(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_4(VAR_7, VAR_5+1, ((void*)0));
    FUNC_9(VAR_10 == VAR_1, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_4(VAR_7, VAR_5+1, &VAR_9);
    FUNC_9(VAR_10 == VAR_0, "got 0x%08x\n", VAR_10);

    VAR_10 = FUNC_4(VAR_7, VAR_6, &VAR_9);
    FUNC_9(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    VAR_10 = FUNC_6(VAR_9, &VAR_12);
    FUNC_9(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_3(VAR_8, FUNC_0(VAR_8));
    FUNC_9(!FUNC_8(VAR_8, VAR_12), "got %s, expected %s\n", FUNC_10(VAR_12), FUNC_10(VAR_8));
    FUNC_7(VAR_12);
    FUNC_5(VAR_9);

    VAR_10 = FUNC_4(VAR_7, VAR_4, &VAR_9);
    FUNC_9(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    VAR_10 = FUNC_6(VAR_9, &VAR_12);
    FUNC_9(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    FUNC_1(VAR_8, FUNC_0(VAR_8));
    FUNC_9(!FUNC_8(VAR_8, VAR_12), "got %s, expected %s\n", FUNC_10(VAR_12), FUNC_10(VAR_8));
    FUNC_7(VAR_12);
    FUNC_5(VAR_9);

    VAR_10 = FUNC_4(VAR_7, VAR_5, &VAR_9);
    FUNC_9(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    VAR_10 = FUNC_6(VAR_9, &VAR_12);
    FUNC_9(VAR_10 == VAR_3, "got 0x%08x\n", VAR_10);
    VAR_11 = FUNC_2(FUNC_0(VAR_8), VAR_8);
    if (VAR_11 && VAR_8[VAR_11-1] == '\\')
        VAR_8[VAR_11-1] = 0;

    FUNC_9(!FUNC_8(VAR_8, VAR_12), "got %s, expected %s\n", FUNC_10(VAR_12), FUNC_10(VAR_8));
    FUNC_7(VAR_12);
    FUNC_5(VAR_9);
}
