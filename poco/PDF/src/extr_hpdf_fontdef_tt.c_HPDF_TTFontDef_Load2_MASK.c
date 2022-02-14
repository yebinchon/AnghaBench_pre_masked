
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef int * HPDF_FontDef ;
typedef int HPDF_BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;

HPDF_FontDef
FUNC_5 (HPDF_MMgr VAR_1,
                       HPDF_Stream VAR_2,
                       HPDF_UINT VAR_3,
                       HPDF_BOOL VAR_4)
{
    HPDF_STATUS VAR_5;
    HPDF_FontDef VAR_6;

    FUNC_1 ((" HPDF_TTFontDef_Load\n"));

    VAR_6 = FUNC_3 (VAR_1);

    if (!VAR_6) {
        FUNC_2 (VAR_2);
        return ((void*)0);
    }

    VAR_5 = FUNC_4 (VAR_6, VAR_2, VAR_3, VAR_4);
    if (VAR_5 != VAR_0) {
        FUNC_0 (VAR_6);
        return ((void*)0);
    }

    return VAR_6;
}
