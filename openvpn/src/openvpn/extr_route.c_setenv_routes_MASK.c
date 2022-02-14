
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_list {struct route_ipv4* routes; } ;
struct route_ipv4 {struct route_ipv4* next; } ;
struct env_set {int dummy; } ;


 int FUNC_0 (struct env_set*,struct route_ipv4*,int ) ;

void
FUNC_1(struct env_set *VAR_0, const struct route_list *VAR_1)
{
    int VAR_2 = 1;
    struct route_ipv4 *VAR_3;
    for (VAR_3 = VAR_1->routes; VAR_3; VAR_3 = VAR_3->next)
    {
        FUNC_0(VAR_0, VAR_3, VAR_2++);
    }
}
