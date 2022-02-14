
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct symt {int dummy; } ;
struct symt_basic {struct symt symt; } ;
struct TYPE_12__ {char* string; int uvalue; } ;
struct attribute {TYPE_1__ u; } ;
struct TYPE_13__ {struct symt** symt_cache; int module; } ;
typedef TYPE_2__ dwarf2_parse_context_t ;
struct TYPE_14__ {struct symt* symt; } ;
typedef TYPE_3__ dwarf2_debug_info_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,int ,struct attribute*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_3__*) ;
 size_t VAR_2 ;
 struct symt_basic* FUNC_6 (int ,int ,char*,int) ;

__attribute__((used)) static struct symt* FUNC_7(dwarf2_parse_context_t* VAR_3,
                                           dwarf2_debug_info_t* VAR_4)
{
    struct attribute VAR_5;
    struct attribute VAR_6;
    struct symt_basic *VAR_7;

    FUNC_1("%s, for %s\n", FUNC_2(VAR_3), FUNC_3(VAR_4));

    if (VAR_4->symt) return VAR_4->symt;

    if (!FUNC_4(VAR_3, VAR_4, VAR_0, &VAR_5))
        VAR_5.u.string = "void";
    VAR_6.u.uvalue = sizeof(void *);

    VAR_7 = FUNC_6(VAR_3->module, VAR_1, VAR_5.u.string, VAR_6.u.uvalue);
    VAR_4->symt = &VAR_7->symt;

    if (!VAR_3->symt_cache[VAR_2])
        VAR_3->symt_cache[VAR_2] = VAR_4->symt;

    if (FUNC_5(VAR_3, VAR_4)) FUNC_0("Unsupported children\n");
    return VAR_4->symt;
}
