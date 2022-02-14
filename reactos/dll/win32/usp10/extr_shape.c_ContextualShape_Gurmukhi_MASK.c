
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


 int FUNC_0 (int ,int *,int*,int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int,int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int *,int *,int,int **,int*,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,int *,int *,int,int *,int,int *,int*,int *,int ,int *,int ) ;
 int FUNC_5 (char*,int ,...) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *) ;
 int VAR_2 ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int) ;

__attribute__((used)) static void FUNC_11(HDC VAR_3, ScriptCache *VAR_4, SCRIPT_ANALYSIS *VAR_5, WCHAR* VAR_6, INT VAR_7, WORD* VAR_8, INT* VAR_9, INT VAR_10, WORD *VAR_11)
{
    int VAR_12 = VAR_7;
    WCHAR *VAR_13;
    IndicSyllable *VAR_14 = ((void*)0);
    int VAR_15 = 0;
    BOOL VAR_16 = FUNC_7(VAR_5, VAR_4);

    if (*VAR_9 != VAR_7)
    {
        FUNC_1("Number of Glyphs and Chars need to match at the beginning\n");
        return;
    }

    VAR_13 = FUNC_8(VAR_7 * sizeof(*VAR_13));
    FUNC_10(VAR_13, VAR_6, VAR_7 * sizeof(WCHAR));


    FUNC_0(VAR_3, VAR_13, &VAR_12, VAR_0, VAR_11);
    FUNC_5("New composed string %s (%i)\n",FUNC_6(VAR_13,VAR_12),VAR_12);


    FUNC_3( VAR_3, VAR_5, VAR_4, VAR_13, VAR_12, &VAR_14, &VAR_15, VAR_2, VAR_1, VAR_16);
    FUNC_5("reordered string %s\n",FUNC_6(VAR_13,VAR_12));
    FUNC_2(VAR_3, VAR_13, VAR_12, VAR_8, 0);
    *VAR_9 = VAR_12;


    FUNC_4(VAR_3, VAR_4, VAR_5, VAR_13, VAR_7, VAR_14, VAR_15, VAR_8, VAR_9, VAR_11, VAR_2, ((void*)0), VAR_16);

    FUNC_9(VAR_13);
    FUNC_9(VAR_14);
}
