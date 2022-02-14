
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {struct env_item* list; } ;
struct env_item {struct env_item* next; int string; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*,int,int ) ;

void
FUNC_3(int VAR_0, const struct env_set *VAR_1)
{
    if (FUNC_0(VAR_0))
    {
        const struct env_item *VAR_2;
        int VAR_3;

        if (VAR_1)
        {
            VAR_2 = VAR_1->list;
            VAR_3 = 0;

            while (VAR_2)
            {
                if (FUNC_1(VAR_2->string))
                {
                    FUNC_2(VAR_0, "ENV [%d] '%s'", VAR_3, VAR_2->string);
                }
                ++VAR_3;
                VAR_2 = VAR_2->next;
            }
        }
    }
}
