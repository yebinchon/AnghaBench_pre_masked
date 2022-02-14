
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sig_bytes; } ;
typedef TYPE_1__* HPDF_FontDef ;
typedef int HPDF_BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;

HPDF_BOOL
FUNC_1 (HPDF_FontDef VAR_3)
{
    FUNC_0 ((" HPDF_FontDef_Validate\n"));

    if (!VAR_3 || VAR_3->sig_bytes != VAR_1)
        return VAR_0;
    else
        return VAR_2;
}
