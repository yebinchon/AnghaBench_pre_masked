
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IUnknown ;
typedef int IMoniker ;
typedef int IHlinkBrowseContext ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (char*,char*,int **) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int **) ;
 scalar_t__ FUNC_3 (int *,int ,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int VAR_1 ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    IHlinkBrowseContext *VAR_5;
    IMoniker *VAR_6;
    IUnknown *VAR_7;
    WCHAR VAR_8[] = {'1',0};
    WCHAR VAR_9[] = {'5',0};
    DWORD VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_0(VAR_8, VAR_9, &VAR_6);
    FUNC_7(VAR_11 == VAR_3, "CreateItemMoniker() failed: 0x%08x\n", VAR_11);

    VAR_11 = FUNC_1(((void*)0), &VAR_1, (void **)&VAR_5);
    FUNC_7(VAR_11 == VAR_3, "HlinkCreateBrowseContext() failed: 0x%08x\n", VAR_11);

    VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_0, &VAR_7);
    FUNC_7(VAR_11 == VAR_2, "expected MK_E_UNAVAILABLE, got 0x%08x\n", VAR_11);

    VAR_11 = FUNC_3(VAR_5, 0, &VAR_4, VAR_6, &VAR_10);
    FUNC_7(VAR_11 == VAR_3, "Register() failed: 0x%08x\n", VAR_11);

    VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_0, &VAR_7);
    FUNC_7(VAR_11 == VAR_3, "GetObject() failed: 0x%08x\n", VAR_11);
    FUNC_7(VAR_7 == &VAR_4, "wrong object returned\n");

    VAR_11 = FUNC_5(VAR_5, VAR_10);
    FUNC_7(VAR_11 == VAR_3, "Revoke() failed: 0x%08x\n", VAR_11);

    VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_0, &VAR_7);
    FUNC_7(VAR_11 == VAR_2, "expected MK_E_UNAVAILABLE, got 0x%08x\n", VAR_11);

    FUNC_4(VAR_5);
    FUNC_6(VAR_6);
}
