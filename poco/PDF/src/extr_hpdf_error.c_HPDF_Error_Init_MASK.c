
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* user_data; } ;
typedef int HPDF_Error_Rec ;
typedef TYPE_1__* HPDF_Error ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void
FUNC_1 (HPDF_Error VAR_0,
                  void *VAR_1)
{
    FUNC_0(VAR_0, 0, sizeof(HPDF_Error_Rec));

    VAR_0->user_data = VAR_1;
}
