
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
typedef int HPDF_Outline ;
typedef TYPE_1__* HPDF_Number ;
typedef int HPDF_BOOL ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

HPDF_BOOL
FUNC_2 (HPDF_Outline VAR_2)
{
    HPDF_Number VAR_3 = (HPDF_Number)FUNC_0 (VAR_2, "_OPENED",
                        VAR_1);

    FUNC_1((" HPDF_Outline_GetOpened\n"));

    if (!VAR_3)
        return VAR_0;

    return (HPDF_BOOL)VAR_3->value;
}
