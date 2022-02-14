
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int obj_class; } ;
struct TYPE_5__ {void* obj; TYPE_3__ header; } ;
typedef int HPDF_Proxy_Rec ;
typedef TYPE_1__* HPDF_Proxy ;
typedef int HPDF_Obj_Header ;
typedef int HPDF_MMgr ;


 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

HPDF_Proxy
FUNC_3 (HPDF_MMgr VAR_1,
                 void *VAR_2)
{
    HPDF_Proxy VAR_3 = FUNC_0 (VAR_1, sizeof(HPDF_Proxy_Rec));

    FUNC_2((" HPDF_Proxy_New\n"));

    if (VAR_3) {
        FUNC_1 (&VAR_3->header, 0, sizeof(HPDF_Obj_Header));
        VAR_3->header.obj_class = VAR_0;
        VAR_3->obj = VAR_2;
    }

    return VAR_3;
}
