
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffW ;
typedef int buffA ;
typedef char WCHAR ;
typedef int ITextStream ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef size_t DWORD ;
typedef int BSTR ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int *) ;
 scalar_t__ FUNC_3 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ,int **) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int VAR_4 ;
 size_t FUNC_9 (int ,int ,char*,size_t,char*,int ) ;
 int VAR_5 ;
 int FUNC_10 (scalar_t__,char*,int,size_t*,int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (char*,char*) ;
 int FUNC_17 (char*,int ) ;
 int FUNC_18 (int,char*,int,...) ;
 int VAR_11 ;
 int FUNC_19 (char*) ;

__attribute__((used)) static void FUNC_20(void)
{
    WCHAR VAR_12[VAR_4], VAR_13[VAR_4];
    WCHAR VAR_14[VAR_4], VAR_15[VAR_4];
    char VAR_16[VAR_4];
    ITextStream *VAR_17;
    DWORD VAR_18, VAR_19;
    HANDLE VAR_20;
    BSTR VAR_21;
    HRESULT VAR_22;
    BOOL VAR_23;

    FUNC_14(VAR_11, VAR_12, VAR_13);

    VAR_23 = FUNC_2(VAR_13, ((void*)0));
    FUNC_18(VAR_23, "got %d, %d\n", VAR_23, FUNC_5());


    VAR_21 = FUNC_12(VAR_12);
    VAR_22 = FUNC_6(VAR_10, VAR_21, VAR_7, VAR_7, &VAR_17);
    FUNC_18(VAR_22 == VAR_6, "got 0x%08x\n", VAR_22);

    VAR_22 = FUNC_8(VAR_17, VAR_21);
    FUNC_18(VAR_22 == VAR_6, "got 0x%08x\n", VAR_22);
    FUNC_7(VAR_17);


    VAR_20 = FUNC_3(VAR_12, VAR_2, 0, ((void*)0), VAR_5, VAR_1, ((void*)0));
    FUNC_18(VAR_20 != VAR_3, "got %p\n", VAR_20);
    VAR_18 = 0;
    VAR_23 = FUNC_10(VAR_20, VAR_16, sizeof(VAR_16), &VAR_18, ((void*)0));
    FUNC_18(VAR_23 && VAR_18, "read %d, got %d, %d\n", VAR_18, VAR_23, FUNC_5());

    VAR_19 = FUNC_9(VAR_0, 0, VAR_16, VAR_18, VAR_14, FUNC_0(VAR_14));
    VAR_14[VAR_19] = 0;
    FUNC_17(VAR_15, VAR_21);
    FUNC_15(VAR_15, VAR_9);
    FUNC_18(!FUNC_16(VAR_15, VAR_14), "got %s, expected %s\n", FUNC_19(VAR_14), FUNC_19(VAR_15));
    FUNC_1(VAR_20);
    FUNC_4(VAR_21);


    VAR_22 = FUNC_6(VAR_10, VAR_21, VAR_7, VAR_8, &VAR_17);
    FUNC_18(VAR_22 == VAR_6, "got 0x%08x\n", VAR_22);

    VAR_22 = FUNC_8(VAR_17, VAR_21);
    FUNC_18(VAR_22 == VAR_6, "got 0x%08x\n", VAR_22);
    FUNC_7(VAR_17);


    VAR_20 = FUNC_3(VAR_12, VAR_2, 0, ((void*)0), VAR_5, VAR_1, ((void*)0));
    FUNC_18(VAR_20 != VAR_3, "got %p\n", VAR_20);
    VAR_18 = 0;
    VAR_23 = FUNC_10(VAR_20, VAR_14, sizeof(VAR_14), &VAR_18, ((void*)0));
    FUNC_18(VAR_23 && VAR_18, "read %d, got %d, %d\n", VAR_18, VAR_23, FUNC_5());
    VAR_14[VAR_18/sizeof(WCHAR)] = 0;

    VAR_15[0] = 0xfeff;
    VAR_15[1] = 0;
    FUNC_15(VAR_15, VAR_21);
    FUNC_15(VAR_15, VAR_9);
    FUNC_18(!FUNC_16(VAR_15, VAR_14), "got %s, expected %s\n", FUNC_19(VAR_14), FUNC_19(VAR_15));
    FUNC_1(VAR_20);
    FUNC_4(VAR_21);

    FUNC_11(VAR_13);
    FUNC_13(VAR_21);
}
