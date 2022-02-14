
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {char tableType; scalar_t__ tag; } ;
struct TYPE_11__ {scalar_t__ tag; int feature_count; TYPE_3__* features; int * table; } ;
struct TYPE_10__ {TYPE_2__ default_language; } ;
typedef int ScriptCache ;
typedef scalar_t__ OPENTYPE_TAG ;
typedef TYPE_1__ LoadedScript ;
typedef TYPE_2__ LoadedLanguage ;
typedef TYPE_3__ LoadedFeature ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,scalar_t__) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,scalar_t__) ;

HRESULT FUNC_5(ScriptCache *VAR_5, OPENTYPE_TAG VAR_6, OPENTYPE_TAG VAR_7, BOOL VAR_8, OPENTYPE_TAG VAR_9, char VAR_10, int VAR_11, OPENTYPE_TAG *VAR_12, int *VAR_13, LoadedFeature** VAR_14)
{
    int VAR_15;
    LoadedLanguage *VAR_16;
    LoadedScript *VAR_17;
    HRESULT VAR_18 = VAR_2;

    FUNC_2(VAR_5);
    if (!(VAR_17 = FUNC_3(VAR_5, VAR_6)))
    {
        *VAR_13 = 0;
        if (!VAR_8)
            return VAR_2;
        else
            return VAR_0;
    }

    FUNC_1(VAR_17);

    VAR_16 = &VAR_17->default_language;
    if (VAR_16->tag != VAR_7 || (!VAR_16->table[VAR_4]
            && !VAR_16->table[VAR_3]))
        VAR_16 = FUNC_4(VAR_17, VAR_7);

    if (!VAR_16)
    {
        *VAR_13 = 0;
        return VAR_2;
    }

    FUNC_0(VAR_5, VAR_16);

    if (VAR_10)
    {
        *VAR_13 = 0;
        for (VAR_15 = 0; VAR_15 < VAR_16->feature_count; VAR_15++)
            if (VAR_16->features[VAR_15].tableType == VAR_10)
                *VAR_13 = (*VAR_13)+1;
    }
    else
        *VAR_13 = VAR_16->feature_count;

    if (!VAR_9 && VAR_11 < *VAR_13)
        VAR_18 = VAR_1;
    else if (VAR_9)
        VAR_18 = VAR_0;

    for (VAR_15 = 0; VAR_15 < VAR_16->feature_count; VAR_15++)
    {
        if (VAR_15 < VAR_11)
        {
            if (!VAR_10 || VAR_16->features[VAR_15].tableType == VAR_10)
                VAR_12[VAR_15] = VAR_16->features[VAR_15].tag;
        }

        if (VAR_9)
        {
            if ((VAR_9 == VAR_16->features[VAR_15].tag) &&
                (!VAR_10 || VAR_16->features[VAR_15].tableType == VAR_10))
            {
                VAR_12[0] = VAR_16->features[VAR_15].tag;
                *VAR_13 = 1;
                if (VAR_14)
                    *VAR_14 = &VAR_16->features[VAR_15];
                VAR_18 = VAR_2;
                break;
            }
        }
    }
    return VAR_18;
}
