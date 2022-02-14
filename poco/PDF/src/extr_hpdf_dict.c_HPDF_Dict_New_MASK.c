
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int obj_class; } ;
struct TYPE_13__ {int list; int filter; int error; TYPE_2__* mmgr; TYPE_1__ header; } ;
struct TYPE_12__ {int error; } ;
typedef TYPE_2__* HPDF_MMgr ;
typedef int HPDF_Dict_Rec ;
typedef TYPE_3__* HPDF_Dict ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

HPDF_Dict
FUNC_4 (HPDF_MMgr VAR_3)
{
    HPDF_Dict VAR_4;

    VAR_4 = (HPDF_Dict)FUNC_1 (VAR_3, sizeof(HPDF_Dict_Rec));
    if (VAR_4) {
        FUNC_3 (VAR_4, 0, sizeof(HPDF_Dict_Rec));
        VAR_4->header.obj_class = VAR_1;
        VAR_4->mmgr = VAR_3;
        VAR_4->error = VAR_3->error;
        VAR_4->list = FUNC_2 (VAR_3, VAR_0);
        VAR_4->filter = VAR_2;
        if (!VAR_4->list) {
            FUNC_0 (VAR_3, VAR_4);
            VAR_4 = ((void*)0);
        }
    }

    return VAR_4;
}
