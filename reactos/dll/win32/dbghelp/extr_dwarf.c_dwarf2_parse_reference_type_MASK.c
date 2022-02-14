
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct symt {int dummy; } ;
struct TYPE_12__ {int module; } ;
typedef TYPE_1__ dwarf2_parse_context_t ;
struct TYPE_13__ {struct symt* symt; } ;
typedef TYPE_2__ dwarf2_debug_info_t ;
struct TYPE_14__ {struct symt symt; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 struct symt* FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 TYPE_3__* FUNC_6 (int ,struct symt*,int) ;

__attribute__((used)) static struct symt* FUNC_7(dwarf2_parse_context_t* VAR_0,
                                                dwarf2_debug_info_t* VAR_1)
{
    struct symt* VAR_2 = ((void*)0);

    if (VAR_1->symt) return VAR_1->symt;

    FUNC_1("%s, for %s\n", FUNC_2(VAR_0), FUNC_3(VAR_1));

    VAR_2 = FUNC_5(VAR_0, VAR_1);

    VAR_1->symt = &FUNC_6(VAR_0->module, VAR_2, sizeof(void *))->symt;

    if (FUNC_4(VAR_0, VAR_1)) FUNC_0("Unsupported children\n");

    return VAR_1->symt;
}
