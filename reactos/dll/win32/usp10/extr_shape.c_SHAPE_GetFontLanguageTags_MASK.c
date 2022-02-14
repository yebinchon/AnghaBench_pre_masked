
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ userLang; } ;
typedef TYPE_1__ ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int OPENTYPE_TAG ;
typedef int HRESULT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (TYPE_1__*,int,int,int,int*,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,TYPE_1__*) ;

HRESULT FUNC_5( HDC VAR_3, ScriptCache *VAR_4,
                                   SCRIPT_ANALYSIS *VAR_5, OPENTYPE_TAG VAR_6,
                                   int VAR_7, OPENTYPE_TAG *VAR_8,
                                   int *VAR_9)
{
    HRESULT VAR_10;
    OPENTYPE_TAG VAR_11 = 0x00000000;
    BOOL VAR_12 = VAR_1;

    FUNC_4(VAR_3, VAR_4);

    if (VAR_5 && VAR_4->userLang != 0)
        VAR_11 = VAR_4->userLang;

    VAR_10 = FUNC_2(VAR_4, VAR_6, VAR_11, VAR_7, VAR_8, VAR_9);
    if (FUNC_0(VAR_10))
    {
        VAR_12 = VAR_2;
        VAR_10 = FUNC_2(VAR_4, FUNC_1('l','a','t','n'), VAR_11, VAR_7, VAR_8, VAR_9);
    }

    if (FUNC_0(VAR_10) || VAR_12)
        *VAR_9 = 0;
    if (FUNC_3(VAR_10) && VAR_12 && VAR_5)
        VAR_10 = VAR_0;
    return VAR_10;
}
