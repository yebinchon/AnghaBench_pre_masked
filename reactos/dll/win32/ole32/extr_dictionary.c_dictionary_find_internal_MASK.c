
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary_entry {struct dictionary_entry* next; int key; } ;
struct dictionary {scalar_t__ (* comp ) (void const*,int ,int ) ;int extra; struct dictionary_entry* head; } ;


 int FUNC_0 (struct dictionary*) ;
 scalar_t__ FUNC_1 (void const*,int ,int ) ;
 scalar_t__ FUNC_2 (void const*,int ,int ) ;

__attribute__((used)) static struct dictionary_entry **FUNC_3(struct dictionary *VAR_0,
 const void *VAR_1)
{
    struct dictionary_entry **VAR_2 = ((void*)0);
    struct dictionary_entry *VAR_3;

    FUNC_0(VAR_0);

    if (VAR_0->head && VAR_0->comp(VAR_1, VAR_0->head->key, VAR_0->extra) == 0)
        VAR_2 = &VAR_0->head;
    for (VAR_3 = VAR_0->head; !VAR_2 && VAR_3 && VAR_3->next; VAR_3 = VAR_3->next)
    {
        if (VAR_0->comp(VAR_1, VAR_3->next->key, VAR_0->extra) == 0)
            VAR_2 = &VAR_3->next;
    }
    return VAR_2;
}
