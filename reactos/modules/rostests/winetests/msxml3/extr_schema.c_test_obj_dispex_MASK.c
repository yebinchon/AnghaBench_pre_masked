
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int UINT ;
typedef int IUnknown ;
typedef int IDispatchEx ;
typedef int * HRESULT ;
typedef int * DWORD ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int * FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int *,int ,int ,int *) ;
 int * FUNC_5 (int *,int ,int *) ;
 int * FUNC_6 (int *,int ,int ,int **) ;
 int * FUNC_7 (int *,int **) ;
 int * FUNC_8 (int *,int ,int ,int *) ;
 int * FUNC_9 (int *,int*) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int * FUNC_11 (int *,int *,void**) ;
 scalar_t__ FUNC_12 (int *) ;
 int VAR_5 ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int,char*,int) ;

__attribute__((used)) static void FUNC_16(IUnknown *VAR_10)
{
    static const WCHAR VAR_11[] = {'t','e','s','t','p','r','o','p',0};
    static const WCHAR VAR_12[] = {'*',0};
    DISPID VAR_13 = VAR_0;
    IDispatchEx *VAR_14;
    IUnknown *VAR_15;
    DWORD VAR_16;
    UINT VAR_17;
    HRESULT VAR_18;
    BSTR VAR_19;

    VAR_18 = FUNC_11(VAR_10, &VAR_4, (void**)&VAR_14);
    FUNC_0(VAR_18, VAR_5);
    if (FUNC_1(VAR_18)) return;

    VAR_17 = 0;
    VAR_18 = FUNC_9(VAR_14, &VAR_17);
    FUNC_0(VAR_18, VAR_5);
    FUNC_15(VAR_17 == 1, "ticnt=%u\n", VAR_17);

    VAR_19 = FUNC_13(VAR_12);
    VAR_18 = FUNC_3(VAR_14, VAR_19, VAR_7);
    FUNC_0(VAR_18, VAR_3);
    FUNC_14(VAR_19);

    VAR_18 = FUNC_2(VAR_14, VAR_13);
    FUNC_0(VAR_18, VAR_3);

    VAR_16 = 0;
    VAR_18 = FUNC_6(VAR_14, VAR_13, VAR_9, &VAR_16);
    FUNC_0(VAR_18, VAR_3);
    FUNC_15(VAR_16 == 0, "expected 0 got %d\n", *VAR_16);

    VAR_18 = FUNC_5(VAR_14, VAR_13, &VAR_19);
    FUNC_0(VAR_18, VAR_3);
    if (FUNC_12(VAR_18)) FUNC_14(VAR_19);

    VAR_18 = FUNC_8(VAR_14, VAR_6, VAR_1, &VAR_13);
    FUNC_0(VAR_18, VAR_3);

    VAR_15 = (IUnknown*)0xdeadbeef;
    VAR_18 = FUNC_7(VAR_14, &VAR_15);
    FUNC_0(VAR_18, VAR_3);
    FUNC_15(VAR_15 == (IUnknown*)0xdeadbeef, "got %p\n", *VAR_15);

    VAR_19 = FUNC_13(VAR_11);
    VAR_18 = FUNC_4(VAR_14, VAR_19, VAR_8, &VAR_13);
    FUNC_15(VAR_18 == VAR_2, "got 0x%08x\n", *VAR_18);
    FUNC_14(VAR_19);

    FUNC_10(VAR_14);
}
