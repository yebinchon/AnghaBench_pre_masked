
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reliable_entry {int packet_id; scalar_t__ active; } ;
struct reliable {int size; int packet_id; struct reliable_entry* array; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
typedef int packet_id_type ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 struct buffer* FUNC_3 (struct reliable*) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct reliable*,struct gc_arena*) ;

struct buffer *
FUNC_7(struct reliable *VAR_1)
{
    struct gc_arena VAR_2 = FUNC_2();
    int VAR_3;
    packet_id_type VAR_4 = 0;
    bool VAR_5 = 0;
    struct buffer *VAR_6 = ((void*)0);


    for (VAR_3 = 0; VAR_3 < VAR_1->size; ++VAR_3)
    {
        const struct reliable_entry *VAR_7 = &VAR_1->array[VAR_3];
        if (VAR_7->active)
        {
            if (!VAR_5 || FUNC_5(VAR_7->packet_id, VAR_4))
            {
                VAR_5 = 1;
                VAR_4 = VAR_7->packet_id;
            }
        }
    }

    if (!VAR_5 || FUNC_4(VAR_1->packet_id, VAR_4, VAR_1->size))
    {
        VAR_6 = FUNC_3(VAR_1);
    }
    else
    {
        FUNC_0(VAR_0, "ACK output sequence broken: %s", FUNC_6(VAR_1, &VAR_2));
    }
    FUNC_1(&VAR_2);
    return VAR_6;
}
