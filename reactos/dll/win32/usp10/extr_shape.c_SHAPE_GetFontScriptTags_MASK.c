
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int scriptTag; } ;
struct TYPE_4__ {size_t eScript; } ;
typedef int ScriptCache ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int OPENTYPE_TAG ;
typedef int HRESULT ;
typedef int HDC ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int,int*,int*) ;
 int FUNC_2 (int ,int *) ;
 TYPE_2__* VAR_0 ;

HRESULT FUNC_3( HDC VAR_1, ScriptCache *VAR_2,
                                 SCRIPT_ANALYSIS *VAR_3, int VAR_4,
                                 OPENTYPE_TAG *VAR_5, int *VAR_6)
{
    HRESULT VAR_7;
    OPENTYPE_TAG VAR_8 = 0x00000000;

    FUNC_2(VAR_1, VAR_2);

    if (VAR_3 && VAR_0[VAR_3->eScript].scriptTag)
        VAR_8 = VAR_0[VAR_3->eScript].scriptTag;

    VAR_7 = FUNC_1(VAR_2, VAR_8, VAR_4, VAR_5, VAR_6);
    if (FUNC_0(VAR_7))
        *VAR_6 = 0;
    return VAR_7;
}
