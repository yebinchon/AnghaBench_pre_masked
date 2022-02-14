
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dictionary_entry {int extra; int value; int key; int (* destroy ) (int ,int ,int ) ;struct dictionary_entry* next; struct dictionary_entry* head; } ;
struct dictionary {int extra; int value; int key; int (* destroy ) (int ,int ,int ) ;struct dictionary* next; struct dictionary* head; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,struct dictionary_entry*) ;
 int FUNC_2 (char*,struct dictionary_entry*) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct dictionary *VAR_0)
{
    FUNC_2("(%p)\n", VAR_0);
    if (VAR_0)
    {
        struct dictionary_entry *VAR_1;

        for (VAR_1 = VAR_0->head; VAR_1; )
        {
            struct dictionary_entry *VAR_2 = VAR_1->next;

            if (VAR_0->destroy)
                VAR_0->destroy(VAR_1->key, VAR_1->value, VAR_0->extra);
            FUNC_1(FUNC_0(), 0, VAR_1);
            VAR_1 = VAR_2;
        }
        FUNC_1(FUNC_0(), 0, VAR_0);
    }
}
