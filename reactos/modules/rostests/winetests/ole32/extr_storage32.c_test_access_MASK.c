
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int IStorage ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_3 (char const*,int,int ,int **) ;
 scalar_t__ FUNC_4 (char const*,int *,int,int *,int ,int **) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int,char*,scalar_t__) ;
 int FUNC_7 (char const*,int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_16[] = {'w','i','n','e','t','e','s','t',0};
    static const char VAR_17[] = "winetest";
    IStorage *VAR_18;
    HRESULT VAR_19;


    VAR_19 = FUNC_3(VAR_16, VAR_1 | VAR_5 |
                          VAR_9 | VAR_10, 0, &VAR_18);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_13);

    VAR_19 = FUNC_1(VAR_18, VAR_0);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_15);

    FUNC_2(VAR_18);

    FUNC_7(VAR_17, VAR_14);

    FUNC_0(VAR_17);


    VAR_19 = FUNC_3(VAR_16, VAR_1 | VAR_5 |
                          VAR_9 | VAR_2, 0, &VAR_18);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_13);

    VAR_19 = FUNC_1(VAR_18, VAR_0);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_15);

    FUNC_2(VAR_18);

    FUNC_7(VAR_17, VAR_14);

    FUNC_0(VAR_17);


    VAR_19 = FUNC_3(VAR_16, VAR_1 | VAR_5 |
                          VAR_6 | VAR_10, 0, &VAR_18);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_13);

    VAR_19 = FUNC_1(VAR_18, VAR_0);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_15);

    FUNC_2(VAR_18);

    FUNC_7(VAR_17, VAR_14);

    FUNC_0(VAR_17);


    VAR_19 = FUNC_3(VAR_16, VAR_1 | VAR_5 |
                          VAR_7 | VAR_10, 0, &VAR_18);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_13);

    VAR_19 = FUNC_1(VAR_18, VAR_0);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_15);

    FUNC_2(VAR_18);

    FUNC_7(VAR_17, VAR_14);

    FUNC_0(VAR_17);


    VAR_19 = FUNC_3(VAR_16, VAR_1 | VAR_5 |
                          VAR_8 | VAR_10, 0, &VAR_18);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_13);

    VAR_19 = FUNC_1(VAR_18, VAR_0);
    FUNC_6(VAR_19 == VAR_12, "Expected S_OK, got %08x\n", VAR_19);

    FUNC_7(VAR_17, VAR_15);

    FUNC_2(VAR_18);

    FUNC_7(VAR_17, VAR_14);

    FUNC_0(VAR_17);


    VAR_19 = FUNC_3(VAR_16, VAR_1 | VAR_5 | VAR_8 | VAR_10, 0, &VAR_18);
    FUNC_6(VAR_19 == VAR_12, "got %08x\n", VAR_19);
    FUNC_2(VAR_18);

    VAR_19 = FUNC_4(VAR_16, ((void*)0), VAR_3 | VAR_4 | VAR_6, ((void*)0), 0, &VAR_18);
    FUNC_6(VAR_19 == VAR_12 || FUNC_5(VAR_19 == VAR_11), "got %08x\n", VAR_19);
    if(VAR_19 != VAR_12)
       return;

    FUNC_7(VAR_17, VAR_13);

    FUNC_2(VAR_18);
    FUNC_7(VAR_17, VAR_14);

    FUNC_0(VAR_17);
}
