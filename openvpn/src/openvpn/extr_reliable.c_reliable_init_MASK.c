
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reliable_entry {int buf; } ;
struct reliable {int hold; int size; int offset; struct reliable_entry* array; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct reliable) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int) ;

void
FUNC_4(struct reliable *VAR_1, int VAR_2, int VAR_3, int VAR_4, bool VAR_5)
{
    int VAR_6;

    FUNC_1(*VAR_1);
    FUNC_0(VAR_4 > 0 && VAR_4 <= VAR_0);
    VAR_1->hold = VAR_5;
    VAR_1->size = VAR_4;
    VAR_1->offset = VAR_3;
    for (VAR_6 = 0; VAR_6 < VAR_1->size; ++VAR_6)
    {
        struct reliable_entry *VAR_7 = &VAR_1->array[VAR_6];
        VAR_7->buf = FUNC_2(VAR_2);
        FUNC_0(FUNC_3(&VAR_7->buf, VAR_3));
    }
}
