
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_6()
{
    if (!FUNC_1()) {
        ++VAR_3;
    }

    FUNC_5("LSCRIU (%d): s_requests_count %d counter %d\n", FUNC_3(),
               VAR_3, VAR_2);

    if (VAR_2 > 0 && VAR_3 <= VAR_2) {
        if (FUNC_1() == VAR_0) {
            FUNC_2();
            if (VAR_3 >= VAR_2) {



                FUNC_5("LSCRIU (%d): Time to dump main process with semaphore\n",
                           FUNC_3());
            }
        } else {
            FUNC_4(FUNC_0(), VAR_1);
            FUNC_5("LSCRIU (%d): Send kill to main process with signals\n",
                       FUNC_3());
        }
    }
}
