
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HCERTSTORE ;
typedef int BOOL ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 () ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    HCERTSTORE VAR_14, VAR_15;


    VAR_14 = FUNC_2(VAR_6, 0, 0,
     VAR_7 | VAR_4, VAR_13);



    if (!VAR_14)
        return;


    VAR_15 = FUNC_2(VAR_5, 0, 0,
     VAR_2, ((void*)0));
    if (VAR_15)
    {
        BOOL VAR_16 = FUNC_0(VAR_14, VAR_15, 0, 0);
        FUNC_5(!VAR_16 && FUNC_3() == VAR_10, "Expected E_INVALIDARG, got %08x\n", FUNC_3());
        FUNC_1(VAR_15, 0);
    }
    FUNC_1(VAR_14, 0);


    VAR_14 = FUNC_2(VAR_6, 0, 0,
     VAR_7 | VAR_4, VAR_1);
    FUNC_5(!VAR_14 && FUNC_3() == VAR_9,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());
    VAR_14 = FUNC_2(VAR_6, 0, 0,
     VAR_7, VAR_1);
    FUNC_5(VAR_14 != 0, "CertOpenStore failed: %08x\n", FUNC_3());
    if (VAR_14)
        FUNC_1(VAR_14, 0);

    VAR_14 = FUNC_2(VAR_6, 0, 0,
     VAR_7 | VAR_3, VAR_1);
    FUNC_5(!VAR_14, "CertOpenStore failed: %08x\n", FUNC_3());
    FUNC_4(VAR_11, VAR_0);

    VAR_14 = FUNC_2(VAR_6, 0, 0, 0, ((void*)0));
    FUNC_5(!VAR_14 && FUNC_3() == VAR_10,
     "Expected E_INVALIDARG, got %08x\n", FUNC_3());
    VAR_14 = FUNC_2(VAR_6, 0, 0,
     VAR_8 | VAR_7, VAR_12);
    FUNC_5(!VAR_14 && FUNC_3() == VAR_10,
     "Expected E_INVALIDARG, got %08x\n", FUNC_3());
    VAR_14 = FUNC_2(VAR_6, 0, 0,
     VAR_8 | VAR_7, VAR_13);
    FUNC_5(!VAR_14 && FUNC_3() == VAR_10,
     "Expected E_INVALIDARG, got %08x\n", FUNC_3());

    VAR_14 = FUNC_2(VAR_6, 0, 0,
     VAR_7 | VAR_4, VAR_12);
    FUNC_5(!VAR_14 && FUNC_3() == VAR_9,
     "Expected ERROR_FILE_NOT_FOUND, got %08x\n", FUNC_3());
}
