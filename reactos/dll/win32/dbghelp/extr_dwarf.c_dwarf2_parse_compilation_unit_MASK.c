
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_9__ ;
typedef struct TYPE_40__ TYPE_8__ ;
typedef struct TYPE_39__ TYPE_7__ ;
typedef struct TYPE_38__ TYPE_6__ ;
typedef struct TYPE_37__ TYPE_5__ ;
typedef struct TYPE_36__ TYPE_4__ ;
typedef struct TYPE_35__ TYPE_3__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_12__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct vector {int dummy; } ;
struct TYPE_38__ {unsigned long BaseOfImage; void* LineNumbers; } ;
struct module {TYPE_6__ module; TYPE_3__** format_info; } ;
struct elf_thunk_area {int dummy; } ;
struct TYPE_37__ {unsigned long uvalue; int * string; } ;
struct attribute {TYPE_5__ u; } ;
struct TYPE_39__ {unsigned char* data; unsigned char* end_data; unsigned long word_size; } ;
typedef TYPE_7__ dwarf2_traverse_context_t ;
struct TYPE_40__ {unsigned char const* address; int size; scalar_t__ rva; } ;
typedef TYPE_8__ dwarf2_section_t ;
struct TYPE_41__ {size_t section; unsigned long load_offset; int ref_offset; int pool; TYPE_11__* compiland; int debug_info_table; int abbrev_table; int * cpp_name; int ** symt_cache; struct elf_thunk_area const* thunks; struct module* module; TYPE_8__ const* sections; } ;
typedef TYPE_9__ dwarf2_parse_context_t ;
struct TYPE_30__ {int * symt; TYPE_4__* abbrev; } ;
typedef TYPE_10__ dwarf2_debug_info_t ;
struct TYPE_36__ {scalar_t__ tag; } ;
struct TYPE_34__ {TYPE_1__* dwarf2_info; } ;
struct TYPE_35__ {TYPE_2__ u; } ;
struct TYPE_33__ {unsigned long word_size; } ;
struct TYPE_32__ {int symt; } ;
struct TYPE_31__ {int symt; } ;
typedef void* BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long) ;
 void* VAR_7 ;
 int FUNC_2 (char*,unsigned short) ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (TYPE_9__*,TYPE_10__*,int ,struct attribute*) ;
 struct vector* FUNC_4 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_5 (TYPE_9__*,TYPE_10__*) ;
 int FUNC_6 (TYPE_7__*,int *,int *) ;
 unsigned long FUNC_7 (TYPE_7__*) ;
 scalar_t__ FUNC_8 (TYPE_8__ const*,TYPE_9__*,int *,unsigned long) ;
 unsigned short FUNC_9 (TYPE_7__*) ;
 unsigned long FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_9__*,TYPE_7__*,int *,TYPE_10__**) ;
 int FUNC_12 (int **,int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_15 (struct module*,int *,int *) ;
 int FUNC_16 (int *,int,int) ;
 TYPE_12__* FUNC_17 (struct module*,int ,char*,int ) ;
 TYPE_11__* FUNC_18 (struct module*,unsigned long,int ) ;
 scalar_t__ FUNC_19 (struct vector*,unsigned int) ;
 unsigned int FUNC_20 (struct vector*) ;

__attribute__((used)) static BOOL FUNC_21(const dwarf2_section_t* VAR_13,
                                          struct module* VAR_14,
                                          const struct elf_thunk_area* VAR_15,
                                          dwarf2_traverse_context_t* VAR_16,
                                          unsigned long VAR_17)
{
    dwarf2_parse_context_t VAR_18;
    dwarf2_traverse_context_t VAR_19;
    dwarf2_debug_info_t* VAR_20;
    dwarf2_traverse_context_t VAR_21;
    const unsigned char* VAR_22 = VAR_16->data;
    unsigned long VAR_23;
    unsigned short VAR_24;
    unsigned long VAR_25;
    BOOL VAR_26 = VAR_6;

    VAR_23 = FUNC_10(VAR_16);
    VAR_21.data = VAR_16->data;
    VAR_21.end_data = VAR_16->data + VAR_23;
    VAR_16->data += VAR_23;
    VAR_24 = FUNC_9(&VAR_21);
    VAR_25 = FUNC_10(&VAR_21);
    VAR_21.word_size = FUNC_7(&VAR_21);

    FUNC_1("Compilation Unit Header found at 0x%x:\n",
          (int)(VAR_22 - VAR_13[VAR_11].address));
    FUNC_1("- length:        %lu\n", VAR_23);
    FUNC_1("- version:       %u\n", VAR_24);
    FUNC_1("- abbrev_offset: %lu\n", VAR_25);
    FUNC_1("- word_size:     %u\n", VAR_21.word_size);

    if (VAR_24 != 2)
    {
        FUNC_2("%u DWARF version unsupported. Wine dbghelp only support DWARF 2.\n",
             VAR_24);
        return VAR_6;
    }

    VAR_14->format_info[VAR_0]->u.dwarf2_info->word_size = VAR_21.word_size;
    VAR_16->word_size = VAR_21.word_size;

    FUNC_14(&VAR_18.pool, 65536);
    VAR_18.sections = VAR_13;
    VAR_18.section = VAR_11;
    VAR_18.module = VAR_14;
    VAR_18.thunks = VAR_15;
    VAR_18.load_offset = VAR_17;
    VAR_18.ref_offset = VAR_22 - VAR_13[VAR_11].address;
    FUNC_12(VAR_18.symt_cache, 0, sizeof(VAR_18.symt_cache));
    VAR_18.symt_cache[VAR_9] = &FUNC_17(VAR_14, VAR_8, "void", 0)->symt;
    VAR_18.cpp_name = ((void*)0);

    VAR_19.data = VAR_13[VAR_10].address + VAR_25;
    VAR_19.end_data = VAR_13[VAR_10].address + VAR_13[VAR_10].size;
    VAR_19.word_size = VAR_21.word_size;
    FUNC_6(&VAR_19, &VAR_18.abbrev_table, &VAR_18.pool);

    FUNC_16(&VAR_18.debug_info_table, sizeof(dwarf2_debug_info_t), 128);
    FUNC_11(&VAR_18, &VAR_21, ((void*)0), &VAR_20);

    if (VAR_20->abbrev->tag == VAR_5)
    {
        struct attribute VAR_27;
        struct vector* VAR_28;
        dwarf2_debug_info_t* VAR_29 = ((void*)0);
        unsigned int VAR_30;
        struct attribute VAR_31, VAR_32;
        struct attribute VAR_33;

        if (!FUNC_3(&VAR_18, VAR_20, VAR_3, &VAR_27))
            VAR_27.u.string = ((void*)0);


        if (!FUNC_3(&VAR_18, VAR_20, VAR_1, &VAR_33))
            VAR_33.u.string = ((void*)0);

        if (!FUNC_3(&VAR_18, VAR_20, VAR_2, &VAR_32))
            VAR_32.u.uvalue = 0;
        VAR_18.compiland = FUNC_18(VAR_14, VAR_18.load_offset + VAR_32.u.uvalue,
                                           FUNC_15(VAR_14, VAR_33.u.string, VAR_27.u.string));
        VAR_20->symt = &VAR_18.compiland->symt;
        VAR_28 = FUNC_4(&VAR_18, VAR_20);
        if (VAR_28) for (VAR_30 = 0; VAR_30 < FUNC_20(VAR_28); VAR_30++)
        {
            VAR_29 = *(dwarf2_debug_info_t**)FUNC_19(VAR_28, VAR_30);
            FUNC_5(&VAR_18, VAR_29);
        }
        if (FUNC_3(&VAR_18, VAR_20, VAR_4, &VAR_31))
        {
            if (FUNC_8(VAR_13, &VAR_18, VAR_33.u.string, VAR_31.u.uvalue))

                VAR_14->module.LineNumbers = VAR_7;
        }
        VAR_26 = VAR_7;
    }
    else FUNC_0("Should have a compilation unit here\n");
    FUNC_13(&VAR_18.pool);
    return VAR_26;
}
