
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vbase_descr; int vbase_offset; int this_offset; } ;
typedef TYPE_1__ this_ptr_offsets ;



__attribute__((used)) static inline void* FUNC_0(const this_ptr_offsets* VAR_0, void* VAR_1)
{
    if (!VAR_1) return ((void*)0);

    if (VAR_0->vbase_descr >= 0)
    {
        int* VAR_2;


        VAR_1 = (char*)VAR_1 + VAR_0->vbase_descr;

        VAR_2 = (int*)(*(char**)VAR_1 + VAR_0->vbase_offset);
        VAR_1 = (char*)VAR_1 + *VAR_2;
    }

    VAR_1 = (char*)VAR_1 + VAR_0->this_offset;
    return VAR_1;
}
