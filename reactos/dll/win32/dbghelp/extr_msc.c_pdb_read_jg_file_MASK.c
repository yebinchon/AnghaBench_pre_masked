
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct PDB_JG_TOC {size_t num_files; TYPE_1__* file; } ;
struct PDB_JG_HEADER {int block_size; } ;
typedef int WORD ;
struct TYPE_2__ {int size; } ;
typedef size_t DWORD ;


 void* FUNC_0 (struct PDB_JG_HEADER const*,int const*,int) ;

__attribute__((used)) static void* FUNC_1(const struct PDB_JG_HEADER* VAR_0,
                              const struct PDB_JG_TOC* VAR_1, DWORD VAR_2)
{
    const WORD* VAR_3;
    DWORD VAR_4;

    if (!VAR_1 || VAR_2 >= VAR_1->num_files) return ((void*)0);

    VAR_3 = (const WORD*) &VAR_1->file[VAR_1->num_files];
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_3 += (VAR_1->file[VAR_4].size + VAR_0->block_size - 1) / VAR_0->block_size;

    return FUNC_0(VAR_0, VAR_3, VAR_1->file[VAR_2].size);
}
