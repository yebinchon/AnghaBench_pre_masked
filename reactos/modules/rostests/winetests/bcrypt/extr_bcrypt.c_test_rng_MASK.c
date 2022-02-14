
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int len ;
typedef int ULONG ;
typedef int UCHAR ;
typedef scalar_t__ NTSTATUS ;
typedef int * BCRYPT_ALG_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int *,int,int*,int ) ;
 scalar_t__ FUNC_3 (int **,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int *,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    BCRYPT_ALG_HANDLE VAR_5;
    ULONG VAR_6, VAR_7;
    UCHAR VAR_8[16];
    NTSTATUS VAR_9;

    VAR_5 = ((void*)0);
    VAR_9 = FUNC_3(&VAR_5, VAR_1, VAR_2, 0);
    FUNC_6(VAR_9 == VAR_4, "got %08x\n", VAR_9);
    FUNC_6(VAR_5 != ((void*)0), "alg not set\n");

    VAR_7 = VAR_6 = 0xdeadbeef;
    VAR_9 = FUNC_2(VAR_5, VAR_0, (UCHAR *)&VAR_7, sizeof(VAR_7), &VAR_6, 0);
    FUNC_6(VAR_9 == VAR_3, "got %08x\n", VAR_9);

    FUNC_7(VAR_5, "RNG");

    FUNC_5(VAR_8, 0, 16);
    VAR_9 = FUNC_1(VAR_5, VAR_8, 8, 0);
    FUNC_6(VAR_9 == VAR_4, "got %08x\n", VAR_9);
    FUNC_6(FUNC_4(VAR_8, VAR_8 + 8, 8), "got zeroes\n");

    VAR_9 = FUNC_0(VAR_5, 0);
    FUNC_6(VAR_9 == VAR_4, "got %08x\n", VAR_9);
}
