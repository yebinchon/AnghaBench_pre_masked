
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int def_encoder; int mmgr; int error; } ;
typedef int HPDF_STATUS ;
typedef int HPDF_PageNumStyle ;
typedef int HPDF_INT ;
typedef TYPE_1__* HPDF_Doc ;
typedef int * HPDF_Dict ;


 scalar_t__ FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;



 int VAR_1 ;


 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,char const*,int ) ;

HPDF_Dict
FUNC_8 (HPDF_Doc VAR_2,
                     HPDF_PageNumStyle VAR_3,
                     HPDF_INT VAR_4,
                     const char *VAR_5)
{
    HPDF_Dict VAR_6 = FUNC_4 (VAR_2->mmgr);

    FUNC_5 ((" HPDF_PageLabel_New\n"));

    if (!VAR_6)
        return ((void*)0);

    switch (VAR_3) {
        case 132:
            if (FUNC_1 (VAR_6, "S", "D") != VAR_0)
                goto Fail;
            break;
        case 128:
            if (FUNC_1 (VAR_6, "S", "R") != VAR_0)
                goto Fail;
            break;
        case 130:
            if (FUNC_1 (VAR_6, "S", "r") != VAR_0)
                goto Fail;
            break;
        case 129:
            if (FUNC_1 (VAR_6, "S", "A") != VAR_0)
                goto Fail;
            break;
        case 131:
            if (FUNC_1 (VAR_6, "S", "a") != VAR_0)
                goto Fail;
            break;
        default:
            FUNC_6 (&VAR_2->error, VAR_1,
                    (HPDF_STATUS)VAR_3);
            goto Fail;
    }

    if (VAR_5 && VAR_5[0] != 0)
        if (FUNC_0 (VAR_6, "P", FUNC_7 (VAR_2->mmgr, VAR_5,
                    VAR_2->def_encoder)) != VAR_0)
            goto Fail;

    if (VAR_4 != 0)
        if (FUNC_2 (VAR_6, "St", VAR_4) != VAR_0)
            goto Fail;

    return VAR_6;

Fail:
    FUNC_3 (VAR_6);
    return ((void*)0);
}
