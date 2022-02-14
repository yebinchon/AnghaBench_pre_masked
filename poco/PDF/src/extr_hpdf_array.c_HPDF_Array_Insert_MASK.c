
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ count; } ;
struct TYPE_12__ {int mmgr; TYPE_6__* list; int error; } ;
struct TYPE_11__ {int obj_id; scalar_t__ obj_class; } ;
struct TYPE_9__ {int obj_id; } ;
struct TYPE_10__ {void* obj; TYPE_1__ header; } ;
typedef scalar_t__ HPDF_UINT ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Proxy ;
typedef TYPE_3__ HPDF_Obj_Header ;
typedef TYPE_4__* HPDF_Array ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_6__*,void*,void*) ;
 void* FUNC_2 (TYPE_6__*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (char*) ;
 TYPE_2__* FUNC_5 (int ,void*) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int ) ;

HPDF_STATUS
FUNC_7 (HPDF_Array VAR_8,
                    void *VAR_9,
                    void *VAR_10)
{
    HPDF_Obj_Header *VAR_11;
    HPDF_STATUS VAR_12;
    HPDF_UINT VAR_13;

    FUNC_4((" HPDF_Array_Insert\n"));

    if (!VAR_10) {
        if (FUNC_0 (VAR_8->error) == VAR_5)
            return FUNC_6 (VAR_8->error, VAR_1, 0);
        else
            return VAR_1;
    }

    VAR_11 = (HPDF_Obj_Header *)VAR_10;

    if (VAR_11->obj_id & VAR_6) {
        FUNC_4((" HPDF_Array_Add this object cannot owned by array "
                "obj=0x%08X\n", (HPDF_UINT)VAR_8));

        return FUNC_6 (VAR_8->error, VAR_1, 0);
    }

    if (VAR_8->list->count >= VAR_3) {
        FUNC_4((" HPDF_Array_Add exceed limitatin of array count(%d)\n",
                    VAR_3));

        FUNC_3 (VAR_8->mmgr, VAR_10);

        return FUNC_6 (VAR_8->error, VAR_0, 0);
    }

    if (VAR_11->obj_id & VAR_7) {
        HPDF_Proxy VAR_14 = FUNC_5 (VAR_8->mmgr, VAR_10);

        if (!VAR_14) {
            FUNC_3 (VAR_8->mmgr, VAR_10);
            return FUNC_0 (VAR_8->error);
        }

        VAR_14->header.obj_id |= VAR_6;
        VAR_10 = VAR_14;
    } else
        VAR_11->obj_id |= VAR_6;




    for (VAR_13 = 0; VAR_13 < VAR_8->list->count; VAR_13++) {
        void *VAR_15 = FUNC_2 (VAR_8->list, VAR_13);
        void *VAR_16;

        VAR_11 = (HPDF_Obj_Header *)VAR_10;
        if (VAR_11->obj_class == VAR_4)
            VAR_16 = ((HPDF_Proxy)VAR_15)->obj;
        else
            VAR_16 = VAR_15;

        if (VAR_16 == VAR_9) {
            VAR_12 = FUNC_1 (VAR_8->list, VAR_15, VAR_10);
            if (VAR_12 != VAR_5)
                FUNC_3 (VAR_8->mmgr, VAR_10);

            return VAR_12;
        }
    }

    FUNC_3 (VAR_8->mmgr, VAR_10);

    return VAR_2;
}
