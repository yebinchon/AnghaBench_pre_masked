
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct gc_entry {struct gc_entry* next; } ;
struct gc_arena {struct gc_entry* list; } ;
struct buffer {int * data; } ;


 int FUNC_0 (struct buffer) ;
 int FUNC_1 (struct gc_entry*) ;

__attribute__((used)) static void
FUNC_2(struct buffer *VAR_0, struct gc_arena *VAR_1)
{
    if (VAR_1)
    {
        struct gc_entry **VAR_2 = &VAR_1->list;

        while (*VAR_2)
        {

            if ((uint8_t *)(*VAR_2 + 1) == VAR_0->data)
            {
                struct gc_entry *VAR_3 = *VAR_2;


                *VAR_2 = (*VAR_2)->next;
                FUNC_1(VAR_3);

                break;
            }

            VAR_2 = &(*VAR_2)->next;
        }
    }

    FUNC_0(*VAR_0);
}
