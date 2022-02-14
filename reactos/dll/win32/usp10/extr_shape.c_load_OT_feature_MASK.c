
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ userLang; scalar_t__ GPOS_Table; scalar_t__ GSUB_Table; } ;
typedef TYPE_1__ ScriptCache ;
typedef int SCRIPT_ANALYSIS ;
typedef int OPENTYPE_TAG ;
typedef int LoadedFeature ;
typedef int HDC ;


 int VAR_0 ;
 int FUNC_0 (char const,char const,char const,char const) ;
 int FUNC_1 (TYPE_1__*,int,int,int ,int,char,int,int*,int*,int **) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (int ,int *,TYPE_1__*,int) ;

__attribute__((used)) static LoadedFeature* FUNC_5(HDC VAR_1, SCRIPT_ANALYSIS *VAR_2, ScriptCache *VAR_3, char VAR_4, const char* VAR_5)
{
    LoadedFeature *VAR_6 = ((void*)0);

    if (VAR_3->GSUB_Table || VAR_3->GPOS_Table)
    {
        int VAR_7 = 2;
        OPENTYPE_TAG VAR_8;
        OPENTYPE_TAG VAR_9;
        OPENTYPE_TAG VAR_10 = 0x00000000;
        int VAR_11;

        do
        {
            VAR_10 = FUNC_4(VAR_1,VAR_2,VAR_3,(VAR_7==2));
            if (VAR_3->userLang != 0)
                VAR_9 = VAR_3->userLang;
            else
                VAR_9 = FUNC_0('d','f','l','t');
            VAR_7--;

            FUNC_1(VAR_3, VAR_10, VAR_9, VAR_0, FUNC_0(VAR_5[0],VAR_5[1],VAR_5[2],VAR_5[3]), VAR_4, 1, &VAR_8, &VAR_11, &VAR_6);

        } while(VAR_7 && !VAR_6);


        if (!VAR_6)
        {
            if (!VAR_10)
                VAR_10 = FUNC_0('l','a','t','n');
            FUNC_1(VAR_3, VAR_10, FUNC_0('d','f','l','t'), VAR_0, FUNC_0(VAR_5[0],VAR_5[1],VAR_5[2],VAR_5[3]), VAR_4, 1, &VAR_8, &VAR_11, &VAR_6);
        }
    }

    FUNC_2("Feature %s located at %p\n",FUNC_3(VAR_5,4),VAR_6);
    return VAR_6;
}
