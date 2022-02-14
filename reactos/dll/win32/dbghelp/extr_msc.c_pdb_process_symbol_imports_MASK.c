
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct process {int dummy; } ;
struct pdb_module_info {int used_subfiles; struct pdb_file_info* pdb_files; } ;
struct pdb_lookup {char const* filename; int age; int timestamp; int kind; } ;
struct pdb_file_info {int dummy; } ;
struct msc_debug_info {int dummy; } ;
struct TYPE_8__ {scalar_t__ allowed; } ;
struct TYPE_7__ {int pdbimport_size; int module_size; int offset_size; int hash_size; int srcmodule_size; } ;
struct TYPE_6__ {char const* filename; int TimeDateStamp; int Age; } ;
typedef TYPE_1__ PDB_SYMBOL_IMPORT ;
typedef TYPE_2__ PDB_SYMBOLS ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char const*,int ,int ) ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (struct process const*,struct msc_debug_info const*,struct pdb_lookup*,struct pdb_module_info*,int) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const struct process* VAR_5,
                                       const struct msc_debug_info* VAR_6,
                                       const PDB_SYMBOLS* VAR_7,
                                       const void* VAR_8,
                                       const char* VAR_9,
                                       const struct pdb_lookup* VAR_10,
                                       struct pdb_module_info* VAR_11,
                                       unsigned VAR_12)
{
    if (VAR_12 == -1 && VAR_7 && VAR_7->pdbimport_size)
    {
        const PDB_SYMBOL_IMPORT*VAR_13;
        const void* VAR_14;
        const void* VAR_15;
        const char* VAR_16;
        int VAR_17 = 0;
        struct pdb_file_info VAR_18 = VAR_11->pdb_files[0];

        VAR_13 = (const PDB_SYMBOL_IMPORT*)((const char*)VAR_8 + sizeof(PDB_SYMBOLS) +
                                         VAR_7->module_size + VAR_7->offset_size +
                                         VAR_7->hash_size + VAR_7->srcmodule_size);
        VAR_14 = VAR_13;
        VAR_15 = (const char*)VAR_13 + VAR_7->pdbimport_size;
        while (VAR_13 < (const PDB_SYMBOL_IMPORT*)VAR_15)
        {
            VAR_16 = (const char*)VAR_13 + sizeof(*VAR_13) + FUNC_4(VAR_13->filename);
            if (VAR_17 >= VAR_0) FUNC_0("Out of bounds!!!\n");
            if (!FUNC_3(VAR_10->filename, VAR_13->filename))
            {
                if (VAR_12 != -1) FUNC_0("Twice the entry\n");
                else VAR_12 = VAR_17;
                VAR_11->pdb_files[VAR_17] = VAR_18;
            }
            else
            {
                struct pdb_lookup VAR_19;




                VAR_19.filename = VAR_13->filename;
                VAR_19.kind = VAR_1;
                VAR_19.timestamp = VAR_13->TimeDateStamp;
                VAR_19.age = VAR_13->Age;
                FUNC_1("got for %s: age=%u ts=%x\n",
                      VAR_13->filename, VAR_13->Age, VAR_13->TimeDateStamp);
                FUNC_2(VAR_5, VAR_6, &VAR_19, VAR_11, VAR_17);
            }
            VAR_17++;
            VAR_13 = (const PDB_SYMBOL_IMPORT*)((const char*)VAR_14 + ((VAR_16 - (const char*)VAR_14 + FUNC_4(VAR_16) + 1 + 3) & ~3));
        }
        VAR_11->used_subfiles = VAR_17;
    }
    if (VAR_12 == -1)
    {
        VAR_12 = 0;
        VAR_11->used_subfiles = 1;
    }
    VAR_3 = &VAR_4[VAR_12];
    if (VAR_3->allowed) FUNC_0("Already allowed??\n");
    VAR_3->allowed = VAR_2;
}
