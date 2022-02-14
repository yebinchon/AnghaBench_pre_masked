
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sltg_typelib {int n_file_blocks; struct sltg_block* blocks; } ;
struct sltg_block {int length; int index_string; struct sltg_block* next; void* data; } ;


 struct sltg_block* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct sltg_typelib *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    struct sltg_block *VAR_4 = FUNC_0(sizeof(*VAR_4));

    VAR_4->length = VAR_2;
    VAR_4->data = VAR_1;
    VAR_4->index_string = VAR_3;
    VAR_4->next = ((void*)0);

    if (VAR_0->blocks)
    {
        struct sltg_block *VAR_5 = VAR_0->blocks;

        while (VAR_5->next)
            VAR_5 = VAR_5->next;

        VAR_5->next = VAR_4;
    }
    else
        VAR_0->blocks = VAR_4;

    VAR_0->n_file_blocks++;
}
