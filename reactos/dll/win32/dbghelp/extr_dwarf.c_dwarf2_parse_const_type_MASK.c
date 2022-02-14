
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct symt {int dummy; } ;
struct TYPE_11__ {struct symt** symt_cache; } ;
typedef TYPE_1__ dwarf2_parse_context_t ;
struct TYPE_12__ {struct symt* symt; } ;
typedef TYPE_2__ dwarf2_debug_info_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct symt*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 struct symt* FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 size_t VAR_0 ;

__attribute__((used)) static struct symt* FUNC_7(dwarf2_parse_context_t* VAR_1,
                                            dwarf2_debug_info_t* VAR_2)
{
    struct symt* VAR_3;

    if (VAR_2->symt) return VAR_2->symt;

    FUNC_1("%s, for %s\n", FUNC_3(VAR_1), FUNC_4(VAR_2));

    if (!(VAR_3 = FUNC_6(VAR_1, VAR_2)))
    {
        VAR_3 = VAR_1->symt_cache[VAR_0];
        FUNC_2(VAR_3);
    }
    if (FUNC_5(VAR_1, VAR_2)) FUNC_0("Unsupported children\n");
    VAR_2->symt = VAR_3;

    return VAR_3;
}
