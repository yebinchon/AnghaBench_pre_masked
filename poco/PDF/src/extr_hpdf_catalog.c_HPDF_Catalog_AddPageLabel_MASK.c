
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* error; int mmgr; } ;
struct TYPE_16__ {int error_no; } ;
typedef int HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_Dict ;
typedef TYPE_2__* HPDF_Catalog ;
typedef TYPE_2__* HPDF_Array ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,TYPE_2__*) ;
 TYPE_2__* FUNC_4 (TYPE_2__*,char*,int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*) ;

HPDF_STATUS
FUNC_7 (HPDF_Catalog VAR_3,
                            HPDF_UINT VAR_4,
                            HPDF_Dict VAR_5)
{
    HPDF_STATUS VAR_6;
    HPDF_Array VAR_7;
    HPDF_Dict VAR_8 = FUNC_4 (VAR_3, "PageLabels",
        VAR_1);

    FUNC_6 ((" HPDF_Catalog_AddPageLabel\n"));

    if (!VAR_8) {
        VAR_8 = FUNC_5 (VAR_3->mmgr);

        if (!VAR_8)
            return VAR_3->error->error_no;

        if ((VAR_6 = FUNC_3 (VAR_3, "PageLabels", VAR_8)) != VAR_2)
            return VAR_6;
    }

    VAR_7 = FUNC_4 (VAR_8, "Nums", VAR_0);

    if (!VAR_7) {
        VAR_7 = FUNC_2 (VAR_3->mmgr);

        if (!VAR_7)
            return VAR_3->error->error_no;

        if ((VAR_6 = FUNC_3 (VAR_8, "Nums", VAR_7)) != VAR_2)
            return VAR_6;
    }

    if ((VAR_6 = FUNC_1 (VAR_7, VAR_4)) != VAR_2)
        return VAR_6;

    return FUNC_0 (VAR_7, VAR_5);
}
