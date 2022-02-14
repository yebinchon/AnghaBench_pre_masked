
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct vector {int dummy; } ;
struct TYPE_11__ {int uvalue; } ;
struct attribute {TYPE_2__ u; } ;
struct TYPE_12__ {int debug_info_table; } ;
typedef TYPE_3__ dwarf2_parse_context_t ;
struct TYPE_13__ {struct vector children; TYPE_1__* abbrev; } ;
typedef TYPE_4__ dwarf2_debug_info_t ;
struct TYPE_10__ {scalar_t__ have_child; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int ,struct attribute*) ;
 TYPE_4__* FUNC_2 (int *,int ) ;

__attribute__((used)) static struct vector* FUNC_3(dwarf2_parse_context_t* VAR_1,
                                             dwarf2_debug_info_t* VAR_2)
{
    struct attribute VAR_3;

    while (VAR_2)
    {
        if (VAR_2->abbrev->have_child)
            return &VAR_2->children;
        if (!FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_3)) break;
        if (!(VAR_2 = FUNC_2(&VAR_1->debug_info_table, VAR_3.u.uvalue)))
            FUNC_0("Should have found the debug info entry\n");
    }
    return ((void*)0);
}
