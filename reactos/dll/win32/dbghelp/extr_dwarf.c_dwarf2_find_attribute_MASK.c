
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int uvalue; } ;
struct attribute {TYPE_2__ u; int gotten_from; } ;
struct TYPE_13__ {int debug_info_table; } ;
typedef TYPE_3__ dwarf2_parse_context_t ;
struct TYPE_14__ {int * data; TYPE_1__* abbrev; } ;
typedef TYPE_4__ dwarf2_debug_info_t ;
struct TYPE_15__ {unsigned int attribute; struct TYPE_15__* next; } ;
typedef TYPE_5__ dwarf2_abbrev_entry_attr_t ;
struct TYPE_11__ {TYPE_5__* attrs; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__ const*,TYPE_5__*,int ,struct attribute*) ;
 TYPE_4__* FUNC_2 (int *,int ) ;

__attribute__((used)) static BOOL FUNC_3(const dwarf2_parse_context_t* VAR_8,
                                  const dwarf2_debug_info_t* VAR_9,
                                  unsigned VAR_10, struct attribute* VAR_11)
{
    unsigned VAR_12, VAR_13 = 0;
    dwarf2_abbrev_entry_attr_t* VAR_14;
    dwarf2_abbrev_entry_attr_t* VAR_15 = ((void*)0);

    VAR_11->gotten_from = VAR_6;
    while (VAR_9)
    {
        VAR_15 = ((void*)0);
        for (VAR_12 = 0, VAR_14 = VAR_9->abbrev->attrs; VAR_14; VAR_12++, VAR_14 = VAR_14->next)
        {
            if (VAR_14->attribute == VAR_10)
            {
                FUNC_1(VAR_8, VAR_14, VAR_9->data[VAR_12], VAR_11);
                return VAR_4;
            }
            if ((VAR_14->attribute == VAR_0 ||
                 VAR_14->attribute == VAR_2) &&
                VAR_10 != VAR_1)
            {
                if (VAR_15)
                    FUNC_0("two references %lx and %lx\n", VAR_15->attribute, VAR_14->attribute);
                VAR_15 = VAR_14;
                VAR_13 = VAR_12;
                VAR_11->gotten_from = (VAR_14->attribute == VAR_0) ?
                    VAR_5 : VAR_7;
            }
        }

        if (!VAR_15) break;
        FUNC_1(VAR_8, VAR_15, VAR_9->data[VAR_13], VAR_11);
        if (!(VAR_9 = FUNC_2(&VAR_8->debug_info_table, VAR_11->u.uvalue)))
            FUNC_0("Should have found the debug info entry\n");
    }
    return VAR_3;
}
