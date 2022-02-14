
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int ITextStream ;
typedef int HRESULT ;
typedef int HANDLE ;
typedef scalar_t__* BSTR ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,int *) ;
 int FUNC_3 (scalar_t__*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_4 (scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__*,int ,int ,int **) ;
 int FUNC_7 (int ,scalar_t__*,int ,int ,int ,int **) ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,scalar_t__**) ;
 int FUNC_10 (int *,scalar_t__**) ;
 int FUNC_11 (int *) ;
 int VAR_10 ;
 int FUNC_12 (int ,int ,int ,int,scalar_t__*,int ) ;
 int VAR_11 ;
 int FUNC_13 (scalar_t__*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__* FUNC_14 (scalar_t__*) ;
 int FUNC_15 (scalar_t__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_16 (int) ;
 int VAR_17 ;
 int FUNC_17 (int ,scalar_t__*,scalar_t__*) ;
 int FUNC_18 (scalar_t__*,scalar_t__*) ;
 int FUNC_19 (int,char*,int,...) ;
 int FUNC_20 (int *,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_21 (scalar_t__*) ;

__attribute__((used)) static void FUNC_22(void)
{
    WCHAR VAR_20[VAR_10], VAR_21[VAR_10], VAR_22[10];
    ITextStream *VAR_23;
    BSTR VAR_24, VAR_25;
    HANDLE VAR_26;
    HRESULT VAR_27;
    BOOL VAR_28;

    FUNC_17(VAR_18, VAR_20, VAR_21);


    VAR_24 = FUNC_14(VAR_20);
    VAR_27 = FUNC_6(VAR_17, VAR_24, VAR_15, VAR_15, &VAR_23);
    FUNC_19(VAR_27 == VAR_4, "got 0x%08x\n", VAR_27);

    VAR_28 = FUNC_2(VAR_21, ((void*)0));
    FUNC_19(VAR_28, "got %d, %d\n", VAR_28, FUNC_5());

    VAR_27 = FUNC_6(VAR_17, VAR_24, VAR_15, VAR_15, &VAR_23);
    FUNC_19(VAR_27 == VAR_13, "got 0x%08x\n", VAR_27);

    FUNC_20(VAR_23, &VAR_0);

    VAR_27 = FUNC_9(VAR_23, 1, &VAR_25);
    FUNC_19(VAR_27 == VAR_2, "got 0x%08x\n", VAR_27);

    VAR_27 = FUNC_8(VAR_23);
    FUNC_19(VAR_27 == VAR_13, "got 0x%08x\n", VAR_27);

    VAR_27 = FUNC_9(VAR_23, 1, &VAR_25);
    FUNC_19(VAR_27 == VAR_2 || VAR_27 == VAR_5, "got 0x%08x\n", VAR_27);

    VAR_27 = FUNC_8(VAR_23);
    FUNC_19(VAR_27 == VAR_12 || VAR_27 == VAR_5, "got 0x%08x\n", VAR_27);

    FUNC_11(VAR_23);


    VAR_26 = FUNC_3(VAR_20, VAR_8, 0, ((void*)0), VAR_11, VAR_6, ((void*)0));
    FUNC_19(VAR_26 != VAR_9, "got %p\n", VAR_26);
    FUNC_1(VAR_26);


    VAR_27 = FUNC_6(VAR_17, VAR_24, VAR_15, VAR_15, &VAR_23);
    FUNC_19(VAR_27 == VAR_3, "got 0x%08x\n", VAR_27);


    VAR_27 = FUNC_6(VAR_17, VAR_24, VAR_16, VAR_15, &VAR_23);
    FUNC_19(VAR_27 == VAR_13, "got 0x%08x\n", VAR_27);
    FUNC_11(VAR_23);


    VAR_27 = FUNC_6(VAR_17, VAR_24, VAR_16, VAR_16, &VAR_23);
    FUNC_19(VAR_27 == VAR_13, "got 0x%08x\n", VAR_27);
    FUNC_11(VAR_23);



    VAR_22[0] = 0;
    FUNC_12(VAR_1, 0, VAR_19, -1, VAR_22, FUNC_0(VAR_22));

    VAR_27 = FUNC_7(VAR_17, VAR_24, VAR_7, VAR_15, VAR_14, &VAR_23);
    FUNC_19(VAR_27 == VAR_13, "got 0x%08x\n", VAR_27);
    VAR_27 = FUNC_10(VAR_23, &VAR_25);
    FUNC_19(VAR_27 == VAR_12 || FUNC_16(VAR_27 == VAR_13) , "got 0x%08x\n", VAR_27);
    FUNC_19(!FUNC_18(VAR_25, VAR_22), "got %s, expected %s\n", FUNC_21(VAR_25), FUNC_21(VAR_22));
    FUNC_15(VAR_25);
    FUNC_11(VAR_23);

    FUNC_4(VAR_24);
    FUNC_13(VAR_21);
    FUNC_15(VAR_24);
}
