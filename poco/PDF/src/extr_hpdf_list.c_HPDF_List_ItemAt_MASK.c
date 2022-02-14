
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t count; void** obj; } ;
typedef size_t HPDF_UINT ;
typedef TYPE_1__* HPDF_List ;


 int FUNC_0 (char*) ;

void*
FUNC_1 (HPDF_List VAR_0,
                   HPDF_UINT VAR_1)
{
    FUNC_0((" HPDF_List_ItemAt\n"));

    return (VAR_0->count <= VAR_1) ? ((void*)0) : VAR_0->obj[VAR_1];
}
