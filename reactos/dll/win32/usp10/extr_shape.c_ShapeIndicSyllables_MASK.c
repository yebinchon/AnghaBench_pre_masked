
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


typedef int (* second_reorder_function ) (int *,TYPE_1__*,int *,TYPE_1__*,int ) ;
typedef int lexical_function ;
typedef int WORD ;
typedef int WCHAR ;
struct TYPE_18__ {int end; } ;
typedef int ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int LoadedFeature ;
typedef TYPE_1__ IndicSyllable ;
typedef int INT ;
typedef int HDC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int *,int *,int *,int,TYPE_1__*,int *,int*,int *,int ,TYPE_1__*,int *) ;
 int FUNC_1 (int ,int *,int *,int *,int,TYPE_1__*,int *,int*,int *,int ,TYPE_1__*,scalar_t__,char*) ;
 int FUNC_2 (int ,int *,int *,int *,int,TYPE_1__*,int *,int*,int *,int ,TYPE_1__*,char*) ;
 int FUNC_3 (int ,int *,int *,int *,int,TYPE_1__*,int *,int*,int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int ,int *,int *,int ,char*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_8(HDC VAR_1, ScriptCache *VAR_2, SCRIPT_ANALYSIS *VAR_3, WCHAR* VAR_4, INT VAR_5, IndicSyllable *VAR_6, INT VAR_7, WORD *VAR_8, INT* VAR_9, WORD *VAR_10, lexical_function VAR_11, second_reorder_function VAR_12, BOOL VAR_13)
{
    int VAR_14;
    int VAR_15 = 0;
    LoadedFeature *VAR_16 = (VAR_13)?FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "locl"):((void*)0);
    LoadedFeature *VAR_17 = FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "nukt");
    LoadedFeature *VAR_18 = FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "akhn");
    LoadedFeature *VAR_19 = (VAR_13)?FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "rkrf"):((void*)0);
    LoadedFeature *VAR_20 = FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "pstf");
    LoadedFeature *VAR_21 = (!VAR_19)?FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "vatu"):((void*)0);
    LoadedFeature *VAR_22 = (VAR_13)?FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "cjct"):((void*)0);
    BOOL VAR_23 = (FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "rphf") != ((void*)0));
    BOOL VAR_24 = (FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "pref") != ((void*)0));
    BOOL VAR_25 = (FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "blwf") != ((void*)0));
    BOOL VAR_26 = (FUNC_5(VAR_1, VAR_3, VAR_2, VAR_0, "half") != ((void*)0));
    IndicSyllable VAR_27;

    for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
    {
        int VAR_28;
        FUNC_6(&VAR_27, &VAR_6[VAR_14], sizeof(IndicSyllable));
        FUNC_7(&VAR_27, -1, VAR_15);
        VAR_28 = VAR_27.end;

        if (VAR_16)
        {
            FUNC_4("applying feature locl\n");
            FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_16);
        }
        if (VAR_17)
        {
            FUNC_4("applying feature nukt\n");
            FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_17);
        }
        if (VAR_18)
        {
            FUNC_4("applying feature akhn\n");
            FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_18);
        }

        if (VAR_23)
            FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27);
        if (VAR_19)
        {
            FUNC_4("applying feature rkrf\n");
            FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_19);
        }
        if (VAR_24)
            FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_13, "pref");
        if (VAR_25)
        {
            if (!VAR_13)
                FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, "blwf");

            FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_13, "blwf");

        }
        if (VAR_26)
            FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, "half");
        if (VAR_20)
        {
            FUNC_4("applying feature pstf\n");
            FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_20);
        }
        if (VAR_21)
        {
            FUNC_4("applying feature vatu\n");
            FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_21);
        }
        if (VAR_22)
        {
            FUNC_4("applying feature cjct\n");
            FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6[VAR_14], VAR_8, VAR_9, VAR_10, VAR_11, &VAR_27, VAR_22);
        }

        if (VAR_12)
            VAR_12(VAR_4, &VAR_6[VAR_14], VAR_8, &VAR_27, VAR_11);

        VAR_15 += VAR_27.end - VAR_28;
    }
}
