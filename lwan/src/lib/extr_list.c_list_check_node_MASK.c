
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_node {struct list_node const* prev; struct list_node* next; } ;


 struct list_node* FUNC_0 (char const*,struct list_node const*,struct list_node const*,unsigned int) ;

struct list_node *FUNC_1(const struct list_node *VAR_0,
                                  const char *VAR_1)
{
    const struct list_node *VAR_2, *VAR_3;
    unsigned int VAR_4 = 0;

    for (VAR_2 = VAR_0, VAR_3 = VAR_0->next; VAR_3 != VAR_0; VAR_2 = VAR_3, VAR_3 = VAR_3->next) {
        VAR_4++;
        if (VAR_3->prev != VAR_2)
            return FUNC_0(VAR_1, VAR_0, VAR_3, VAR_4);
    }

    if (VAR_0->prev != VAR_2)
        return FUNC_0(VAR_1, VAR_0, VAR_0, 0);

    return (struct list_node *)VAR_0;
}
