
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


 int FUNC_0 (int ,int *,int*,int ,int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *,int,int *,int ) ;
 int FUNC_3 (int ,int *,int *,int *,int,int **,int*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,int *,int *,int,int *,int,int *,int*,int *,int ,int ,int ) ;
 int FUNC_5 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_11(HDC VAR_4, ScriptCache *VAR_5, SCRIPT_ANALYSIS *VAR_6, WCHAR* VAR_7, INT VAR_8, WORD* VAR_9, INT* VAR_10, INT VAR_11, WORD *VAR_12)
{
    int VAR_13 = VAR_8;
    WCHAR *VAR_14;
    IndicSyllable *VAR_15 = ((void*)0);
    int VAR_16 = 0;
    BOOL VAR_17 = FUNC_7(VAR_6, VAR_5);

    if (*VAR_10 != VAR_8)
    {
        FUNC_1("Number of Glyphs and Chars need to match at the beginning\n");
        return;
    }

    VAR_14 = FUNC_8(2 * VAR_8 * sizeof(*VAR_14));
    FUNC_10(VAR_14, VAR_7, VAR_8 * sizeof(WCHAR));


    FUNC_0(VAR_4, VAR_14, &VAR_13, VAR_2, VAR_12, VAR_8);
    FUNC_5("New composed string %s (%i)\n",FUNC_6(VAR_14,VAR_13),VAR_13);


    FUNC_3( VAR_4, VAR_6, VAR_5, VAR_14, VAR_13, &VAR_15, &VAR_16, VAR_3, VAR_0, VAR_17);
    FUNC_5("reordered string %s\n",FUNC_6(VAR_14,VAR_13));
    FUNC_2(VAR_4, VAR_14, VAR_13, VAR_9, 0);
    *VAR_10 = VAR_13;


    FUNC_4(VAR_4, VAR_5, VAR_6, VAR_14, VAR_8, VAR_15, VAR_16, VAR_9, VAR_10, VAR_12, VAR_3, VAR_1, VAR_17);

    FUNC_9(VAR_14);
    FUNC_9(VAR_15);
}
