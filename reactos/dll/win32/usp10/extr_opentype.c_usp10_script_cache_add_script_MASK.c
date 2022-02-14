
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tag; } ;
struct TYPE_5__ {scalar_t__ script_count; TYPE_2__* scripts; int scripts_size; } ;
typedef TYPE_1__ ScriptCache ;
typedef int OPENTYPE_TAG ;
typedef TYPE_2__ LoadedScript ;


 int FUNC_0 (char*) ;
 int FUNC_1 (void**,int *,scalar_t__,int) ;

__attribute__((used)) static LoadedScript *FUNC_2(ScriptCache *VAR_0, OPENTYPE_TAG VAR_1)
{
    LoadedScript *VAR_2;

    if (!FUNC_1((void **)&VAR_0->scripts, &VAR_0->scripts_size,
            VAR_0->script_count + 1, sizeof(*VAR_0->scripts)))
    {
        FUNC_0("Failed to grow scripts array.\n");
        return ((void*)0);
    }

    VAR_2 = &VAR_0->scripts[VAR_0->script_count++];
    VAR_2->tag = VAR_1;

    return VAR_2;
}
