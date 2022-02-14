
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mmgr; int error; } ;
typedef int HPDF_STATUS ;
typedef scalar_t__ HPDF_InfoType ;
typedef int HPDF_Encoder ;
typedef TYPE_1__* HPDF_Dict ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;
 int FUNC_1 (TYPE_1__*,char const*,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char const*,int ) ;
 char* FUNC_5 (scalar_t__) ;

HPDF_STATUS
FUNC_6 (HPDF_Dict VAR_3,
                       HPDF_InfoType VAR_4,
                       const char *VAR_5,
                       HPDF_Encoder VAR_6)
{
    const char* VAR_7 = FUNC_5 (VAR_4);

    FUNC_2((" HPDF_Info_SetInfoAttr\n"));

    if (VAR_4 <= VAR_0)
        return FUNC_3 (VAR_3->error, VAR_2, 0);

    if (VAR_4 == VAR_1)
        return FUNC_1(VAR_3, VAR_7, VAR_5);

    return FUNC_0 (VAR_3, VAR_7, FUNC_4 (VAR_3->mmgr, VAR_5,
            VAR_6));
}
