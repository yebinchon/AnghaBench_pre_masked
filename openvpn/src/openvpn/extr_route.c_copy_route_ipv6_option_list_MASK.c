
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_ipv6_option_list {struct gc_arena* gc; } ;
struct gc_arena {int dummy; } ;



void
FUNC_0(struct route_ipv6_option_list *VAR_0,
                            const struct route_ipv6_option_list *VAR_1,
                            struct gc_arena *VAR_2)
{
    *VAR_0 = *VAR_1;
    VAR_0->gc = VAR_2;
}
