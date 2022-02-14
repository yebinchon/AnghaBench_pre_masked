
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type_offset; int file; int last_index; int first_index; int type_size; int version; } ;
struct TYPE_5__ {int file; int last_index; int first_index; int type_size; int version; } ;
typedef TYPE_1__ PDB_TYPES_OLD ;
typedef TYPE_2__ PDB_TYPES ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(PDB_TYPES* VAR_0, const BYTE* VAR_1)
{
    FUNC_0(VAR_0, 0, sizeof(PDB_TYPES));
    if (!VAR_1) return;

    if (*(const DWORD*)VAR_1 < 19960000)
    {

        const PDB_TYPES_OLD* VAR_2 = (const PDB_TYPES_OLD*)VAR_1;
        VAR_0->version = VAR_2->version;
        VAR_0->type_offset = sizeof(PDB_TYPES_OLD);
        VAR_0->type_size = VAR_2->type_size;
        VAR_0->first_index = VAR_2->first_index;
        VAR_0->last_index = VAR_2->last_index;
        VAR_0->file = VAR_2->file;
    }
    else
    {

        *VAR_0 = *(const PDB_TYPES*)VAR_1;
    }
}
