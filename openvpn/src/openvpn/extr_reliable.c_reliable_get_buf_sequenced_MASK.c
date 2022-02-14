
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;
struct reliable_entry {scalar_t__ packet_id; struct buffer buf; scalar_t__ active; } ;
struct reliable {int size; scalar_t__ packet_id; struct reliable_entry* array; } ;



struct buffer *
FUNC_0(struct reliable *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->size; ++VAR_1)
    {
        struct reliable_entry *VAR_2 = &VAR_0->array[VAR_1];
        if (VAR_2->active && VAR_2->packet_id == VAR_0->packet_id)
        {
            return &VAR_2->buf;
        }
    }
    return ((void*)0);
}
