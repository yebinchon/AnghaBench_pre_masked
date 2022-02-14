
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reliable_entry {int timeout; int next_try; scalar_t__ active; } ;
struct reliable {int hold; int size; int initial_timeout; struct reliable_entry* array; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;

void
FUNC_1(struct reliable *VAR_2)
{
    int VAR_3;
    FUNC_0(VAR_0, "ACK reliable_schedule_now");
    VAR_2->hold = 0;
    for (VAR_3 = 0; VAR_3 < VAR_2->size; ++VAR_3)
    {
        struct reliable_entry *VAR_4 = &VAR_2->array[VAR_3];
        if (VAR_4->active)
        {
            VAR_4->next_try = VAR_1;
            VAR_4->timeout = VAR_2->initial_timeout;
        }
    }
}
