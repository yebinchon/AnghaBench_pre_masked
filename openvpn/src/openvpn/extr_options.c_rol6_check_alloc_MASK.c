
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct options {int gc; scalar_t__ routes_ipv6; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct options *VAR_0)
{
    if (!VAR_0->routes_ipv6)
    {
        VAR_0->routes_ipv6 = FUNC_0(&VAR_0->gc);
    }
}
