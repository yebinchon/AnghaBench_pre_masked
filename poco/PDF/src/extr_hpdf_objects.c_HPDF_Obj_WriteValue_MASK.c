
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int obj_class; } ;
typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef TYPE_1__ HPDF_Obj_Header ;
typedef int HPDF_Encrypt ;


 int FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,int ) ;
 int VAR_1 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (void*,int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (void*,int ,int ) ;

HPDF_STATUS
FUNC_10 (void *VAR_2,
                      HPDF_Stream VAR_3,
                      HPDF_Encrypt VAR_4)
{
    HPDF_Obj_Header *VAR_5;
    HPDF_STATUS VAR_6;

    FUNC_6((" HPDF_Obj_WriteValue\n"));

    VAR_5 = (HPDF_Obj_Header *)VAR_2;

    FUNC_6((" HPDF_Obj_WriteValue obj=0x%08X obj_class=0x%04X\n",
            (HPDF_UINT)VAR_2, (HPDF_UINT)VAR_5->obj_class));

    switch (VAR_5->obj_class & VAR_1) {
        case 132:
            VAR_6 = FUNC_4 (VAR_2, VAR_3);
            break;
        case 130:
            VAR_6 = FUNC_5 (VAR_2, VAR_3);
            break;
        case 129:
            VAR_6 = FUNC_7 (VAR_2, VAR_3);
            break;
        case 128:
            VAR_6 = FUNC_9 (VAR_2, VAR_3, VAR_4);
            break;
        case 135:
            VAR_6 = FUNC_1 (VAR_2, VAR_3, VAR_4);
            break;
        case 136:
            VAR_6 = FUNC_0 (VAR_2, VAR_3, VAR_4);
            break;
        case 133:
            VAR_6 = FUNC_3 (VAR_2, VAR_3, VAR_4);
            break;
        case 134:
            VAR_6 = FUNC_2 (VAR_2, VAR_3);
            break;
        case 131:
            VAR_6 = FUNC_8 (VAR_3, "null");
            break;
        default:
            VAR_6 = VAR_0;
    }

    return VAR_6;
}
