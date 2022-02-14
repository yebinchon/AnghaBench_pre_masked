
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ count; } ;
struct TYPE_4__ {TYPE_2__* list; } ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_Stream ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_Encrypt ;
typedef TYPE_1__* HPDF_Array ;


 void* FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char) ;
 scalar_t__ FUNC_4 (int ,char*) ;

HPDF_STATUS
FUNC_5 (HPDF_Array VAR_1,
                   HPDF_Stream VAR_2,
                   HPDF_Encrypt VAR_3)
{
    HPDF_UINT VAR_4;
    HPDF_STATUS VAR_5;

    FUNC_2((" HPDF_Array_Write\n"));

    VAR_5 = FUNC_4 (VAR_2, "[ ");
    if (VAR_5 != VAR_0)
        return VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_1->list->count; VAR_4++) {
        void * VAR_6 = FUNC_0 (VAR_1->list, VAR_4);

        VAR_5 = FUNC_1 (VAR_6, VAR_2, VAR_3);
        if (VAR_5 != VAR_0)
            return VAR_5;

        VAR_5 = FUNC_3 (VAR_2, ' ');
        if (VAR_5 != VAR_0)
            return VAR_5;
    }

    VAR_5 = FUNC_3 (VAR_2, ']');

    return VAR_5;
}
