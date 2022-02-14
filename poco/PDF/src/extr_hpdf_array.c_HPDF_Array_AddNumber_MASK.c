
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; int mmgr; } ;
typedef int HPDF_STATUS ;
typedef int HPDF_Number ;
typedef int HPDF_INT32 ;
typedef TYPE_1__* HPDF_Array ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

HPDF_STATUS
FUNC_4 (HPDF_Array VAR_0,
                       HPDF_INT32 VAR_1)
{
    HPDF_Number VAR_2 = FUNC_2 (VAR_0->mmgr, VAR_1);

    FUNC_3((" HPDF_Array_AddNumber\n"));

    if (!VAR_2)
        return FUNC_1 (VAR_0->error);
    else
        return FUNC_0 (VAR_0, VAR_2);
}
