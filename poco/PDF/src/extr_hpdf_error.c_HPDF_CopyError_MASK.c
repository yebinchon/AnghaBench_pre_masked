
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_data; int error_fn; int detail_no; int error_no; } ;
typedef TYPE_1__* HPDF_Error ;



void
FUNC_0 (HPDF_Error VAR_0,
                 HPDF_Error VAR_1)
{
    VAR_0->error_no = VAR_1->error_no;
    VAR_0->detail_no = VAR_1->detail_no;
    VAR_0->error_fn = VAR_1->error_fn;
    VAR_0->user_data = VAR_1->user_data;
}
