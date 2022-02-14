
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ count; } ;
struct TYPE_7__ {TYPE_3__* list; } ;
struct TYPE_6__ {int key; } ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_1__* HPDF_DictElement ;
typedef TYPE_2__* HPDF_Dict ;


 int FUNC_0 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,int ) ;

HPDF_DictElement
FUNC_2 (HPDF_Dict VAR_0,
             const char *VAR_1)
{
    HPDF_UINT VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->list->count; VAR_2++) {
        HPDF_DictElement VAR_3 =
                (HPDF_DictElement)FUNC_0 (VAR_0->list, VAR_2);

        if (FUNC_1 (VAR_1, VAR_3->key) == 0)
            return VAR_3;
    }

    return ((void*)0);
}
