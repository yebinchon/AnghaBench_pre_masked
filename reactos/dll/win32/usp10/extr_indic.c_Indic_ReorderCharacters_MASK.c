
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* reorder_function ) (int *,int *,int ) ;
typedef int lexical_function ;
typedef int WCHAR ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int IndicSyllable ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int *,int *,unsigned int,int **,int*,int ,int ) ;

void FUNC_2(HDC VAR_0, SCRIPT_ANALYSIS *VAR_1, ScriptCache *VAR_2, WCHAR *VAR_3, unsigned int VAR_4,
        IndicSyllable **VAR_5, int *VAR_6, lexical_function VAR_7, reorder_function VAR_8, BOOL VAR_9)
{
    int VAR_10;

    if (!VAR_8)
    {
        FUNC_0("Failure to have required functions\n");
        return;
    }

    FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);
    for (VAR_10 = 0; VAR_10 < *VAR_6; VAR_10++)
        VAR_8(VAR_3, &(*VAR_5)[VAR_10], VAR_7);
}
