
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int error; int mmgr; } ;
struct TYPE_9__ {int value; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Number ;
typedef TYPE_2__* HPDF_Dict ;
typedef int HPDF_Array ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ) ;

HPDF_STATUS
FUNC_7 (HPDF_Dict VAR_4)
{
    HPDF_Array VAR_5 = (HPDF_Array )FUNC_2 (VAR_4, "Kids",
                    VAR_0);
    HPDF_Number VAR_6 = (HPDF_Number)FUNC_2 (VAR_4, "Count",
                    VAR_1);
    HPDF_STATUS VAR_7;

    FUNC_5((" HPDF_Pages_BeforeWrite\n"));

    if (!VAR_5)
        return FUNC_6 (VAR_4->error, VAR_3, 0);

    if (VAR_6)
        VAR_6->value = FUNC_0 (VAR_4);
    else {
        VAR_6 = FUNC_4 (VAR_4->mmgr, FUNC_0 (VAR_4));
        if (!VAR_6)
            return FUNC_3 (VAR_4->error);

        if ((VAR_7 = FUNC_1 (VAR_4, "Count", VAR_6)) != VAR_2)
            return VAR_7;
    }

    return VAR_2;
}
