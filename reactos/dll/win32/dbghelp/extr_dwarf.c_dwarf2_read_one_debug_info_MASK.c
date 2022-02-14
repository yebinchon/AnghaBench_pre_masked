
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {unsigned long uvalue; } ;
struct attribute {TYPE_2__ u; } ;
struct TYPE_23__ {unsigned long data; scalar_t__ end_data; } ;
typedef TYPE_3__ dwarf2_traverse_context_t ;
struct TYPE_24__ {size_t section; TYPE_1__* sections; int pool; int debug_info_table; int abbrev_table; } ;
typedef TYPE_4__ dwarf2_parse_context_t ;
struct TYPE_25__ {unsigned long* data; int children; struct TYPE_25__* parent; int * symt; TYPE_6__ const* abbrev; } ;
typedef TYPE_5__ dwarf2_debug_info_t ;
struct TYPE_26__ {int num_attr; scalar_t__ have_child; TYPE_7__* attrs; } ;
typedef TYPE_6__ dwarf2_abbrev_entry_t ;
struct TYPE_27__ {struct TYPE_27__* next; } ;
typedef TYPE_7__ dwarf2_abbrev_entry_attr_t ;
struct TYPE_21__ {unsigned long address; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned long,unsigned long) ;
 int VAR_2 ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 TYPE_6__* FUNC_2 (int *,unsigned long) ;
 unsigned long FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_5__*,int ,struct attribute*) ;
 unsigned long FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_7__*) ;
 unsigned long* FUNC_7 (int *,int) ;
 TYPE_5__* FUNC_8 (int *,unsigned long,int *) ;
 TYPE_5__** FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int,int) ;

__attribute__((used)) static BOOL FUNC_11(dwarf2_parse_context_t* VAR_3,
                                       dwarf2_traverse_context_t* VAR_4,
                                       dwarf2_debug_info_t* VAR_5,
                                       dwarf2_debug_info_t** VAR_6)
{
    const dwarf2_abbrev_entry_t*VAR_7;
    unsigned long VAR_8;
    unsigned long VAR_9;
    dwarf2_debug_info_t* VAR_10;
    dwarf2_debug_info_t* VAR_11;
    dwarf2_debug_info_t** VAR_12;
    dwarf2_abbrev_entry_attr_t* VAR_13;
    unsigned VAR_14;
    struct attribute VAR_15;

    VAR_9 = VAR_4->data - VAR_3->sections[VAR_3->section].address;
    VAR_8 = FUNC_5(VAR_4);
    FUNC_0("found entry_code %lu at 0x%lx\n", VAR_8, VAR_9);
    if (!VAR_8)
    {
        *VAR_6 = ((void*)0);
        return VAR_2;
    }
    VAR_7 = FUNC_2(&VAR_3->abbrev_table, VAR_8);
    if (!VAR_7)
    {
 FUNC_1("Cannot find abbrev entry for %lu at 0x%lx\n", VAR_8, VAR_9);
 return VAR_1;
    }
    VAR_10 = FUNC_8(&VAR_3->debug_info_table, VAR_9, &VAR_3->pool);
    if (!VAR_10) return VAR_1;
    VAR_10->abbrev = VAR_7;
    VAR_10->symt = ((void*)0);
    VAR_10->parent = VAR_5;

    if (VAR_7->num_attr)
    {
        VAR_10->data = FUNC_7(&VAR_3->pool, VAR_7->num_attr * sizeof(const char*));
        for (VAR_14 = 0, VAR_13 = VAR_7->attrs; VAR_13; VAR_14++, VAR_13 = VAR_13->next)
        {
            VAR_10->data[VAR_14] = VAR_4->data;
            FUNC_6(VAR_4, VAR_13);
        }
    }
    else VAR_10->data = ((void*)0);
    if (VAR_7->have_child)
    {
        FUNC_10(&VAR_10->children, sizeof(dwarf2_debug_info_t*), 16);
        while (VAR_4->data < VAR_4->end_data)
        {
            if (!FUNC_11(VAR_3, VAR_4, VAR_10, &VAR_11)) return VAR_1;
            if (!VAR_11) break;
            VAR_12 = FUNC_9(&VAR_10->children, &VAR_3->pool);
            if (!VAR_12) return VAR_1;
            *VAR_12 = VAR_11;
        }
    }
    if (FUNC_4(VAR_3, VAR_10, VAR_0, &VAR_15) &&
        VAR_4->data != VAR_3->sections[VAR_3->section].address + VAR_15.u.uvalue)
    {
        FUNC_1("setting cursor for %s to next sibling <0x%lx>\n",
             FUNC_3(VAR_4), VAR_15.u.uvalue);
        VAR_4->data = VAR_3->sections[VAR_3->section].address + VAR_15.u.uvalue;
    }
    *VAR_6 = VAR_10;
    return VAR_2;
}
