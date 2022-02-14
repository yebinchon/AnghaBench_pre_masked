
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HPDF_UNICODE ;
typedef int HPDF_INT16 ;
typedef int HPDF_FontDef ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;

HPDF_INT16
FUNC_3 (HPDF_FontDef VAR_0,
                                   const char* VAR_1)
{
    HPDF_UNICODE VAR_2 = FUNC_0 (VAR_1);

    FUNC_1 ((" HPDF_Type1FontDef_GetWidthByName\n"));

    return FUNC_2 (VAR_0, VAR_2);
}
