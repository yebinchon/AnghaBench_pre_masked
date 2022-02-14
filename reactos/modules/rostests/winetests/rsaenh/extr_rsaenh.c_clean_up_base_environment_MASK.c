
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (int,char*,...) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(void)
{
    BOOL VAR_7;

    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_1(VAR_4, 1);
    FUNC_5(!VAR_7 || FUNC_4(VAR_7) , "Expected failure\n");
    FUNC_5(FUNC_2()==VAR_2, "Expected NTE_BAD_FLAGS, got %08x\n", FUNC_2());


    FUNC_3(0xdeadbeef);
    VAR_7 = FUNC_1(VAR_4, 0);
    FUNC_5(!VAR_7 && FUNC_2()==VAR_1, "%08x\n", FUNC_2());

    FUNC_0(&VAR_4, VAR_5, VAR_6, VAR_3, VAR_0);
}
