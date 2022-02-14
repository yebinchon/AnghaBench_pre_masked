
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int stream; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_1__* HPDF_Number ;
typedef int HPDF_MMgr ;
typedef TYPE_1__* HPDF_Dict ;


 scalar_t__ FUNC_0 (TYPE_1__*,char*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;

HPDF_Dict
FUNC_5 (HPDF_MMgr VAR_2,
                      HPDF_Xref VAR_3)
{
    HPDF_Dict VAR_4;
    HPDF_Number VAR_5;
    HPDF_STATUS VAR_6 = 0;

    VAR_4 = FUNC_1 (VAR_2);
    if (!VAR_4)
        return ((void*)0);


    VAR_6 += FUNC_4 (VAR_3, VAR_4);
    if (VAR_6 != VAR_0)
        return ((void*)0);

    VAR_5 = FUNC_3 (VAR_2, 0);
    if (!VAR_5)
        return ((void*)0);

    VAR_6 = FUNC_4 (VAR_3, VAR_5);
    if (VAR_6 != VAR_0)
        return ((void*)0);

    VAR_6 = FUNC_0 (VAR_4, "Length", VAR_5);
    if (VAR_6 != VAR_0)
        return ((void*)0);

    VAR_4->stream = FUNC_2 (VAR_2, VAR_1);
    if (!VAR_4->stream)
        return ((void*)0);

    return VAR_4;
}
