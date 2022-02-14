
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PDB_DS_TOC {size_t num_files; int* file_size; } ;
struct PDB_DS_HEADER {int block_size; } ;
typedef size_t DWORD ;


 void* FUNC_0 (struct PDB_DS_HEADER const*,size_t const*,int) ;

__attribute__((used)) static void* FUNC_1(const struct PDB_DS_HEADER* VAR_0,
                              const struct PDB_DS_TOC* VAR_1, DWORD VAR_2)
{
    const DWORD* VAR_3;
    DWORD VAR_4;

    if (!VAR_1 || VAR_2 >= VAR_1->num_files) return ((void*)0);
    if (VAR_1->file_size[VAR_2] == 0 || VAR_1->file_size[VAR_2] == 0xFFFFFFFF) return ((void*)0);

    VAR_3 = &VAR_1->file_size[VAR_1->num_files];
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
        VAR_3 += (VAR_1->file_size[VAR_4] + VAR_0->block_size - 1) / VAR_0->block_size;

    return FUNC_0(VAR_0, VAR_3, VAR_1->file_size[VAR_2]);
}
