
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct constant_heap {unsigned int* positions; int size; int * contained; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ version; } ;
typedef unsigned int SIZE_T ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int ,unsigned int) ;

__attribute__((used)) static BOOL FUNC_3(struct constant_heap *VAR_2, unsigned int VAR_3)
{
    SIZE_T VAR_4 = (VAR_3 + 1) * sizeof(*VAR_2->entries)
            + VAR_3 * sizeof(*VAR_2->contained)
            + VAR_3 * sizeof(*VAR_2->positions);
    void *VAR_5;

    if (!(VAR_5 = FUNC_1(VAR_4)))
    {
        FUNC_0("Failed to allocate memory\n");
        return VAR_0;
    }

    VAR_2->entries = VAR_5;
    VAR_2->entries[1].version = 0;
    VAR_2->contained = (BOOL *)(VAR_2->entries + VAR_3 + 1);
    FUNC_2(VAR_2->contained, 0, VAR_3 * sizeof(*VAR_2->contained));
    VAR_2->positions = (unsigned int *)(VAR_2->contained + VAR_3);
    VAR_2->size = 1;

    return VAR_1;
}
