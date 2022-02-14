
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_20__ {struct dwarf2_module_info_s* dwarf2_info; } ;
struct module_format {TYPE_7__ u; struct module* module; int loc_compute; int remove; } ;
struct TYPE_19__ {char CVSig; void* Publics; void* SourceIndexed; void* TypeInfo; void* GlobalSymbols; int SymType; int ModuleName; } ;
struct module {TYPE_6__ module; struct module_format** format_info; } ;
struct image_section_map {TYPE_5__* fmap; } ;
struct TYPE_14__ {scalar_t__ elf_start; } ;
struct TYPE_15__ {TYPE_1__ elf; } ;
struct image_file_map {scalar_t__ modtype; int addr_size; TYPE_2__ u; } ;
struct elf_thunk_area {int dummy; } ;
struct TYPE_22__ {scalar_t__ address; scalar_t__ size; } ;
struct dwarf2_module_info_s {int word_size; TYPE_9__ eh_frame; TYPE_9__ debug_frame; TYPE_9__ debug_loc; } ;
struct TYPE_21__ {scalar_t__ data; scalar_t__ end_data; scalar_t__ word_size; } ;
typedef TYPE_8__ dwarf2_traverse_context_t ;
typedef TYPE_9__ dwarf2_section_t ;
struct TYPE_16__ {scalar_t__ elf_start; } ;
struct TYPE_17__ {TYPE_3__ elf; } ;
struct TYPE_18__ {TYPE_4__ u; } ;
typedef void* BOOL ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 struct module_format* FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,int ) ;
 void* VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_9__*,struct image_file_map*,char*,char*,struct image_section_map*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_9__*,struct module*,struct elf_thunk_area const*,TYPE_8__*,unsigned long) ;
 int FUNC_7 (struct image_section_map*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;

BOOL FUNC_8(struct module* VAR_14, unsigned long VAR_15,
                  const struct elf_thunk_area* VAR_16,
                  struct image_file_map* VAR_17)
{
    dwarf2_section_t VAR_18, VAR_19[VAR_11];
    dwarf2_traverse_context_t VAR_20;
    struct image_section_map VAR_21, VAR_22, VAR_23,
                                VAR_24, VAR_25, VAR_26;
    BOOL VAR_27 = VAR_5;
    struct module_format* VAR_28;

    FUNC_5(&VAR_18, VAR_17, ".eh_frame", ((void*)0), &VAR_26);
    FUNC_5(&VAR_19[VAR_9], VAR_17, ".debug_info", ".zdebug_info", &VAR_21);
    FUNC_5(&VAR_19[VAR_8], VAR_17, ".debug_abbrev", ".zdebug_abbrev", &VAR_23);
    FUNC_5(&VAR_19[VAR_13], VAR_17, ".debug_str", ".zdebug_str", &VAR_22);
    FUNC_5(&VAR_19[VAR_10], VAR_17, ".debug_line", ".zdebug_line", &VAR_24);
    FUNC_5(&VAR_19[VAR_12], VAR_17, ".debug_ranges", ".zdebug_ranges", &VAR_25);


    if ((!VAR_18.address || VAR_18.address == VAR_3) &&
        (!VAR_19[VAR_9].address || VAR_19[VAR_9].address == VAR_3))
    {
        VAR_27 = VAR_2;
        goto leave;
    }

    if (VAR_17->modtype == VAR_1 && VAR_21.fmap)
    {




        VAR_15 += VAR_17->u.elf.elf_start - VAR_21.fmap->u.elf.elf_start;
    }

    FUNC_2("Loading Dwarf2 information for %s\n", FUNC_3(VAR_14->module.ModuleName));

    VAR_20.data = VAR_19[VAR_9].address;
    VAR_20.end_data = VAR_20.data + VAR_19[VAR_9].size;
    VAR_20.word_size = 0;

    VAR_28 = FUNC_1(FUNC_0(), 0,
                              sizeof(*VAR_28) + sizeof(*VAR_28->u.dwarf2_info));
    if (!VAR_28)
    {
        VAR_27 = VAR_2;
        goto leave;
    }
    VAR_28->module = VAR_14;
    VAR_28->remove = VAR_7;
    VAR_28->loc_compute = VAR_6;
    VAR_28->u.dwarf2_info = (struct dwarf2_module_info_s*)(VAR_28 + 1);
    VAR_28->u.dwarf2_info->word_size = 0;
    VAR_28->module->format_info[VAR_0] = VAR_28;




    FUNC_5(&VAR_28->u.dwarf2_info->debug_loc, VAR_17, ".debug_loc", ".zdebug_loc", ((void*)0));
    FUNC_5(&VAR_28->u.dwarf2_info->debug_frame, VAR_17, ".debug_frame", ".zdebug_frame", ((void*)0));
    VAR_28->u.dwarf2_info->eh_frame = VAR_18;

    while (VAR_20.data < VAR_20.end_data)
    {
        FUNC_6(VAR_19, VAR_28->module, VAR_16, &VAR_20, VAR_15);
    }
    VAR_28->module->module.SymType = VAR_4;
    VAR_28->module->module.CVSig = 'D' | ('W' << 8) | ('A' << 16) | ('R' << 24);

    VAR_28->module->module.GlobalSymbols = VAR_5;
    VAR_28->module->module.TypeInfo = VAR_5;
    VAR_28->module->module.SourceIndexed = VAR_5;
    VAR_28->module->module.Publics = VAR_5;


    VAR_28->u.dwarf2_info->word_size = VAR_17->addr_size / 8;

leave:
    FUNC_4(&VAR_19[VAR_9]);
    FUNC_4(&VAR_19[VAR_8]);
    FUNC_4(&VAR_19[VAR_13]);
    FUNC_4(&VAR_19[VAR_10]);
    FUNC_4(&VAR_19[VAR_12]);

    FUNC_7(&VAR_21);
    FUNC_7(&VAR_23);
    FUNC_7(&VAR_22);
    FUNC_7(&VAR_24);
    FUNC_7(&VAR_25);
    if (!VAR_27) FUNC_7(&VAR_26);

    return VAR_27;
}
