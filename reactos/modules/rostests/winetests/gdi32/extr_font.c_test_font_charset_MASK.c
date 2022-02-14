
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cd ;
typedef int WORD ;
typedef int UINT ;
typedef scalar_t__ const INT ;




 int VAR_0 ;


 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__ const,int ,int *,int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    static struct charset_data
    {
        INT charset;
        UINT code_page;
        WORD font_idxA[128], font_idxW[128];
    } VAR_4[] =
    {
        { 131, 1252 },
        { 129, 1251 },
        { 128, 130 }
    };
    int VAR_5;

    if (!VAR_2 || !VAR_3)
    {
        FUNC_5("Skipping the font charset test on a Win9x platform\n");
        return;
    }

    if (!FUNC_1("Arial"))
    {
        FUNC_4("Arial is not installed\n");
        return;
    }

    for (VAR_5 = 0; VAR_5 < sizeof(VAR_4)/sizeof(VAR_4[0]); VAR_5++)
    {
        if (VAR_4[VAR_5].charset == 128)
        {
            if (!FUNC_1("Symbol") && !FUNC_1("Wingdings"))
            {
                FUNC_4("Symbol or Wingdings is not installed\n");
                break;
            }
        }
        if (FUNC_0(VAR_4[VAR_5].charset, VAR_4[VAR_5].code_page, VAR_4[VAR_5].font_idxA, 128, VAR_0) &&
            FUNC_0(VAR_4[VAR_5].charset, VAR_4[VAR_5].code_page, VAR_4[VAR_5].font_idxW, 128, VAR_1))
            FUNC_3(!FUNC_2(VAR_4[VAR_5].font_idxA, VAR_4[VAR_5].font_idxW, 128*sizeof(WORD)), "%d: indices don't match\n", VAR_5);
    }

    FUNC_3(FUNC_2(VAR_4[0].font_idxW, VAR_4[1].font_idxW, 128*sizeof(WORD)), "0 vs 1: indices shouldn't match\n");
    if (VAR_5 > 2)
    {
        FUNC_3(FUNC_2(VAR_4[0].font_idxW, VAR_4[2].font_idxW, 128*sizeof(WORD)), "0 vs 2: indices shouldn't match\n");
        FUNC_3(FUNC_2(VAR_4[1].font_idxW, VAR_4[2].font_idxW, 128*sizeof(WORD)), "1 vs 2: indices shouldn't match\n");
    }
    else
        FUNC_4("Symbol or Wingdings is not installed\n");
}
