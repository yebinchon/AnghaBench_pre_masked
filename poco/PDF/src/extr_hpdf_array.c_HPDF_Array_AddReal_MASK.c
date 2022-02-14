
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; int mmgr; } ;
typedef int HPDF_STATUS ;
typedef int HPDF_Real ;
typedef int HPDF_REAL ;
typedef TYPE_1__* HPDF_Array ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;

HPDF_STATUS
FUNC_4 (HPDF_Array VAR_0,
                     HPDF_REAL VAR_1)
{
    HPDF_Real VAR_2 = FUNC_3 (VAR_0->mmgr, VAR_1);

    FUNC_2((" HPDF_Array_AddReal\n"));

    if (!VAR_2)
        return FUNC_1 (VAR_0->error);
    else
        return FUNC_0 (VAR_0, VAR_2);
}
