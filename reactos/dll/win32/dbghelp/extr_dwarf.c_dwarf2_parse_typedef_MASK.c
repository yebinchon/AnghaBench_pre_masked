
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct symt {int dummy; } ;
struct TYPE_15__ {int * string; } ;
struct attribute {TYPE_1__ u; } ;
struct TYPE_17__ {int module; } ;
typedef TYPE_3__ dwarf2_parse_context_t ;
struct TYPE_18__ {struct symt* symt; TYPE_2__* abbrev; } ;
typedef TYPE_4__ dwarf2_debug_info_t ;
struct TYPE_19__ {struct symt symt; } ;
struct TYPE_16__ {int entry_code; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_4__*,int ,struct attribute*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_4__*) ;
 struct symt* FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 TYPE_5__* FUNC_6 (int ,struct symt*,int *) ;

__attribute__((used)) static struct symt* FUNC_7(dwarf2_parse_context_t* VAR_1,
                                         dwarf2_debug_info_t* VAR_2)
{
    struct symt* VAR_3;
    struct attribute VAR_4;

    if (VAR_2->symt) return VAR_2->symt;

    FUNC_1("%s, for %lu\n", FUNC_2(VAR_1), VAR_2->abbrev->entry_code);

    if (!FUNC_3(VAR_1, VAR_2, VAR_0, &VAR_4)) VAR_4.u.string = ((void*)0);
    VAR_3 = FUNC_5(VAR_1, VAR_2);

    if (VAR_4.u.string)
        VAR_2->symt = &FUNC_6(VAR_1->module, VAR_3, VAR_4.u.string)->symt;
    if (FUNC_4(VAR_1, VAR_2)) FUNC_0("Unsupported children\n");
    return VAR_2->symt;
}
