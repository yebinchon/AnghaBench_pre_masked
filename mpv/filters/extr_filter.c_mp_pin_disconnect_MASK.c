
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_pin {struct mp_pin* user_conn; int * manual_connection; } ;


 int FUNC_0 (struct mp_pin*) ;
 int FUNC_1 (struct mp_pin*) ;

void FUNC_2(struct mp_pin *VAR_0)
{
    if (!FUNC_1(VAR_0))
        return;

    VAR_0->manual_connection = ((void*)0);

    struct mp_pin *VAR_1 = VAR_0->user_conn;
    if (VAR_1) {
        VAR_0->user_conn = ((void*)0);
        VAR_1->user_conn = ((void*)0);
        FUNC_0(VAR_1);
    }

    FUNC_0(VAR_0);
}
