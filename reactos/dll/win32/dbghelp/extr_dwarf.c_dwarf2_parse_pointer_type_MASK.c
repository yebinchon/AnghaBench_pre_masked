
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct symt {int dummy; } ;
struct TYPE_15__ {int uvalue; } ;
struct attribute {TYPE_1__ u; } ;
struct TYPE_16__ {int module; struct symt** symt_cache; } ;
typedef TYPE_2__ dwarf2_parse_context_t ;
struct TYPE_17__ {struct symt* symt; } ;
typedef TYPE_3__ dwarf2_debug_info_t ;
struct TYPE_18__ {struct symt symt; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct symt*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int ,struct attribute*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 struct symt* FUNC_7 (TYPE_2__*,TYPE_3__*) ;
 size_t VAR_1 ;
 TYPE_4__* FUNC_8 (int ,struct symt*,int) ;

__attribute__((used)) static struct symt* FUNC_9(dwarf2_parse_context_t* VAR_2,
                                              dwarf2_debug_info_t* VAR_3)
{
    struct symt* VAR_4;
    struct attribute VAR_5;

    if (VAR_3->symt) return VAR_3->symt;

    FUNC_1("%s, for %s\n", FUNC_3(VAR_2), FUNC_4(VAR_3));

    if (!FUNC_5(VAR_2, VAR_3, VAR_0, &VAR_5)) VAR_5.u.uvalue = sizeof(void *);
    if (!(VAR_4 = FUNC_7(VAR_2, VAR_3)))
    {
        VAR_4 = VAR_2->symt_cache[VAR_1];
        FUNC_2(VAR_4);
    }
    VAR_3->symt = &FUNC_8(VAR_2->module, VAR_4, VAR_5.u.uvalue)->symt;
    if (FUNC_6(VAR_2, VAR_3)) FUNC_0("Unsupported children\n");
    return VAR_3->symt;
}
