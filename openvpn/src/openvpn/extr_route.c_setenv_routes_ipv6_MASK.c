
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_ipv6_list {struct route_ipv6* routes_ipv6; } ;
struct route_ipv6 {struct route_ipv6* next; } ;
struct env_set {int dummy; } ;


 int FUNC_0 (struct env_set*,struct route_ipv6*,int ) ;

void
FUNC_1(struct env_set *VAR_0, const struct route_ipv6_list *VAR_1)
{
    int VAR_2 = 1;
    struct route_ipv6 *VAR_3;
    for (VAR_3 = VAR_1->routes_ipv6; VAR_3; VAR_3 = VAR_3->next)
    {
        FUNC_0(VAR_0, VAR_3, VAR_2++);
    }
}
