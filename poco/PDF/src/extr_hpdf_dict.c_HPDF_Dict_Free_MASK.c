
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ count; } ;
struct TYPE_9__ {scalar_t__ obj_class; } ;
struct TYPE_10__ {int mmgr; TYPE_1__ header; TYPE_5__* list; scalar_t__ stream; int value; int (* free_fn ) (TYPE_2__*) ;} ;
typedef scalar_t__ HPDF_UINT ;
typedef TYPE_2__* HPDF_DictElement ;
typedef TYPE_2__* HPDF_Dict ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6 (HPDF_Dict VAR_0)
{
    HPDF_UINT VAR_1;

    if (!VAR_0)
        return;

    if (VAR_0->free_fn)
        VAR_0->free_fn (VAR_0);

    for (VAR_1 = 0; VAR_1 < VAR_0->list->count; VAR_1++) {
        HPDF_DictElement VAR_2 =
                (HPDF_DictElement)FUNC_2 (VAR_0->list, VAR_1);

        if (VAR_2) {
            FUNC_3 (VAR_0->mmgr, VAR_2->value);
            FUNC_0 (VAR_0->mmgr, VAR_2);
        }
    }

    if (VAR_0->stream)
        FUNC_4 (VAR_0->stream);

    FUNC_1 (VAR_0->list);

    VAR_0->header.obj_class = 0;

    FUNC_0 (VAR_0->mmgr, VAR_0);
}
