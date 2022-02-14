
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; int * catalog; int mmgr; int xref; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__* HPDF_Doc ;
typedef int * HPDF_Dict ;
typedef int * HPDF_Array ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,char*,int ) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_10 (int ,char const*,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

HPDF_STATUS
FUNC_12(HPDF_Doc VAR_3, const char *VAR_4, HPDF_Dict VAR_5)
{
    HPDF_Array VAR_6;
    HPDF_Dict VAR_7;
    HPDF_STATUS VAR_8;
    if (!FUNC_9 (VAR_3))
        return VAR_0;


    VAR_7 = FUNC_7 (VAR_3->mmgr);
    VAR_8 = FUNC_11 (VAR_3->xref, VAR_7);
    if ( VAR_8 != VAR_2) {
        FUNC_5(VAR_7);
        return VAR_8;
    }
    VAR_8 += FUNC_4 (VAR_7, "Type", "OutputIntent");
    VAR_8 += FUNC_4 (VAR_7, "S", "GTS_PDFA1");
    VAR_8 += FUNC_3 (VAR_7, "OutputConditionIdentifier", FUNC_10 (VAR_3->mmgr, VAR_4, ((void*)0)));
    VAR_8 += FUNC_3 (VAR_7, "OutputCondition", FUNC_10 (VAR_3->mmgr, VAR_4,((void*)0)));
    VAR_8 += FUNC_3 (VAR_7, "Info", FUNC_10 (VAR_3->mmgr, VAR_4, ((void*)0)));
    VAR_8 += FUNC_3 (VAR_7, "DestOutputProfile ", VAR_5);
    if ( VAR_8 != VAR_2) {
        FUNC_5(VAR_7);
        return VAR_8;
    }


    VAR_6 = FUNC_6 (VAR_3->catalog, "OutputIntents", VAR_1);
    if (VAR_6 == ((void*)0)) {
        VAR_6 = FUNC_1 (VAR_3->mmgr);
        if (VAR_6) {
            HPDF_STATUS VAR_9 = FUNC_3 (VAR_3->catalog, "OutputIntents", VAR_6);
            if (VAR_9 != VAR_2) {
                FUNC_2 (&VAR_3->error);
                return FUNC_8 (&VAR_3->error);
            }
        }
    }

    FUNC_0(VAR_6,VAR_7);
    return FUNC_8 (&VAR_3->error);
}
