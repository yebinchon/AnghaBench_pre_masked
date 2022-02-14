
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_pin {struct mp_filter* manual_connection; } ;
struct mp_filter {int dummy; } ;



struct mp_filter *FUNC_0(struct mp_pin *VAR_0)
{
    return VAR_0->manual_connection;
}
