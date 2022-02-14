
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int obj_class; } ;
struct TYPE_14__ {int list; int error; TYPE_2__* mmgr; TYPE_1__ header; } ;
struct TYPE_13__ {int error; } ;
typedef TYPE_2__* HPDF_MMgr ;
typedef int HPDF_Array_Rec ;
typedef TYPE_3__* HPDF_Array ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;

HPDF_Array
FUNC_5 (HPDF_MMgr VAR_2)
{
    HPDF_Array VAR_3;

    FUNC_4((" HPDF_Array_New\n"));

    VAR_3 = FUNC_1 (VAR_2, sizeof(HPDF_Array_Rec));
    if (VAR_3) {
        FUNC_3 (VAR_3, 0, sizeof(HPDF_Array_Rec));
        VAR_3->header.obj_class = VAR_1;
        VAR_3->mmgr = VAR_2;
        VAR_3->error = VAR_2->error;
        VAR_3->list = FUNC_2 (VAR_2, VAR_0);
        if (!VAR_3->list) {
            FUNC_0 (VAR_2, VAR_3);
            VAR_3 = ((void*)0);
        }
    }

    return VAR_3;
}
