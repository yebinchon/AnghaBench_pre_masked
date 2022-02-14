
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_list {struct route_ipv4* routes; } ;
struct route_ipv4 {struct route_ipv4* next; } ;


 int FUNC_0 (struct route_ipv4*,int) ;

void
FUNC_1(const struct route_list *VAR_0, int VAR_1)
{
    struct route_ipv4 *VAR_2;
    for (VAR_2 = VAR_0->routes; VAR_2; VAR_2 = VAR_2->next)
    {
        FUNC_0(VAR_2, VAR_1);
    }
}
