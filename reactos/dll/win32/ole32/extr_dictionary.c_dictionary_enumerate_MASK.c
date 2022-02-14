
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary_entry {int value; int key; struct dictionary_entry* next; } ;
struct dictionary {int extra; struct dictionary_entry* head; } ;
typedef int (* enumeratefunc ) (int ,int ,int ,void*) ;


 int FUNC_0 (char*,struct dictionary*,int (*) (int ,int ,int ,void*),void*) ;

void FUNC_1(struct dictionary *VAR_0, enumeratefunc VAR_1, void *VAR_2)
{
    struct dictionary_entry *VAR_3;

    FUNC_0("(%p, %p, %p)\n", VAR_0, VAR_1, VAR_2);
    if (!VAR_0)
        return;
    if (!VAR_1)
        return;
    for (VAR_3 = VAR_0->head; VAR_3; VAR_3 = VAR_3->next)
        if (!VAR_1(VAR_3->key, VAR_3->value, VAR_0->extra, VAR_2))
            break;
}
