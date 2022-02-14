
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct reliable_entry {scalar_t__ const next_try; scalar_t__ active; } ;
struct reliable {int size; struct reliable_entry* array; } ;
struct gc_arena {int dummy; } ;
typedef scalar_t__ interval_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__ const) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct reliable const*,struct gc_arena*) ;

interval_t
FUNC_5(const struct reliable *VAR_3)
{
    struct gc_arena VAR_4 = FUNC_2();
    interval_t VAR_5 = VAR_0;
    int VAR_6;
    const time_t VAR_7 = VAR_2;

    for (VAR_6 = 0; VAR_6 < VAR_3->size; ++VAR_6)
    {
        const struct reliable_entry *VAR_8 = &VAR_3->array[VAR_6];
        if (VAR_8->active)
        {
            if (VAR_8->next_try <= VAR_7)
            {
                VAR_5 = 0;
                break;
            }
            else
            {
                VAR_5 = FUNC_3(VAR_5, VAR_8->next_try - VAR_7);
            }
        }
    }

    FUNC_0(VAR_1, "ACK reliable_send_timeout %d %s",
         (int) VAR_5,
         FUNC_4(VAR_3, &VAR_4));

    FUNC_1(&VAR_4);
    return VAR_5;
}
