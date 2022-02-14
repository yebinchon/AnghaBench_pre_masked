
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int tag; } ;
struct TYPE_9__ {int script_count; TYPE_1__* scripts; } ;
struct TYPE_8__ {int tag; } ;
typedef TYPE_2__ ScriptCache ;
typedef int OPENTYPE_TAG ;
typedef TYPE_3__ LoadedScript ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,int) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;

HRESULT FUNC_3(ScriptCache *VAR_3, OPENTYPE_TAG VAR_4, int VAR_5, OPENTYPE_TAG *VAR_6, int *VAR_7)
{
    int VAR_8;
    const LoadedScript *VAR_9;
    HRESULT VAR_10 = VAR_1;

    FUNC_0(VAR_3);

    *VAR_7 = VAR_3->script_count;

    if (VAR_4)
    {
        if (!(VAR_9 = FUNC_2(VAR_3, VAR_4)))
            return VAR_2;

        *VAR_6 = VAR_9->tag;
        *VAR_7 = 1;
        return VAR_1;
    }

    if (VAR_5 < *VAR_7)
        VAR_10 = VAR_0;

    VAR_5 = FUNC_1(VAR_5, VAR_3->script_count);
    for (VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8)
    {
        VAR_6[VAR_8] = VAR_3->scripts[VAR_8].tag;
    }
    return VAR_10;
}
