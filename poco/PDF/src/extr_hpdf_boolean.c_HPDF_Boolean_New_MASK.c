
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int obj_class; } ;
struct TYPE_5__ {int value; TYPE_2__ header; } ;
typedef int HPDF_Obj_Header ;
typedef int HPDF_MMgr ;
typedef int HPDF_Boolean_Rec ;
typedef TYPE_1__* HPDF_Boolean ;
typedef int HPDF_BOOL ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int VAR_0 ;

HPDF_Boolean
FUNC_2 (HPDF_MMgr VAR_1,
                   HPDF_BOOL VAR_2)
{
    HPDF_Boolean VAR_3 = FUNC_0 (VAR_1, sizeof(HPDF_Boolean_Rec));

    if (VAR_3) {
        FUNC_1(&VAR_3->header, 0, sizeof(HPDF_Obj_Header));
        VAR_3->header.obj_class = VAR_0;
        VAR_3->value = VAR_2;
    }

    return VAR_3;
}
