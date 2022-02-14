
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
 int FUNC_1 (int ,int *,int*,int ,int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int,int *,int ) ;
 int FUNC_4 (int ,int *,int *,int *,int,int **,int*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int ,int *,int *,int *,int,int *,int,int *,int*,int *,int ,int ,int ) ;
 int FUNC_6 (char*,int ,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *) ;
 int * FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_12(HDC VAR_5, ScriptCache *VAR_6, SCRIPT_ANALYSIS *VAR_7, WCHAR* VAR_8, INT VAR_9, WORD* VAR_10, INT* VAR_11, INT VAR_12, WORD *VAR_13)
{
    int VAR_14 = VAR_9;
    WCHAR *VAR_15;
    IndicSyllable *VAR_16 = ((void*)0);
    int VAR_17 = 0;
    BOOL VAR_18 = FUNC_8(VAR_7, VAR_6);

    if (*VAR_11 != VAR_9)
    {
        FUNC_2("Number of Glyphs and Chars need to match at the beginning\n");
        return;
    }

    VAR_15 = FUNC_9(2 * VAR_9 * sizeof(*VAR_15));
    FUNC_11(VAR_15, VAR_8, VAR_9 * sizeof(WCHAR));


    FUNC_1(VAR_5, VAR_15, &VAR_14, VAR_3, VAR_13, VAR_9);
    FUNC_0(VAR_5, VAR_15, &VAR_14, VAR_2, VAR_13);
    FUNC_6("New composed string %s (%i)\n",FUNC_7(VAR_15,VAR_14),VAR_14);


    FUNC_4( VAR_5, VAR_7, VAR_6, VAR_15, VAR_14, &VAR_16, &VAR_17, VAR_4, VAR_0, VAR_18);
    FUNC_6("reordered string %s\n",FUNC_7(VAR_15,VAR_14));
    FUNC_3(VAR_5, VAR_15, VAR_14, VAR_10, 0);
    *VAR_11 = VAR_14;


    FUNC_5(VAR_5, VAR_6, VAR_7, VAR_15, VAR_9, VAR_16, VAR_17, VAR_10, VAR_11, VAR_13, VAR_4, VAR_1, VAR_18);

    FUNC_10(VAR_15);
    FUNC_10(VAR_16);
}
