
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int error; int mmgr; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__* HPDF_Page ;
typedef TYPE_1__* HPDF_Array ;
typedef TYPE_1__* HPDF_Annotation ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static HPDF_STATUS
FUNC_6 (HPDF_Page VAR_2,
                HPDF_Annotation VAR_3)
{
    HPDF_Array VAR_4;
    HPDF_STATUS VAR_5 = VAR_1;

    FUNC_5((" HPDF_Pages\n"));


    VAR_4 = FUNC_3 (VAR_2, "Annots", VAR_0);

    if (!VAR_4) {
        VAR_4 = FUNC_1 (VAR_2->mmgr);
        if (!VAR_4)
            return FUNC_4 (VAR_2->error);

        VAR_5 = FUNC_2 (VAR_2, "Annots", VAR_4);
        if (VAR_5 != VAR_1)
            return VAR_5;
    }

    if ((VAR_5 = FUNC_0 (VAR_4, VAR_3)) != VAR_1)
       return VAR_5;


    VAR_5 = FUNC_2( VAR_3, "P", VAR_2);

    return VAR_5;
}
