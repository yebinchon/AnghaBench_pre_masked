
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct symt {int dummy; } ;
struct TYPE_13__ {int uvalue; } ;
struct attribute {TYPE_2__ u; } ;
struct TYPE_14__ {int debug_info_table; } ;
typedef TYPE_3__ dwarf2_parse_context_t ;
struct TYPE_15__ {struct symt* symt; TYPE_1__* abbrev; } ;
typedef TYPE_4__ dwarf2_debug_info_t ;
struct TYPE_12__ {int tag; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__ const*,int ,struct attribute*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int *,int ) ;

__attribute__((used)) static struct symt* FUNC_4(dwarf2_parse_context_t* VAR_1,
                                       const dwarf2_debug_info_t* VAR_2)
{
    struct attribute VAR_3;
    dwarf2_debug_info_t* VAR_4;

    if (!FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_3))
        return ((void*)0);
    if (!(VAR_4 = FUNC_3(&VAR_1->debug_info_table, VAR_3.u.uvalue)))
    {
        FUNC_0("Unable to find back reference to type %lx\n", VAR_3.u.uvalue);
        return ((void*)0);
    }
    if (!VAR_4->symt)
    {

        FUNC_2(VAR_1, VAR_4);
        if (!VAR_4->symt)
            FUNC_0("Unable to load forward reference for tag %lx\n", VAR_4->abbrev->tag);
    }
    return VAR_4->symt;
}
