
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* requiredFeatures; } ;
struct TYPE_5__ {size_t eScript; } ;
typedef int ScriptCache ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int LoadedFeature ;
typedef int HRESULT ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,TYPE_1__*,int *,int ,scalar_t__) ;
 int FUNC_1 (int ,int *) ;

HRESULT FUNC_2(HDC VAR_4, ScriptCache *VAR_5, SCRIPT_ANALYSIS *VAR_6)
{
    LoadedFeature *VAR_7;
    int VAR_8;

    if (!VAR_2[VAR_6->eScript].requiredFeatures)
        return VAR_1;

    FUNC_1(VAR_4, VAR_5);


    VAR_8 = 0;
    while (VAR_2[VAR_6->eScript].requiredFeatures[VAR_8])
    {
        VAR_7 = FUNC_0(VAR_4, VAR_6, VAR_5, VAR_0, VAR_2[VAR_6->eScript].requiredFeatures[VAR_8]);
        if (VAR_7)
            return VAR_1;
        VAR_8++;
    }

    return VAR_3;
}
