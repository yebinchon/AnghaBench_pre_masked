
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int valid; int type; } ;
typedef int HPDF_MMgr ;
typedef TYPE_1__* HPDF_FontDef ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int ) ;

HPDF_FontDef
FUNC_2 (HPDF_MMgr VAR_0,
                              HPDF_FontDef VAR_1)
{
    HPDF_FontDef VAR_2 = FUNC_1 (VAR_0);

    FUNC_0 ((" HPDF_Type1FontDef_Duplicate\n"));

    VAR_2->type = VAR_1->type;
    VAR_2->valid = VAR_1->valid;



    return ((void*)0);
}
