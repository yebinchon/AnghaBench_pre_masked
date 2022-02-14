
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rnd2 ;
typedef int rnd1 ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int,int *) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static void FUNC_5(void)
{
    BOOL VAR_2;
    BYTE VAR_3[16], VAR_4[16];

    FUNC_3(VAR_3, 0, sizeof(VAR_3));
    FUNC_3(VAR_4, 0, sizeof(VAR_4));

    VAR_2 = FUNC_0(VAR_1, sizeof(VAR_3), VAR_3);
    if (!VAR_2 && FUNC_1() == VAR_0) {

        return;
    }

    FUNC_4(VAR_2, "%08x\n", FUNC_1());

    VAR_2 = FUNC_0(VAR_1, sizeof(VAR_4), VAR_4);
    FUNC_4(VAR_2, "%08x\n", FUNC_1());

    FUNC_4(FUNC_2(VAR_3, VAR_4, sizeof(VAR_3)), "CryptGenRandom generates non random data\n");
}
