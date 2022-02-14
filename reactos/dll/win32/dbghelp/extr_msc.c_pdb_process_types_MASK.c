
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
union codeview_type {TYPE_1__ generic; } ;
struct pdb_file_info {int dummy; } ;
struct msc_debug_info {int module; } ;
struct codeview_type_parse {int num; int* offset; int const* table; int module; } ;
struct TYPE_5__ {int version; int last_index; int first_index; int type_offset; int type_size; } ;
typedef TYPE_2__ PDB_TYPES ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (struct codeview_type_parse*) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (struct pdb_file_info const*,int) ;

__attribute__((used)) static void FUNC_8(const struct msc_debug_info* VAR_0,
                              const struct pdb_file_info* VAR_1)
{
    BYTE* VAR_2 = ((void*)0);

    VAR_2 = FUNC_7(VAR_1, 2);
    if (VAR_2)
    {
        PDB_TYPES VAR_3;
        struct codeview_type_parse VAR_4;
        DWORD VAR_5;
        const BYTE* VAR_6;
        DWORD* VAR_7;

        FUNC_5(&VAR_3, VAR_2);


        switch (VAR_3.version)
        {
        case 19950410:
        case 19951122:
        case 19961031:
        case 19990903:
        case 20040203:
            break;
        default:
            FUNC_0("-Unknown type info version %d\n", VAR_3.version);
        }

        VAR_4.module = VAR_0->module;



        VAR_5 = VAR_3.last_index - VAR_3.first_index + 1;
        VAR_7 = FUNC_2(FUNC_1(), 0, sizeof(DWORD) * VAR_5);
        VAR_4.table = VAR_6 = VAR_2 + VAR_3.type_offset;
        VAR_4.num = 0;
        while (VAR_6 < VAR_4.table + VAR_3.type_size && VAR_4.num < VAR_5)
        {
            VAR_7[VAR_4.num++] = VAR_6 - VAR_4.table;
            VAR_6 += ((const union codeview_type*)VAR_6)->generic.len + 2;
        }
        VAR_4.offset = VAR_7;


        FUNC_4(&VAR_4);
        FUNC_3(FUNC_1(), 0, VAR_7);
        FUNC_6(VAR_2);
    }
}
