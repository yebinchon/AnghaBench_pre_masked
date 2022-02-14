
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; } ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Boolean ;


 int FUNC_0 (int ,char*) ;

HPDF_STATUS
FUNC_1 (HPDF_Boolean VAR_0,
                     HPDF_Stream VAR_1)
{
    HPDF_STATUS VAR_2;

    if (VAR_0->value)
        VAR_2 = FUNC_0 (VAR_1, "true");
    else
        VAR_2 = FUNC_0 (VAR_1, "false");

    return VAR_2;
}
