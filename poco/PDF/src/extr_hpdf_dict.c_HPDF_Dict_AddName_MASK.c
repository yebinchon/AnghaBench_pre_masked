
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int error; int mmgr; } ;
typedef int HPDF_STATUS ;
typedef int HPDF_Name ;
typedef TYPE_1__* HPDF_Dict ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*) ;

HPDF_STATUS
FUNC_3 (HPDF_Dict VAR_0,
                   const char *VAR_1,
                   const char *VAR_2)
{
    HPDF_Name VAR_3 = FUNC_2 (VAR_0->mmgr, VAR_2);
    if (!VAR_3)
        return FUNC_1 (VAR_0->error);

    return FUNC_0 (VAR_0, VAR_1, VAR_3);
}
