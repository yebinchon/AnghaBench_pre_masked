
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct PDB_DS_HEADER {int block_size; } ;
typedef int DWORD ;
typedef void BYTE ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (void*,char const*,int const) ;

__attribute__((used)) static void* FUNC_3(const struct PDB_DS_HEADER* VAR_0, const DWORD* VAR_1,
                         int VAR_2)
{
    int VAR_3, VAR_4;
    BYTE* VAR_5;

    if (!VAR_2) return ((void*)0);

    VAR_4 = (VAR_2 + VAR_0->block_size - 1) / VAR_0->block_size;
    VAR_5 = FUNC_1(FUNC_0(), 0, VAR_4 * VAR_0->block_size);

    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
        FUNC_2(VAR_5 + VAR_3 * VAR_0->block_size,
               (const char*)VAR_0 + VAR_1[VAR_3] * VAR_0->block_size, VAR_0->block_size);

    return VAR_5;
}
