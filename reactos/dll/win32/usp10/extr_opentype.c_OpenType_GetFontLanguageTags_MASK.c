
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ tag; scalar_t__* table; } ;
struct TYPE_8__ {int language_count; TYPE_2__ default_language; TYPE_1__* languages; } ;
struct TYPE_6__ {scalar_t__ tag; } ;
typedef int ScriptCache ;
typedef scalar_t__ OPENTYPE_TAG ;
typedef TYPE_3__ LoadedScript ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *,scalar_t__) ;

HRESULT FUNC_4(ScriptCache *VAR_4, OPENTYPE_TAG VAR_5, OPENTYPE_TAG VAR_6, int VAR_7, OPENTYPE_TAG *VAR_8, int *VAR_9)
{
    int VAR_10;
    HRESULT VAR_11 = VAR_2;
    LoadedScript *VAR_12 = ((void*)0);

    FUNC_2(VAR_4);
    if (!(VAR_12 = FUNC_3(VAR_4, VAR_5)))
        return VAR_0;

    FUNC_1(VAR_12);

    if (!VAR_6 && VAR_7 < VAR_12->language_count)
        VAR_11 = VAR_1;
    else if (VAR_6)
        VAR_11 = VAR_0;

    *VAR_9 = VAR_12->language_count;

    for (VAR_10 = 0; VAR_10 < VAR_12->language_count; VAR_10++)
    {
        if (VAR_10 < VAR_7)
            VAR_8[VAR_10] = VAR_12->languages[VAR_10].tag;

        if (VAR_6)
        {
            if (VAR_6 == VAR_12->languages[VAR_10].tag)
            {
                VAR_8[0] = VAR_12->languages[VAR_10].tag;
                *VAR_9 = 1;
                VAR_11 = VAR_2;
                break;
            }
        }
    }

    if (VAR_12->default_language.table[VAR_3])
    {
        if (VAR_10 < VAR_7)
            VAR_8[VAR_10] = VAR_12->default_language.tag;

        if (VAR_6 && FUNC_0(VAR_11))
        {
            VAR_8[0] = VAR_12->default_language.tag;
        }
        VAR_10++;
        *VAR_9 = (*VAR_9) + 1;
    }

    return VAR_11;
}
