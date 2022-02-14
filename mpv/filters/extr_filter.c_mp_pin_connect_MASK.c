
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_pin {scalar_t__ dir; struct mp_pin* user_conn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_pin*) ;
 int FUNC_2 (struct mp_pin*) ;

void FUNC_3(struct mp_pin *VAR_2, struct mp_pin *VAR_3)
{
    FUNC_0(VAR_3->dir == VAR_1);
    FUNC_0(VAR_2->dir == VAR_0);

    if (VAR_2->user_conn == VAR_3) {
        FUNC_0(VAR_3->user_conn == VAR_2);
        return;
    }

    FUNC_2(VAR_3);
    FUNC_2(VAR_2);

    VAR_3->user_conn = VAR_2;
    VAR_2->user_conn = VAR_3;

    FUNC_1(VAR_3);
}
