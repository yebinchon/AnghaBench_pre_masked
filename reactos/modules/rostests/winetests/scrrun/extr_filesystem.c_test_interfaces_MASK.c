
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ VARIANT_BOOL ;
typedef int IObjectWithSite ;
typedef int IDispatchEx ;
typedef int IDispatch ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *,int *,void**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int *,scalar_t__*) ;
 int FUNC_5 (int ,int *,void**) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_6 (char const*) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static void FUNC_12(void)
{
    static const WCHAR VAR_11[] = {
        'c', ':', '\\', 'N', 'o', 'n', 'e', 'x', 'i', 's', 't', 'e', 'n', 't', 0};
    static const WCHAR VAR_12[] = {'p','a','t','h',0};
    static const WCHAR VAR_13[] = {
        '\\', 'k', 'e', 'r', 'n', 'e', 'l', '3', '2', '.', 'd', 'l', 'l', 0};
    HRESULT VAR_14;
    IDispatch *VAR_15;
    IDispatchEx *VAR_16;
    IObjectWithSite *VAR_17;
    VARIANT_BOOL VAR_18;
    BSTR VAR_19;
    WCHAR VAR_20[VAR_6];
    WCHAR VAR_21[VAR_6];

    FUNC_5(VAR_10, &VAR_3, (void**)&VAR_15);

    FUNC_0(VAR_20, VAR_6);
    FUNC_9(VAR_21, VAR_20);
    FUNC_8(VAR_21, VAR_13);

    FUNC_11(VAR_15, &VAR_0);

    VAR_14 = FUNC_1(VAR_15, &VAR_5, (void**)&VAR_17);
    FUNC_10(VAR_14 == VAR_1, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_1);

    VAR_14 = FUNC_1(VAR_15, &VAR_4, (void**)&VAR_16);
    FUNC_10(VAR_14 == VAR_1, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_1);

    VAR_18 = VAR_9;
    VAR_14 = FUNC_3(VAR_10, ((void*)0), &VAR_18);
    FUNC_10(VAR_14 == VAR_7, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_7);
    FUNC_10(VAR_18 == VAR_8, "got %x\n", VAR_18);

    VAR_14 = FUNC_3(VAR_10, ((void*)0), ((void*)0));
    FUNC_10(VAR_14 == VAR_2, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_2);

    VAR_19 = FUNC_6(VAR_12);
    VAR_18 = VAR_9;
    VAR_14 = FUNC_3(VAR_10, VAR_19, &VAR_18);
    FUNC_10(VAR_14 == VAR_7, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_7);
    FUNC_10(VAR_18 == VAR_8, "got %x\n", VAR_18);
    FUNC_7(VAR_19);

    VAR_19 = FUNC_6(VAR_21);
    VAR_18 = VAR_8;
    VAR_14 = FUNC_3(VAR_10, VAR_19, &VAR_18);
    FUNC_10(VAR_14 == VAR_7, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_7);
    FUNC_10(VAR_18 == VAR_9, "got %x\n", VAR_18);
    FUNC_7(VAR_19);

    VAR_19 = FUNC_6(VAR_20);
    VAR_18 = VAR_9;
    VAR_14 = FUNC_3(VAR_10, VAR_19, &VAR_18);
    FUNC_10(VAR_14 == VAR_7, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_7);
    FUNC_10(VAR_18 == VAR_8, "got %x\n", VAR_18);
    FUNC_7(VAR_19);


    VAR_14 = FUNC_4(VAR_10, ((void*)0), ((void*)0));
    FUNC_10(VAR_14 == VAR_2, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_2);

    VAR_19 = FUNC_6(VAR_20);
    VAR_14 = FUNC_4(VAR_10, VAR_19, &VAR_18);
    FUNC_10(VAR_14 == VAR_7, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_7);
    FUNC_10(VAR_18 == VAR_9, "Folder doesn't exists\n");
    FUNC_7(VAR_19);

    VAR_19 = FUNC_6(VAR_11);
    VAR_14 = FUNC_4(VAR_10, VAR_19, &VAR_18);
    FUNC_10(VAR_14 == VAR_7, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_7);
    FUNC_10(VAR_18 == VAR_8, "Folder exists\n");
    FUNC_7(VAR_19);

    VAR_19 = FUNC_6(VAR_21);
    VAR_14 = FUNC_4(VAR_10, VAR_19, &VAR_18);
    FUNC_10(VAR_14 == VAR_7, "got 0x%08x, expected 0x%08x\n", VAR_14, VAR_7);
    FUNC_10(VAR_18 == VAR_8, "Folder exists\n");
    FUNC_7(VAR_19);

    FUNC_2(VAR_15);
}
