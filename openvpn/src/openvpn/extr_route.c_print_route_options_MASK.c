
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct route_option_list {int flags; struct route_option* routes; } ;
struct route_option {struct route_option* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct route_option*,int) ;

void
FUNC_2(const struct route_option_list *VAR_2,
                    int VAR_3)
{
    struct route_option *VAR_4;
    if (VAR_2->flags & VAR_0)
    {
        FUNC_0(VAR_3, "  [redirect_default_gateway local=%d]",
            (VAR_2->flags & VAR_1) != 0);
    }
    for (VAR_4 = VAR_2->routes; VAR_4; VAR_4 = VAR_4->next)
    {
        FUNC_1(VAR_4, VAR_3);
    }
}
