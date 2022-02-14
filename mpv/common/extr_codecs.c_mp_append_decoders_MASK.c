
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_decoder_list {int num_entries; int * entries; } ;


 int FUNC_0 (struct mp_decoder_list*,int *,int *) ;

void FUNC_1(struct mp_decoder_list *VAR_0, struct mp_decoder_list *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->num_entries; VAR_2++)
        FUNC_0(VAR_0, &VAR_1->entries[VAR_2], ((void*)0));
}
