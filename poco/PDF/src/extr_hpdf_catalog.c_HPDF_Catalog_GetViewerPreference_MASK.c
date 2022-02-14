
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; } ;
typedef int HPDF_UINT ;
typedef scalar_t__ HPDF_Dict ;
typedef scalar_t__ HPDF_Catalog ;
typedef TYPE_1__* HPDF_Boolean ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;

HPDF_UINT
FUNC_2 (HPDF_Catalog VAR_7)
{
    HPDF_Dict VAR_8;
    HPDF_UINT VAR_9 = 0;
    HPDF_Boolean VAR_10;

    FUNC_1 ((" HPDF_Catalog_GetViewerPreference\n"));

    VAR_8 = (HPDF_Dict)FUNC_0 (VAR_7, "ViewerPreferences",
            VAR_6);

    if (!VAR_8)
        return 0;

    VAR_10 = (HPDF_Boolean)FUNC_0 (VAR_8, "HideToolbar",
            VAR_5);
    if (VAR_10) {
        if (VAR_10->value)
            VAR_9 += VAR_3;
    }

    VAR_10 = (HPDF_Boolean)FUNC_0 (VAR_8, "HideMenubar",
            VAR_5);
    if (VAR_10) {
        if (VAR_10->value)
            VAR_9 += VAR_2;
    }

    VAR_10 = (HPDF_Boolean)FUNC_0 (VAR_8, "HideWindowUI",
            VAR_5);
    if (VAR_10) {
        if (VAR_10->value)
            VAR_9 += VAR_4;
    }

    VAR_10 = (HPDF_Boolean)FUNC_0 (VAR_8, "FitWindow",
            VAR_5);
    if (VAR_10) {
        if (VAR_10->value)
            VAR_9 += VAR_1;
    }

    VAR_10 = (HPDF_Boolean)FUNC_0 (VAR_8, "CenterWindow",
            VAR_5);
    if (VAR_10) {
        if (VAR_10->value)
            VAR_9 += VAR_0;
    }

    return VAR_9;
}
