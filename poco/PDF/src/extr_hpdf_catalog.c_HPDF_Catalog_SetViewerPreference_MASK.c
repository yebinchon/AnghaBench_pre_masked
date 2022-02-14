
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* error; int mmgr; } ;
struct TYPE_11__ {scalar_t__ error_no; } ;
typedef int HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Dict ;
typedef TYPE_2__* HPDF_Catalog ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,char*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,char*) ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*) ;
 int VAR_8 ;

HPDF_STATUS
FUNC_6 (HPDF_Catalog VAR_9,
                                   HPDF_UINT VAR_10)
{
    HPDF_STATUS VAR_11;
    HPDF_Dict VAR_12;

    FUNC_5 ((" HPDF_Catalog_SetViewerPreference\n"));

    if (!VAR_10) {
        VAR_11 = FUNC_4 (VAR_9, "ViewerPreferences");

        if (VAR_11 == VAR_1)
            VAR_11 = VAR_6;

        return VAR_11;
    }

    VAR_12 = FUNC_3 (VAR_9->mmgr);
    if (!VAR_12)
        return VAR_9->error->error_no;

    if ((VAR_11 = FUNC_0 (VAR_9, "ViewerPreferences", VAR_12))
            != VAR_6)
        return VAR_11;



    if (VAR_10 & VAR_4) {
        if ((VAR_11 = FUNC_1 (VAR_12, "HideToolbar",
                VAR_8)) != VAR_6)
            return VAR_11;
    } else {
        if ((VAR_11 = FUNC_4 (VAR_12, "HideToolbar")) !=
                VAR_6)
            if (VAR_11 != VAR_1)
                return VAR_11;
    }

    if (VAR_10 & VAR_3) {
        if ((VAR_11 = FUNC_1 (VAR_12, "HideMenubar",
                VAR_8)) != VAR_6)
            return VAR_11;
    } else {
        if ((VAR_11 = FUNC_4 (VAR_12, "HideMenubar")) !=
                VAR_6)
            if (VAR_11 != VAR_1)
                return VAR_11;
    }

    if (VAR_10 & VAR_5) {
        if ((VAR_11 = FUNC_1 (VAR_12, "HideWindowUI",
                VAR_8)) != VAR_6)
            return VAR_11;
    } else {
        if ((VAR_11 = FUNC_4 (VAR_12, "HideWindowUI")) !=
                VAR_6)
            if (VAR_11 != VAR_1)
                return VAR_11;
    }

    if (VAR_10 & VAR_2) {
        if ((VAR_11 = FUNC_1 (VAR_12, "FitWindow",
                VAR_8)) != VAR_6)
            return VAR_11;
    } else {
        if ((VAR_11 = FUNC_4 (VAR_12, "FitWindow")) !=
                VAR_6)
            if (VAR_11 != VAR_1)
                return VAR_11;
    }

    if (VAR_10 & VAR_0) {
        if ((VAR_11 = FUNC_1 (VAR_12, "CenterWindow",
                VAR_8)) != VAR_6)
            return VAR_11;
    } else {
        if ((VAR_11 = FUNC_4 (VAR_12, "CenterWindow")) !=
                VAR_6)
            if (VAR_11 != VAR_1)
                return VAR_11;
    }

    if (VAR_10 & VAR_7) {
        if ((VAR_11 = FUNC_2 (VAR_12, "PrintScaling",
                "None")) != VAR_6)
            return VAR_11;
    } else {
        if ((VAR_11 = FUNC_4 (VAR_12, "PrintScaling")) !=
                VAR_6)
            if (VAR_11 != VAR_1)
                return VAR_11;
    }

    return VAR_6;
}
