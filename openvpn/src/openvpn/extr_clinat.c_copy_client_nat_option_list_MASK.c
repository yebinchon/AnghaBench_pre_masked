
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct client_nat_option_list {int n; int * entries; } ;


 int FUNC_0 (struct client_nat_option_list*,int *) ;

void
FUNC_1(struct client_nat_option_list *VAR_0,
                            const struct client_nat_option_list *VAR_1)
{
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_1->n; ++VAR_2)
    {
        if (!FUNC_0(VAR_0, &VAR_1->entries[VAR_2]))
        {
            break;
        }
    }
}
