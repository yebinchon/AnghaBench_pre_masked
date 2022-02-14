
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int WCHAR ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int IndicSyllable ;
typedef int INT ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int,int *,int ) ;
 int FUNC_2 (int ,int *,int *,int *,int,int **,int*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int *,int *,int,int *,int,int *,int*,int *,int ,int *,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *) ;
 int VAR_1 ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int) ;

__attribute__((used)) static void FUNC_10(HDC VAR_2, ScriptCache *VAR_3, SCRIPT_ANALYSIS *VAR_4, WCHAR* VAR_5, INT VAR_6, WORD* VAR_7, INT* VAR_8, INT VAR_9, WORD *VAR_10)
{
    int VAR_11 = VAR_6;
    WCHAR *VAR_12;
    IndicSyllable *VAR_13 = ((void*)0);
    int VAR_14 = 0;
    BOOL VAR_15 = FUNC_6(VAR_4, VAR_3);

    if (*VAR_8 != VAR_6)
    {
        FUNC_0("Number of Glyphs and Chars need to match at the beginning\n");
        return;
    }

    VAR_12 = FUNC_7(VAR_6 * sizeof(*VAR_12));
    FUNC_9(VAR_12, VAR_5, VAR_6 * sizeof(WCHAR));


    FUNC_2( VAR_2, VAR_4, VAR_3, VAR_12, VAR_11, &VAR_13, &VAR_14, VAR_1, VAR_0, VAR_15);
    FUNC_4("reordered string %s\n",FUNC_5(VAR_12,VAR_11));
    FUNC_1(VAR_2, VAR_12, VAR_11, VAR_7, 0);
    *VAR_8 = VAR_11;


    FUNC_3(VAR_2, VAR_3, VAR_4, VAR_12, VAR_6, VAR_13, VAR_14, VAR_7, VAR_8, VAR_10, VAR_1, ((void*)0), VAR_15);

    FUNC_8(VAR_12);
    FUNC_8(VAR_13);
}
