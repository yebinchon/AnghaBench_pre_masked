
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int LoadedFeature ;
typedef int INT ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *,int ,int ,int *) ;
 int FUNC_1 (char*,char const*) ;
 int * FUNC_2 (int ,int *,TYPE_1__*,int ,char const*) ;

__attribute__((used)) static INT FUNC_3(HDC VAR_2, SCRIPT_ANALYSIS *VAR_3, ScriptCache* VAR_4, WORD *VAR_5, INT VAR_6, INT VAR_7, INT* VAR_8, const char* VAR_9)
{
    LoadedFeature *VAR_10;

    VAR_10 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0, VAR_9);
    if (!VAR_10)
        return VAR_1;

    FUNC_1("applying feature %s\n",VAR_9);
    return FUNC_0(VAR_4->GSUB_Table, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8);
}
