
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* top; void* right; void* bottom; void* left; } ;
typedef void* HPDF_INT16 ;
typedef TYPE_1__ HPDF_Box ;



HPDF_Box
FUNC_0 (HPDF_INT16 VAR_0,
             HPDF_INT16 VAR_1,
             HPDF_INT16 VAR_2,
             HPDF_INT16 VAR_3)
{
    HPDF_Box VAR_4;

    VAR_4.left = VAR_0;
    VAR_4.bottom = VAR_1;
    VAR_4.right = VAR_2;
    VAR_4.top = VAR_3;

    return VAR_4;
}
