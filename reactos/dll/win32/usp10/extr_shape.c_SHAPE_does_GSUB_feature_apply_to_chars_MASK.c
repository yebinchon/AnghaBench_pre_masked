
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int WCHAR ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef scalar_t__ INT ;
typedef int HDC ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int const*,int,int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int *,int ,int,scalar_t__*,char const*) ;
 int * FUNC_2 (int,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(HDC VAR_1, SCRIPT_ANALYSIS *VAR_2, ScriptCache *VAR_3,
        const WCHAR *VAR_4, int VAR_5, int VAR_6, const char *VAR_7)
{
    WORD *VAR_8;
    INT VAR_9 = VAR_6;
    INT VAR_10;

    VAR_8 = FUNC_2(VAR_6, 2 * sizeof(*VAR_8));
    FUNC_0(VAR_1, VAR_4, VAR_6, VAR_8, 0);
    VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_8, 0, VAR_5, &VAR_9, VAR_7);
    if (VAR_10 > VAR_0)
        VAR_10 = VAR_6 - VAR_9;
    else
        VAR_10 = 0;

    FUNC_3(VAR_8);
    return VAR_10;
}
