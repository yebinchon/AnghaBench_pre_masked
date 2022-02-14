
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int obj_id; } ;
typedef TYPE_1__ HPDF_Obj_Header ;
typedef int HPDF_MMgr ;


 int VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (char*) ;

void
FUNC_2 (HPDF_MMgr VAR_1,
                void *VAR_2)
{
    HPDF_Obj_Header *VAR_3;

    FUNC_1((" HPDF_Obj_Free\n"));

    if (!VAR_2)
        return;

    VAR_3 = (HPDF_Obj_Header *)VAR_2;

    if (!(VAR_3->obj_id & VAR_0))
        FUNC_0 (VAR_1, VAR_2);
}
