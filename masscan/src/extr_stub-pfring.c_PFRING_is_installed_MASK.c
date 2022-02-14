
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int FUNC_3 (int **,char*,char*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;

int
FUNC_5(void)
{

    FILE *VAR_0;
    int VAR_1;
    char VAR_2[256];
    int VAR_3 = 0;

    VAR_1 = FUNC_3(&VAR_0, "/proc/modules", "rb");
    if (VAR_1)
        return 0;

    while (FUNC_2(VAR_2, sizeof(VAR_2), VAR_0)) {
        if (FUNC_4(VAR_2, "pf_ring ", 8) == 0) {
            VAR_3 = 1;
            FUNC_0(2, "pfring: found 'pf_ring' driver\n");
        }
        if (FUNC_4(VAR_2, "ixgbe ", 6) == 0) {
            FUNC_0(2, "pfring: found 'ixgbe' driver\n");
        }
        if (FUNC_4(VAR_2, "e1000e ", 8) == 0) {
            FUNC_0(2, "pfring: found 'e1000e' driver\n");
        }
    }
    FUNC_1(VAR_0);
    return VAR_3;



}
