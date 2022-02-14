
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; } ;
typedef TYPE_1__* HPDF_String ;
typedef int HPDF_InfoType ;
typedef int HPDF_Dict ;


 TYPE_1__* FUNC_0 (int ,char const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;

const char*
FUNC_3 (HPDF_Dict VAR_1,
                       HPDF_InfoType VAR_2)
{
    const char* VAR_3 = FUNC_2 (VAR_2);
    HPDF_String VAR_4;

    FUNC_1((" HPDF_Info_GetInfoAttr\n"));

    if (!VAR_1)
        return ((void*)0);

    VAR_4 = FUNC_0 (VAR_1, VAR_3, VAR_0);

    if (!VAR_4)
        return ((void*)0);
    else
        return (const char *)(VAR_4->value);
}
