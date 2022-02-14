
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int obj_class; scalar_t__ obj_id; } ;
typedef int HPDF_UINT ;
typedef TYPE_1__ HPDF_Obj_Header ;
typedef int HPDF_MMgr ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,void*) ;
 int VAR_0 ;




 int FUNC_4 (char*) ;
 int FUNC_5 (void*) ;

void
FUNC_6 (HPDF_MMgr VAR_1,
                     void *VAR_2)
{
    HPDF_Obj_Header *VAR_3;

    FUNC_4((" HPDF_Obj_ForceFree\n"));

    if (!VAR_2)
        return;

    VAR_3 = (HPDF_Obj_Header *)VAR_2;

    FUNC_4((" HPDF_Obj_ForceFree obj=0x%08X obj_id=0x%08X "
                    "obj_class=0x%08X\n",
                    (HPDF_UINT)VAR_2, (HPDF_UINT)(VAR_3->obj_id),
                    (HPDF_UINT)(VAR_3->obj_class)));

    switch (VAR_3->obj_class & VAR_0) {
        case 128:
            FUNC_5 (VAR_2);
            break;
        case 130:
            FUNC_1 (VAR_2);
            break;
        case 131:
            FUNC_0 (VAR_2);
            break;
        case 129:
            FUNC_2 (VAR_2);
            break;
        default:
            FUNC_3 (VAR_1, VAR_2);
    }
}
