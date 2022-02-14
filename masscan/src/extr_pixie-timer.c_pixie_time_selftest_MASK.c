
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint64_t ;


 int FUNC_0 (int ,char*,...) ;
 double FUNC_1 () ;
 int FUNC_2 (double const) ;
 int VAR_0 ;

int FUNC_3(void)
{
    static const uint64_t VAR_1 = 456789;
    uint64_t VAR_2, VAR_3, VAR_4;


    VAR_2 = FUNC_1();
    FUNC_2(VAR_1);
    VAR_3 = FUNC_1();
    VAR_4 = VAR_3 - VAR_2;

    if (VAR_4 < 0.9 * VAR_1) {
        FUNC_0(VAR_0, "timing error, long delay\n");
        return 1;
    }
    if (1.2 * VAR_1 < VAR_4) {
        FUNC_0(VAR_0, "timing error, long delay %5.0f%%\n", VAR_4*100.0/VAR_1);
        return 1;
    }

    return 0;
}
