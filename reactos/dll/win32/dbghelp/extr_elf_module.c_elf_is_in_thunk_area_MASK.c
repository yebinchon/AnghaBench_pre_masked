
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elf_thunk_area {unsigned long rva_start; unsigned long rva_end; scalar_t__ symname; } ;



int FUNC_0(unsigned long VAR_0,
                         const struct elf_thunk_area* VAR_1)
{
    unsigned VAR_2;

    if (VAR_1) for (VAR_2 = 0; VAR_1[VAR_2].symname; VAR_2++)
    {
        if (VAR_0 >= VAR_1[VAR_2].rva_start && VAR_0 < VAR_1[VAR_2].rva_end)
            return VAR_2;
    }
    return -1;
}
