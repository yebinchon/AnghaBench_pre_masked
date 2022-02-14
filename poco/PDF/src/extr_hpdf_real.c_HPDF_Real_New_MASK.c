
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int obj_class; } ;
struct TYPE_10__ {int error; } ;
struct TYPE_9__ {int error; TYPE_6__ header; } ;
typedef int HPDF_Real_Rec ;
typedef TYPE_1__* HPDF_Real ;
typedef int HPDF_REAL ;
typedef int HPDF_Obj_Header ;
typedef TYPE_2__* HPDF_MMgr ;


 TYPE_1__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;

HPDF_Real
FUNC_3 (HPDF_MMgr VAR_1,
                HPDF_REAL VAR_2)
{
    HPDF_Real VAR_3 = FUNC_0 (VAR_1, sizeof(HPDF_Real_Rec));

    if (VAR_3) {
        FUNC_1 (&VAR_3->header, 0, sizeof(HPDF_Obj_Header));
        VAR_3->header.obj_class = VAR_0;
        VAR_3->error = VAR_1->error;
        FUNC_2 (VAR_3, VAR_2);
    }

    return VAR_3;
}
