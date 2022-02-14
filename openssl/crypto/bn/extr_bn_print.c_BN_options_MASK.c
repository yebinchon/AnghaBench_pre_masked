
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int data ;
typedef int BN_ULONG ;
typedef int BN_ULLONG ;


 int FUNC_0 (char*,int,char*,int,int) ;

char *FUNC_1(void)
{
    static int VAR_0 = 0;
    static char VAR_1[16];

    if (!VAR_0) {
        VAR_0++;




        FUNC_0(VAR_1, sizeof(VAR_1), "bn(%zu,%zu)",
                     sizeof(BN_ULONG) * 8, sizeof(BN_ULONG) * 8);

    }
    return VAR_1;
}
