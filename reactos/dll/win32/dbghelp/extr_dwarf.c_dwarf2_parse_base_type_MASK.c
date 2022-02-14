
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct symt {int dummy; } ;
struct TYPE_13__ {int uvalue; int * string; } ;
struct attribute {TYPE_1__ u; } ;
typedef enum BasicType { ____Placeholder_BasicType } BasicType ;
struct TYPE_14__ {struct symt** symt_cache; int module; } ;
typedef TYPE_2__ dwarf2_parse_context_t ;
struct TYPE_15__ {struct symt* symt; } ;
typedef TYPE_3__ dwarf2_debug_info_t ;
struct TYPE_16__ {struct symt symt; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int ,struct attribute*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__* FUNC_7 (int ,int,int *,int) ;

__attribute__((used)) static struct symt* FUNC_8(dwarf2_parse_context_t* VAR_14,
                                           dwarf2_debug_info_t* VAR_15)
{
    struct attribute VAR_16;
    struct attribute VAR_17;
    struct attribute VAR_18;
    enum BasicType VAR_19;
    int VAR_20 = -1;
    if (VAR_15->symt) return VAR_15->symt;

    FUNC_1("%s, for %s\n", FUNC_3(VAR_14), FUNC_4(VAR_15));

    if (!FUNC_5(VAR_14, VAR_15, VAR_2, &VAR_16))
        VAR_16.u.string = ((void*)0);
    if (!FUNC_5(VAR_14, VAR_15, VAR_0, &VAR_17)) VAR_17.u.uvalue = 0;
    if (!FUNC_5(VAR_14, VAR_15, VAR_1, &VAR_18)) VAR_18.u.uvalue = 130;

    switch (VAR_18.u.uvalue)
    {
    case 130: VAR_19 = 128; break;
    case 138: VAR_19 = VAR_9; break;
    case 137: VAR_19 = VAR_3; break;
    case 136: VAR_19 = VAR_5; break;
    case 135: VAR_19 = VAR_6; break;
    case 134: VAR_19 = 129; break;
    case 132: VAR_19 = VAR_8; break;
    case 133: VAR_19 = VAR_4; break;
    case 131: VAR_19 = VAR_4; break;
    default: VAR_19 = VAR_7; break;
    }
    VAR_15->symt = &FUNC_7(VAR_14->module, VAR_19, VAR_16.u.string, VAR_17.u.uvalue)->symt;
    switch (VAR_19)
    {
    case 128:
        FUNC_2(VAR_17.u.uvalue == 0);
        VAR_20 = VAR_13;
        break;
    case 129:
        switch (VAR_17.u.uvalue)
        {
        case 1: VAR_20 = VAR_10; break;
        case 2: VAR_20 = VAR_11; break;
        case 4: VAR_20 = VAR_12; break;
        }
        break;
    default: break;
    }
    if (VAR_20 != -1 && !VAR_14->symt_cache[VAR_20])
        VAR_14->symt_cache[VAR_20] = VAR_15->symt;

    if (FUNC_6(VAR_14, VAR_15)) FUNC_0("Unsupported children\n");
    return VAR_15->symt;
}
