
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int lookup_count; int * lookups; } ;
struct TYPE_6__ {scalar_t__ GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef TYPE_2__ LoadedFeature ;
typedef int INT ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int *,int,int,int*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int,int,int,int,int *) ;
 int FUNC_3 (char const*,int) ;
 TYPE_2__* FUNC_4 (int ,int *,TYPE_1__*,int ,char const*) ;

__attribute__((used)) static int FUNC_5(HDC VAR_2, SCRIPT_ANALYSIS *VAR_3, ScriptCache* VAR_4, WORD *VAR_5, int VAR_6, INT* VAR_7, INT VAR_8, const char* VAR_9, WORD *VAR_10 )
{
    if (VAR_4->GSUB_Table)
    {
        LoadedFeature *VAR_11;
        int VAR_12;

        VAR_11 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_0, VAR_9);
        if (!VAR_11)
            return VAR_1;

        FUNC_1("applying feature %s: %i lookups\n",FUNC_3(VAR_9,4),VAR_11->lookup_count);
        for (VAR_12 = 0; VAR_12 < VAR_11->lookup_count; VAR_12++)
        {
            int VAR_13;

            if (VAR_6 > 0)
                VAR_13 = 0;
            else
                VAR_13 = *VAR_7-1;
            FUNC_1("applying lookup (%i/%i)\n",VAR_12,VAR_11->lookup_count);
            while(VAR_13 < *VAR_7 && VAR_13 >= 0)
            {
                INT VAR_14;
                INT VAR_15 = *VAR_7;

                VAR_14 = FUNC_0(VAR_4->GSUB_Table, VAR_11->lookups[VAR_12], VAR_5, VAR_13, VAR_6, VAR_7);
                if (*VAR_7 != VAR_15)
                {
                    FUNC_2(VAR_14, *VAR_7 - VAR_15, VAR_6, VAR_8, VAR_10);
                    VAR_13 = VAR_14;
                }
                else
                    VAR_13+=VAR_6;
            }
        }
        return *VAR_7;
    }
    return VAR_1;
}
