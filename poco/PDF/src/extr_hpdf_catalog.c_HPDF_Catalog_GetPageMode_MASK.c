
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
typedef size_t HPDF_UINT ;
typedef int HPDF_PageMode ;
typedef TYPE_1__* HPDF_Name ;
typedef int HPDF_Catalog ;


 scalar_t__ FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

HPDF_PageMode
FUNC_2 (HPDF_Catalog VAR_3)
{
    HPDF_Name VAR_4;
    HPDF_UINT VAR_5 = 0;

    VAR_4 = (HPDF_Name)FUNC_0 (VAR_3, "PageMode", VAR_0);
    if (!VAR_4)
        return VAR_2;

    while (VAR_1[VAR_5]) {
        if (FUNC_1 (VAR_4->value, VAR_1[VAR_5]) == 0)
            return (HPDF_PageMode)VAR_5;
        VAR_5++;
    }

    return VAR_2;
}
