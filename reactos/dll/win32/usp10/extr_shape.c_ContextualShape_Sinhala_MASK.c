
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


 int FUNC_0 (int ,int*,int*,int ,int *,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int*,int,int *,int ) ;
 int FUNC_3 (int ,int *,int *,int*,int,int**,int*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *,int *,int*,int,int*,int,int *,int*,int *,int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,...) ;
 int VAR_2 ;
 int FUNC_6 (int*,int) ;
 int* FUNC_7 (int) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*,int*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(HDC VAR_4, ScriptCache *VAR_5, SCRIPT_ANALYSIS *VAR_6, WCHAR* VAR_7, INT VAR_8, WORD* VAR_9, INT* VAR_10, INT VAR_11, WORD *VAR_12)
{
    int VAR_13 = VAR_8;
    int VAR_14;
    WCHAR *VAR_15;
    IndicSyllable *VAR_16 = ((void*)0);
    int VAR_17 = 0;

    if (*VAR_10 != VAR_8)
    {
        FUNC_1("Number of Glyphs and Chars need to match at the beginning\n");
        return;
    }

    VAR_15 = FUNC_7(3 * VAR_8 * sizeof(*VAR_15));

    FUNC_9(VAR_15, VAR_7, VAR_8 * sizeof(WCHAR));


    FUNC_0(VAR_4, VAR_15, &VAR_13, VAR_1, VAR_12, VAR_8);

    FUNC_5("New double vowel expanded string %s (%i)\n",FUNC_6(VAR_15,VAR_13),VAR_13);


    FUNC_3( VAR_4, VAR_6, VAR_5, VAR_15, VAR_13, &VAR_16, &VAR_17, VAR_3, VAR_0, VAR_2);
    FUNC_5("reordered string %s\n",FUNC_6(VAR_15,VAR_13));


    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
    {
        if ((VAR_15[VAR_14] == 0x200D || VAR_15[VAR_14] == 0x200C) &&
            (VAR_14 == 0 || VAR_15[VAR_14-1] == 0x0020 || VAR_14 == VAR_13-1 || VAR_15[VAR_14+1] == 0x0020))
            VAR_15[VAR_14] = 0x0020;
    }


    FUNC_2(VAR_4, VAR_15, VAR_13, VAR_9, 0);
    *VAR_10 = VAR_13;
    FUNC_4(VAR_4, VAR_5, VAR_6, VAR_15, VAR_8, VAR_16, VAR_17, VAR_9, VAR_10, VAR_12, VAR_3, ((void*)0), VAR_2);

    FUNC_8(VAR_15);
    FUNC_8(VAR_16);
}
