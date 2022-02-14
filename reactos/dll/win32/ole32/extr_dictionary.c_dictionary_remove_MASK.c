
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary_entry {struct dictionary_entry* next; int value; int key; } ;
struct dictionary {int num_entries; int extra; int (* destroy ) (int ,int ,int ) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct dictionary_entry*) ;
 int FUNC_2 (char*,struct dictionary*,void const*) ;
 struct dictionary_entry** FUNC_3 (struct dictionary*,void const*) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(struct dictionary *VAR_0, const void *VAR_1)
{
    struct dictionary_entry **VAR_2, *VAR_3;

    FUNC_2("(%p, %p)\n", VAR_0, VAR_1);
    if (!VAR_0)
        return;
    if ((VAR_2 = FUNC_3(VAR_0, VAR_1)))
    {
        VAR_3 = *VAR_2;
        if (VAR_0->destroy)
            VAR_0->destroy((*VAR_2)->key, (*VAR_2)->value, VAR_0->extra);
        *VAR_2 = (*VAR_2)->next;
        FUNC_1(FUNC_0(), 0, VAR_3);
        VAR_0->num_entries--;
    }
}
