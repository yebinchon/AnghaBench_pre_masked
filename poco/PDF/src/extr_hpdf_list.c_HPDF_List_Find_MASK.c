
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t count; void** obj; } ;
typedef size_t HPDF_UINT ;
typedef TYPE_1__* HPDF_List ;
typedef size_t HPDF_INT32 ;


 int FUNC_0 (char*) ;

HPDF_INT32
FUNC_1 (HPDF_List VAR_0,
                 void *VAR_1)
{
    HPDF_UINT VAR_2;

    FUNC_0((" HPDF_List_Find\n"));

    for (VAR_2 = 0; VAR_2 < VAR_0->count; VAR_2++) {
        if (VAR_0->obj[VAR_2] == VAR_1)
            return VAR_2;
    }

    return -1;
}
