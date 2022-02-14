
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ attr; } ;
struct TYPE_4__ {int obj_class; } ;
typedef TYPE_1__ HPDF_Obj_Header ;
typedef TYPE_2__* HPDF_EncryptDict ;
typedef int * HPDF_Encrypt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

HPDF_Encrypt
FUNC_1 (HPDF_EncryptDict VAR_2)
{
    HPDF_Obj_Header *VAR_3 = (HPDF_Obj_Header *)VAR_2;

    FUNC_0((" HPDF_EncryptDict_GetAttr\n"));

    if (VAR_2 && VAR_2->attr &&
        (VAR_3->obj_class == (VAR_0 | VAR_1)))
        return (HPDF_Encrypt)VAR_2->attr;

    return ((void*)0);
}
