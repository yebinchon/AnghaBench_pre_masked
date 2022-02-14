
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

int FUNC_4 ()
{
    int VAR_4;
    int VAR_5;
    int VAR_6 [VAR_2];


    for (VAR_5 = 0; VAR_5 != VAR_2; ++VAR_5) {
        VAR_6 [VAR_5] = FUNC_3 (VAR_0, VAR_3);
        if (VAR_6 [VAR_5] < 0) {
            FUNC_0 (FUNC_2 () == VAR_1);
            break;
        }
    }
    while (1) {
        --VAR_5;
        if (VAR_5 == -1)
            break;
        VAR_4 = FUNC_1 (VAR_6 [VAR_5]);
        FUNC_0 (VAR_4 == 0);
    }

    return 0;
}
