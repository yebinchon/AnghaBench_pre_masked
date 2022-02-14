
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pool {int dummy; } ;
struct TYPE_8__ {int ModuleName; int SymType; } ;
struct module {TYPE_4__ module; int reloc_delta; TYPE_3__** format_info; } ;
struct image_section_map {int dummy; } ;
struct image_file_map {int dummy; } ;
struct hash_table {int dummy; } ;
struct elf_thunk_area {char* member_0; int member_1; int member_3; int member_2; } ;
struct TYPE_6__ {TYPE_1__* elf_info; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_5__ {int elf_addr; } ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 int VAR_11 ;
 int FUNC_1 (struct module*,int ,struct elf_thunk_area*,struct image_file_map*) ;
 int FUNC_2 (struct image_file_map*,struct module*) ;
 scalar_t__ FUNC_3 (struct image_file_map*,char*,int ,struct image_section_map*) ;
 int FUNC_4 (struct module*,struct hash_table*) ;
 int FUNC_5 (struct module*,struct pool*,struct hash_table*,struct image_file_map*,struct elf_thunk_area*) ;
 scalar_t__ FUNC_6 (struct module*,struct hash_table*) ;
 int FUNC_7 (struct module*,struct hash_table*,struct elf_thunk_area*) ;
 int FUNC_8 (struct image_section_map*) ;
 char* FUNC_9 (struct image_section_map*) ;
 int FUNC_10 (struct image_section_map*) ;
 int FUNC_11 (struct module*,int ,char const*,int ,char const*,int ,int *,int *) ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_14(struct module* VAR_12,
                                         struct image_file_map* VAR_13,
                                         struct pool* VAR_14,
                                         struct hash_table* VAR_15)
{
    BOOL VAR_16 = VAR_1, VAR_17;
    struct elf_thunk_area VAR_18[] =
    {
        {"__wine_spec_import_thunks", VAR_9, 0, 0},
        {"__wine_spec_delayed_import_loaders", VAR_8, 0, 0},
        {"__wine_spec_delayed_import_thunks", VAR_8, 0, 0},
        {"__wine_delay_load", VAR_8, 0, 0},
        {"__wine_spec_thunk_text_16", -16, 0, 0},
        {"__wine_spec_thunk_text_32", -32, 0, 0},
        {((void*)0), 0, 0, 0}
    };

    VAR_12->module.SymType = VAR_7;


    FUNC_5(VAR_12, VAR_14, VAR_15, VAR_13, VAR_18);

    if (!(VAR_11 & VAR_4))
    {
        struct image_section_map VAR_19, VAR_20;


        VAR_16 = FUNC_2(VAR_13, VAR_12);

        if (FUNC_3(VAR_13, ".stab", VAR_3, &VAR_19) &&
            FUNC_3(VAR_13, ".stabstr", VAR_3, &VAR_20))
        {
            const char* VAR_21;
            const char* VAR_22;

            VAR_21 = FUNC_9(&VAR_19);
            VAR_22 = FUNC_9(&VAR_20);
            if (VAR_21 != VAR_2 && VAR_22 != VAR_2)
            {

                VAR_17 = FUNC_11(VAR_12, VAR_12->format_info[VAR_0]->u.elf_info->elf_addr,
                                   VAR_21, FUNC_8(&VAR_19),
                                   VAR_22, FUNC_8(&VAR_20),
                                   ((void*)0), ((void*)0));
                if (VAR_17)

                    FUNC_4(VAR_12, VAR_15);
                else
                    FUNC_0("Couldn't correctly read stabs\n");
                VAR_16 = VAR_16 || VAR_17;
            }
            FUNC_10(&VAR_19);
            FUNC_10(&VAR_20);
        }
        VAR_17 = FUNC_1(VAR_12, VAR_12->reloc_delta, VAR_18, VAR_13);
        VAR_16 = VAR_16 || VAR_17;
    }
    if (FUNC_13(VAR_12->module.ModuleName, VAR_5) ||
        !FUNC_12(VAR_12->module.ModuleName, VAR_6))
    {

        if (!(VAR_11 & VAR_4))
            FUNC_7(VAR_12, VAR_15, VAR_18);
    }

    if (FUNC_6(VAR_12, VAR_15) && !VAR_16) VAR_16 = VAR_10;

    return VAR_16;
}
