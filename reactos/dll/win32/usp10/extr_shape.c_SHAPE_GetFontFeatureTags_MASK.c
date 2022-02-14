
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ scriptTag; } ;
struct TYPE_4__ {size_t eScript; } ;
typedef int ScriptCache ;
typedef TYPE_1__ SCRIPT_ANALYSIS ;
typedef int OPENTYPE_TAG ;
typedef int HRESULT ;
typedef int HDC ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,int ,int ,int,int ,int,int *,int*,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;
 TYPE_2__* VAR_3 ;

HRESULT FUNC_4( HDC VAR_4, ScriptCache *VAR_5,
                                  SCRIPT_ANALYSIS *VAR_6, OPENTYPE_TAG VAR_7,
                                  OPENTYPE_TAG VAR_8, int VAR_9,
                                  OPENTYPE_TAG *VAR_10, int *VAR_11)
{
    HRESULT VAR_12;
    BOOL VAR_13 = VAR_0;

    FUNC_3(VAR_4, VAR_5);

    if (VAR_6 && VAR_3[VAR_6->eScript].scriptTag)
    {
        FUNC_1("Filtering not implemented\n");
        VAR_13 = VAR_2;
    }

    VAR_12 = FUNC_2(VAR_5, VAR_7, VAR_8, VAR_13, 0x00000000, VAR_1, VAR_9, VAR_10, VAR_11, ((void*)0));

    if (FUNC_0(VAR_12))
        *VAR_11 = 0;
    return VAR_12;
}
