
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary_entry {struct dictionary_entry* next; void* value; void* key; } ;
struct dictionary {int num_entries; struct dictionary_entry* head; int extra; int (* destroy ) (void*,void*,int ) ;} ;


 int FUNC_0 () ;
 struct dictionary_entry* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,struct dictionary*,void const*,void const*) ;
 struct dictionary_entry** FUNC_3 (struct dictionary*,void const*) ;
 int FUNC_4 (void*,void*,int ) ;

void FUNC_5(struct dictionary *VAR_0, const void *VAR_1, const void *VAR_2)
{
    struct dictionary_entry **VAR_3;

    FUNC_2("(%p, %p, %p)\n", VAR_0, VAR_1, VAR_2);
    if (!VAR_0)
        return;
    if ((VAR_3 = FUNC_3(VAR_0, VAR_1)))
    {
        if (VAR_0->destroy)
            VAR_0->destroy((*VAR_3)->key, (*VAR_3)->value, VAR_0->extra);
        (*VAR_3)->key = (void *)VAR_1;
        (*VAR_3)->value = (void *)VAR_2;
    }
    else
    {
        struct dictionary_entry *VAR_4 = FUNC_1(FUNC_0(), 0,
                                            sizeof(struct dictionary_entry));

        if (!VAR_4)
            return;
        VAR_4->key = (void *)VAR_1;
        VAR_4->value = (void *)VAR_2;
        VAR_4->next = VAR_0->head;
        VAR_0->head = VAR_4;
        VAR_0->num_entries++;
    }
}
