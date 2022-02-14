
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct env_set {struct env_item* list; } ;
struct env_item {struct env_item* next; int string; } ;


 int FUNC_0 (struct env_set*) ;
 int FUNC_1 (struct env_set*,int ) ;

void
FUNC_2(struct env_set *VAR_0, const struct env_set *VAR_1)
{
    const struct env_item *VAR_2;

    FUNC_0(VAR_0);

    if (VAR_1)
    {
        VAR_2 = VAR_1->list;
        while (VAR_2)
        {
            FUNC_1(VAR_0, VAR_2->string);
            VAR_2 = VAR_2->next;
        }
    }
}
