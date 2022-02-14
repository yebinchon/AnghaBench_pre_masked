
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int gsym_file; int hash2_file; int hash1_file; scalar_t__ pdbimport_size; int srcmodule_size; int hash_size; int offset_size; int module_size; scalar_t__ version; } ;
struct TYPE_5__ {int gsym_file; int hash2_file; int hash1_file; int srcmodule_size; int hash_size; int offset_size; int module_size; } ;
typedef TYPE_1__ PDB_SYMBOLS_OLD ;
typedef TYPE_2__ PDB_SYMBOLS ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(PDB_SYMBOLS* VAR_0,
                                       int* VAR_1, const BYTE* VAR_2)
{
    FUNC_0(VAR_0, 0, sizeof(PDB_SYMBOLS));
    if (!VAR_2) return;

    if (*(const DWORD*)VAR_2 != 0xffffffff)
    {

        const PDB_SYMBOLS_OLD* VAR_3 = (const PDB_SYMBOLS_OLD*)VAR_2;
        VAR_0->version = 0;
        VAR_0->module_size = VAR_3->module_size;
        VAR_0->offset_size = VAR_3->offset_size;
        VAR_0->hash_size = VAR_3->hash_size;
        VAR_0->srcmodule_size = VAR_3->srcmodule_size;
        VAR_0->pdbimport_size = 0;
        VAR_0->hash1_file = VAR_3->hash1_file;
        VAR_0->hash2_file = VAR_3->hash2_file;
        VAR_0->gsym_file = VAR_3->gsym_file;

        *VAR_1 = sizeof(PDB_SYMBOLS_OLD);
    }
    else
    {

        *VAR_0 = *(const PDB_SYMBOLS*)VAR_2;
        *VAR_1 = sizeof(PDB_SYMBOLS);
    }
}
