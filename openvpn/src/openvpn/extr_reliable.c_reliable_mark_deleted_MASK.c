
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;
struct reliable_entry {int active; scalar_t__ packet_id; struct buffer buf; } ;
struct reliable {int size; scalar_t__ packet_id; struct reliable_entry* array; } ;


 int FUNC_0 (int ) ;

void
FUNC_1(struct reliable *VAR_0, struct buffer *VAR_1, bool VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0->size; ++VAR_3)
    {
        struct reliable_entry *VAR_4 = &VAR_0->array[VAR_3];
        if (VAR_1 == &VAR_4->buf)
        {
            VAR_4->active = 0;
            if (VAR_2)
            {
                VAR_0->packet_id = VAR_4->packet_id + 1;
            }
            return;
        }
    }
    FUNC_0(0);
}
