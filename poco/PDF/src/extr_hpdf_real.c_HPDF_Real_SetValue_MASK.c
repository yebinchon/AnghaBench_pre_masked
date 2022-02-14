
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; int error; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Real ;
typedef scalar_t__ HPDF_REAL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

HPDF_STATUS
FUNC_1 (HPDF_Real VAR_4,
                     HPDF_REAL VAR_5)
{
    HPDF_STATUS VAR_6 = VAR_2;

    if (VAR_5 > VAR_0)
        return FUNC_0 (VAR_4->error, VAR_3, 0);

    if (VAR_5 < VAR_1)
        return FUNC_0 (VAR_4->error, VAR_3, 0);

    VAR_4->value =VAR_5;

    return VAR_6;
}
