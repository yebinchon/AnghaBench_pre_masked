
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_pin {struct mp_filter* manual_connection; scalar_t__ within_conn; } ;
struct mp_filter {int dummy; } ;


 int FUNC_0 (struct mp_pin*) ;
 int FUNC_1 (struct mp_pin*) ;

void FUNC_2(struct mp_pin *VAR_0, struct mp_filter *VAR_1)
{
    if (VAR_0->manual_connection == VAR_1)
        return;
    if (VAR_0->within_conn)
        FUNC_1(VAR_0);
    VAR_0->manual_connection = VAR_1;
    FUNC_0(VAR_0);
}
