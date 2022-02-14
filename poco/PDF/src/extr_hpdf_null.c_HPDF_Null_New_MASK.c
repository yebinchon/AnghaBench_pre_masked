
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int obj_class; } ;
struct TYPE_5__ {TYPE_3__ header; } ;
typedef int HPDF_Obj_Header ;
typedef int HPDF_Null_Rec ;
typedef TYPE_1__* HPDF_Null ;
typedef int HPDF_MMgr ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_0 ;

HPDF_Null
FUNC_2 (HPDF_MMgr VAR_1)
{
    HPDF_Null VAR_2 = FUNC_0 (VAR_1, sizeof(HPDF_Null_Rec));

    if (VAR_2) {
        FUNC_1 (&VAR_2->header, 0, sizeof(HPDF_Obj_Header));
        VAR_2->header.obj_class = VAR_0;
    }

    return VAR_2;
}
