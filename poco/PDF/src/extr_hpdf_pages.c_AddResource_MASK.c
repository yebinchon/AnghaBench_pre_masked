
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int error; int mmgr; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__* HPDF_Page ;
typedef TYPE_1__* HPDF_Dict ;
typedef TYPE_1__* HPDF_Array ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (char*) ;

HPDF_STATUS
FUNC_7 (HPDF_Page VAR_1)
{
    HPDF_STATUS VAR_2 = VAR_0;
    HPDF_Dict VAR_3;
    HPDF_Array VAR_4;

    FUNC_6((" HPDF_Page_AddResource\n"));

    VAR_3 = FUNC_3 (VAR_1->mmgr);
    if (!VAR_3)
        return FUNC_4 (VAR_1->error);





    VAR_2 += FUNC_2 (VAR_1, "Resources", VAR_3);

    VAR_4 = FUNC_1 (VAR_1->mmgr);
    if (!VAR_4)
        return FUNC_4 (VAR_1->error);

    if (FUNC_2 (VAR_3, "ProcSet", VAR_4) != VAR_0)
        return FUNC_4 (VAR_3->error);

    VAR_2 += FUNC_0 (VAR_4, FUNC_5 (VAR_1->mmgr, "PDF"));
    VAR_2 += FUNC_0 (VAR_4, FUNC_5 (VAR_1->mmgr, "Text"));
    VAR_2 += FUNC_0 (VAR_4, FUNC_5 (VAR_1->mmgr, "ImageB"));
    VAR_2 += FUNC_0 (VAR_4, FUNC_5 (VAR_1->mmgr, "ImageC"));
    VAR_2 += FUNC_0 (VAR_4, FUNC_5 (VAR_1->mmgr, "ImageI"));

    if (VAR_2 != VAR_0)
       return FUNC_4 (VAR_4->error);

    return VAR_0;
}
