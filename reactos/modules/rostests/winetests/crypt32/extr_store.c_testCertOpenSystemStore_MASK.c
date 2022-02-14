
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HCERTSTORE ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ,int,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 () ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    HCERTSTORE VAR_7;

    VAR_7 = FUNC_2(0, ((void*)0));
    FUNC_5(!VAR_7 && FUNC_3() == VAR_5,
     "Expected E_INVALIDARG, got %08x\n", FUNC_3());



    VAR_7 = FUNC_2(0, VAR_1);
    FUNC_5(VAR_7 != 0, "CertOpenSystemStore failed: %08x\n", FUNC_3());
    if (VAR_7)
        FUNC_0(VAR_7, 0);

    FUNC_1(VAR_3, 0, 0,
     VAR_4 | VAR_2, VAR_1);
    FUNC_4(VAR_6, VAR_0);
}
