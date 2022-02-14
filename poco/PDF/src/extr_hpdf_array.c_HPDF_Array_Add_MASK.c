
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ count; } ;
struct TYPE_11__ {int mmgr; TYPE_6__* list; int error; } ;
struct TYPE_10__ {int obj_id; } ;
struct TYPE_8__ {int obj_id; } ;
struct TYPE_9__ {TYPE_1__ header; } ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Proxy ;
typedef TYPE_3__ HPDF_Obj_Header ;
typedef TYPE_4__* HPDF_Array ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_6__*,void*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (int ,void*) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ) ;

HPDF_STATUS
FUNC_6 (HPDF_Array VAR_6,
                 void *VAR_7)
{
    HPDF_Obj_Header *VAR_8;
    HPDF_STATUS VAR_9;

    FUNC_3((" HPDF_Array_Add\n"));

    if (!VAR_7) {
        if (FUNC_0 (VAR_6->error) == VAR_3)
            return FUNC_5 (VAR_6->error, VAR_1, 0);
        else
            return VAR_1;
    }

    VAR_8 = (HPDF_Obj_Header *)VAR_7;

    if (VAR_8->obj_id & VAR_4)
        return FUNC_5 (VAR_6->error, VAR_1, 0);

    if (VAR_6->list->count >= VAR_2) {
        FUNC_3((" HPDF_Array_Add exceed limitatin of array count(%d)\n",
                    VAR_2));

        FUNC_2 (VAR_6->mmgr, VAR_7);
        return FUNC_5 (VAR_6->error, VAR_0, 0);
    }

    if (VAR_8->obj_id & VAR_5) {
        HPDF_Proxy VAR_10 = FUNC_4 (VAR_6->mmgr, VAR_7);

        if (!VAR_10) {
            FUNC_2 (VAR_6->mmgr, VAR_7);
            return FUNC_0 (VAR_6->error);
        }

        VAR_10->header.obj_id |= VAR_4;
        VAR_7 = VAR_10;
    } else
        VAR_8->obj_id |= VAR_4;

    VAR_9 = FUNC_1 (VAR_6->list, VAR_7);
    if (VAR_9 != VAR_3)
        FUNC_2 (VAR_6->mmgr, VAR_7);

    return VAR_9;
}
