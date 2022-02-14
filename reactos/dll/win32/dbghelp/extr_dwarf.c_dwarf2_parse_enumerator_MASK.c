
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct symt_enum {int dummy; } ;
struct TYPE_7__ {scalar_t__ svalue; int string; } ;
struct attribute {TYPE_1__ u; } ;
struct TYPE_8__ {int module; } ;
typedef TYPE_2__ dwarf2_parse_context_t ;
typedef int dwarf2_debug_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int *,int ,struct attribute*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int ,struct symt_enum*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_7(dwarf2_parse_context_t* VAR_2,
                                    dwarf2_debug_info_t* VAR_3,
                                    struct symt_enum* VAR_4)
{
    struct attribute VAR_5;
    struct attribute VAR_6;

    FUNC_1("%s, for %s\n", FUNC_2(VAR_2), FUNC_3(VAR_3));

    if (!FUNC_4(VAR_2, VAR_3, VAR_1, &VAR_5)) return;
    if (!FUNC_4(VAR_2, VAR_3, VAR_0, &VAR_6)) VAR_6.u.svalue = 0;
    FUNC_6(VAR_2->module, VAR_4, VAR_5.u.string, VAR_6.u.svalue);

    if (FUNC_5(VAR_2, VAR_3)) FUNC_0("Unsupported children\n");
}
