
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sym_enum {int dummy; } ;
struct module_pair {TYPE_2__* pcs; TYPE_5__* requested; } ;
typedef scalar_t__ WCHAR ;
typedef int ULONG64 ;
struct TYPE_8__ {int ModuleName; } ;
struct TYPE_10__ {scalar_t__ type; TYPE_1__ module; struct TYPE_10__* next; } ;
struct TYPE_9__ {TYPE_5__* lmodules; } ;
typedef scalar_t__ const* PCWSTR ;
typedef int HANDLE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__*,scalar_t__ const*,int) ;
 TYPE_5__* FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (struct module_pair*) ;
 TYPE_2__* FUNC_8 (int ) ;
 scalar_t__ const* VAR_8 ;
 scalar_t__* FUNC_9 (scalar_t__ const*,char) ;
 int FUNC_10 (TYPE_2__*,scalar_t__ const*,struct sym_enum const*) ;
 scalar_t__ FUNC_11 (struct module_pair*,scalar_t__ const*,struct sym_enum const*) ;

__attribute__((used)) static BOOL FUNC_12(HANDLE VAR_9, ULONG64 VAR_10, PCWSTR VAR_11,
                     const struct sym_enum* VAR_12)
{
    struct module_pair VAR_13;
    const WCHAR* VAR_14;
    WCHAR* VAR_15;

    VAR_13.pcs = FUNC_8(VAR_9);
    if (!VAR_13.pcs) return VAR_4;
    if (VAR_10 == 0)
    {

        if (!VAR_11 || !(VAR_14 = FUNC_9(VAR_11, '!')))
            return FUNC_10(VAR_13.pcs, VAR_11, VAR_12);

        if (VAR_14 == VAR_11) return VAR_4;

        VAR_15 = FUNC_1(FUNC_0(), 0, (VAR_14 - VAR_11 + 1) * sizeof(WCHAR));
        if (!VAR_15) return VAR_4;
        FUNC_4(VAR_15, VAR_11, (VAR_14 - VAR_11) * sizeof(WCHAR));
        VAR_15[VAR_14 - VAR_11] = 0;

        for (VAR_13.requested = VAR_13.pcs->lmodules; VAR_13.requested; VAR_13.requested = VAR_13.requested->next)
        {
            if (VAR_13.requested->type == VAR_2 && FUNC_7(&VAR_13))
            {
                if (FUNC_3(VAR_13.requested->module.ModuleName, VAR_15, VAR_4) &&
                    FUNC_11(&VAR_13, VAR_14 + 1, VAR_12))
                    break;
            }
        }


        if (!VAR_13.requested && (VAR_7 & VAR_5))
        {
            for (VAR_13.requested = VAR_13.pcs->lmodules; VAR_13.requested; VAR_13.requested = VAR_13.requested->next)
            {
                if ((VAR_13.requested->type == VAR_0 || VAR_13.requested->type == VAR_1) &&
                    !FUNC_6(VAR_13.pcs, VAR_13.requested) &&
                    FUNC_7(&VAR_13))
                {
                    if (FUNC_3(VAR_13.requested->module.ModuleName, VAR_15, VAR_4) &&
                        FUNC_11(&VAR_13, VAR_14 + 1, VAR_12))
                    break;
                }
            }
        }
        FUNC_2(FUNC_0(), 0, VAR_15);
        return VAR_6;
    }
    VAR_13.requested = FUNC_5(VAR_13.pcs, VAR_10, VAR_3);
    if (!FUNC_7(&VAR_13))
        return VAR_4;


    if (VAR_11 && (VAR_14 = FUNC_9(VAR_11, '!')))
    {
        if (VAR_14 == VAR_11) return VAR_4;
        VAR_11 = VAR_14 + 1;
    }

    FUNC_11(&VAR_13, VAR_11 ? VAR_11 : VAR_8, VAR_12);

    return VAR_6;
}
