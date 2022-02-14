
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void** obj; scalar_t__ count; } ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_List ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

HPDF_STATUS
FUNC_2 (HPDF_List VAR_2,
                   void *VAR_3)
{
    HPDF_UINT VAR_4;
    void **VAR_5 = VAR_2->obj;

    FUNC_1((" HPDF_List_Remove\n"));

    for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++) {
        if (*VAR_5 == VAR_3) {
            FUNC_0(VAR_2, VAR_4);
            return VAR_1;
        } else
            VAR_5++;
    }

    return VAR_0;
}
