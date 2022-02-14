
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IUnknown ;
typedef int IEnumUnknown ;
typedef int ICLRRuntimeInfo ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int **) ;
 int FUNC_3 (int *,int *,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int **,int*) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (int *,int *,void**) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(void)
{
    IEnumUnknown *VAR_6;
    IUnknown *VAR_7;
    DWORD VAR_8;
    ICLRRuntimeInfo *VAR_9;
    HRESULT VAR_10;
    WCHAR VAR_11[VAR_2];

    VAR_10 = FUNC_2(VAR_5, &VAR_6);
    FUNC_9(VAR_10 == VAR_4, "EnumerateInstalledRuntimes returned %x\n", VAR_10);
    if (FUNC_0(VAR_10)) return;

    while ((VAR_10 = FUNC_5(VAR_6, 1, &VAR_7, &VAR_8)) == VAR_4)
    {
        VAR_10 = FUNC_7(VAR_7, &VAR_1, (void**)&VAR_9);
        FUNC_9(VAR_10 == VAR_4, "QueryInterface returned %x\n", VAR_10);

        VAR_8 = 1;
        VAR_10 = FUNC_3(VAR_9, VAR_11, &VAR_8);
        FUNC_9(VAR_10 == FUNC_1(VAR_0), "GetVersionString returned %x\n", VAR_10);
        FUNC_9(VAR_8 > 1, "GetVersionString returned count %u\n", VAR_8);

        VAR_8 = 0xdeadbeef;
        VAR_10 = FUNC_3(VAR_9, ((void*)0), &VAR_8);
        FUNC_9(VAR_10 == VAR_4, "GetVersionString returned %x\n", VAR_10);
        FUNC_9(VAR_8 > 1 && VAR_8 != 0xdeadbeef, "GetVersionString returned count %u\n", VAR_8);

        VAR_8 = VAR_2;
        VAR_10 = FUNC_3(VAR_9, VAR_11, &VAR_8);
        FUNC_9(VAR_10 == VAR_4, "GetVersionString returned %x\n", VAR_10);
        FUNC_9(VAR_8 > 1, "GetVersionString returned count %u\n", VAR_8);

        FUNC_10("runtime found: %s\n", FUNC_11(VAR_11));

        FUNC_4(VAR_9);

        FUNC_8(VAR_7);
    }

    FUNC_9(VAR_10 == VAR_3, "IEnumUnknown_Next returned %x\n", VAR_10);

    FUNC_6(VAR_6);
}
