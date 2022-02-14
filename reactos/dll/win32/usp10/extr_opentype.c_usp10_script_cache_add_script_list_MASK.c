
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef enum usp10_script_table { ____Placeholder_usp10_script_table } usp10_script_table ;
struct TYPE_14__ {int const** table; } ;
struct TYPE_13__ {TYPE_1__* ScriptRecord; int ScriptCount; } ;
struct TYPE_12__ {size_t script_count; } ;
struct TYPE_11__ {int Script; int * ScriptTag; } ;
typedef TYPE_2__ ScriptCache ;
typedef size_t SIZE_T ;
typedef TYPE_3__ OT_ScriptList ;
typedef int OPENTYPE_TAG ;
typedef TYPE_4__ LoadedScript ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_5(ScriptCache *VAR_0,
        enum usp10_script_table VAR_1, const OT_ScriptList *VAR_2)
{
    SIZE_T VAR_3, VAR_4, VAR_5;
    LoadedScript *VAR_6;
    OPENTYPE_TAG VAR_7;

    FUNC_2("script_cache %p, table %#x, list %p.\n", VAR_0, VAR_1, VAR_2);

    if (!(VAR_4 = FUNC_0(VAR_2->ScriptCount)))
        return;

    FUNC_2("Adding %lu scripts.\n", VAR_4);

    VAR_3 = VAR_0->script_count;
    for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    {
        VAR_7 = FUNC_1(VAR_2->ScriptRecord[VAR_5].ScriptTag[0],
                VAR_2->ScriptRecord[VAR_5].ScriptTag[1],
                VAR_2->ScriptRecord[VAR_5].ScriptTag[2],
                VAR_2->ScriptRecord[VAR_5].ScriptTag[3]);

        if (!(VAR_3 && (VAR_6 = FUNC_4(VAR_0, VAR_7)))
                && !(VAR_6 = FUNC_3(VAR_0, VAR_7)))
            return;

        VAR_6->table[VAR_1] = (const BYTE *)VAR_2 + FUNC_0(VAR_2->ScriptRecord[VAR_5].Script);
    }
}
