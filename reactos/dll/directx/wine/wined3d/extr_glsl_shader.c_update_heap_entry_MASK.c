
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_heap {unsigned int* positions; scalar_t__* contained; int size; struct constant_entry* entries; } ;
struct constant_entry {scalar_t__ version; size_t idx; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct constant_heap *VAR_1, unsigned int VAR_2, DWORD VAR_3)
{
    struct constant_entry *VAR_4 = VAR_1->entries;
    unsigned int *VAR_5 = VAR_1->positions;
    unsigned int VAR_6, VAR_7;

    if (!VAR_1->contained[VAR_2])
    {
        VAR_6 = VAR_1->size++;
        VAR_1->contained[VAR_2] = VAR_0;
    }
    else
    {
        VAR_6 = VAR_5[VAR_2];
    }

    while (VAR_6 > 1)
    {
        VAR_7 = VAR_6 >> 1;

        if (VAR_3 <= VAR_4[VAR_7].version) break;

        VAR_4[VAR_6] = VAR_4[VAR_7];
        VAR_5[VAR_4[VAR_7].idx] = VAR_6;
        VAR_6 = VAR_7;
    }

    VAR_4[VAR_6].version = VAR_3;
    VAR_4[VAR_6].idx = VAR_2;
    VAR_5[VAR_2] = VAR_6;
}
