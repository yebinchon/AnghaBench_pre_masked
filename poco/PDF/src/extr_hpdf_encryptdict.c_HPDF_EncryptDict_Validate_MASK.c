
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attr; } ;
struct TYPE_4__ {int obj_class; } ;
typedef TYPE_1__ HPDF_Obj_Header ;
typedef TYPE_2__* HPDF_EncryptDict ;
typedef int HPDF_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;

HPDF_BOOL
FUNC_1 (HPDF_EncryptDict VAR_4)
{
    HPDF_Obj_Header *VAR_5 = (HPDF_Obj_Header *)VAR_4;

    FUNC_0((" HPDF_EncryptDict_Validate\n"));

    if (!VAR_4 || !VAR_4->attr)
        return VAR_0;

    if (VAR_5->obj_class != (VAR_1 | VAR_2))
        return VAR_0;

    return VAR_3;
}
