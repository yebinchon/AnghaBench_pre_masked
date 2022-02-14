
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;
struct reliable_entry {struct buffer buf; int active; } ;
struct reliable {int size; int offset; struct reliable_entry* array; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*,int ) ;

struct buffer *
FUNC_2(struct reliable *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->size; ++VAR_1)
    {
        struct reliable_entry *VAR_2 = &VAR_0->array[VAR_1];
        if (!VAR_2->active)
        {
            FUNC_0(FUNC_1(&VAR_2->buf, VAR_0->offset));
            return &VAR_2->buf;
        }
    }
    return ((void*)0);
}
