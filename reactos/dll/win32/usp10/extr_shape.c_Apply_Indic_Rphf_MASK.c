
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lexical_function ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_5__ {scalar_t__ ralf; } ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef TYPE_1__ IndicSyllable ;
typedef scalar_t__ INT ;
typedef int HDC ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int ,int *,int *,int *,scalar_t__,int,scalar_t__*,char*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, WCHAR* VAR_4, INT VAR_5, IndicSyllable *VAR_6, WORD *VAR_7, INT* VAR_8, WORD *VAR_9, lexical_function VAR_10, IndicSyllable *VAR_11)
{
    INT VAR_12;
    INT VAR_13 = *VAR_8;

    if (VAR_6->ralf >= 0)
    {
        VAR_12 = FUNC_1(VAR_1, VAR_3, VAR_2, VAR_7, VAR_11->ralf, 1, VAR_8, "rphf");
        if (VAR_12 > VAR_0)
        {
            FUNC_0(VAR_12, *VAR_8 - VAR_13, 1, VAR_5, VAR_9);
            FUNC_2(VAR_11,VAR_11->ralf,*VAR_8 - VAR_13);
        }
    }
}
