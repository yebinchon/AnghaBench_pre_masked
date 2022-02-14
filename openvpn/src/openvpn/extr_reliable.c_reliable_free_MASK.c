
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reliable_entry {int buf; } ;
struct reliable {int size; struct reliable_entry* array; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct reliable *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->size; ++VAR_1)
    {
        struct reliable_entry *VAR_2 = &VAR_0->array[VAR_1];
        FUNC_0(&VAR_2->buf);
    }
}
