
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* detail_no; void* error_no; } ;
typedef int HPDF_UINT ;
typedef void* HPDF_STATUS ;
typedef TYPE_1__* HPDF_Error ;


 int FUNC_0 (char*) ;

HPDF_STATUS
FUNC_1 (HPDF_Error VAR_0,
                HPDF_STATUS VAR_1,
                HPDF_STATUS VAR_2)
{
    FUNC_0((" HPDF_SetError: error_no=0x%04X "
            "detail_no=0x%04X\n", (HPDF_UINT)VAR_1, (HPDF_UINT)VAR_2));

    VAR_0->error_no = VAR_1;
    VAR_0->detail_no = VAR_2;

    return VAR_1;
}
