
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ count; } ;
struct TYPE_9__ {int mmgr; TYPE_3__* list; } ;
struct TYPE_8__ {int value; int key; } ;
typedef scalar_t__ HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_DictElement ;
typedef TYPE_2__* HPDF_Dict ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (char const*,int ) ;

HPDF_STATUS
FUNC_5 (HPDF_Dict VAR_2,
                          const char *VAR_3)
{
    HPDF_UINT VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->list->count; VAR_4++) {
        HPDF_DictElement VAR_5 =
                (HPDF_DictElement)FUNC_1 (VAR_2->list, VAR_4);

        if (FUNC_4 (VAR_3, VAR_5->key) == 0) {
            FUNC_2 (VAR_2->list, VAR_5);

            FUNC_3 (VAR_2->mmgr, VAR_5->value);
            FUNC_0 (VAR_2->mmgr, VAR_5);

            return VAR_1;
        }
    }

    return VAR_0;
}
