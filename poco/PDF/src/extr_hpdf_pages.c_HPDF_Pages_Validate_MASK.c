
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int obj_class; } ;
typedef scalar_t__ HPDF_Pages ;
typedef TYPE_1__ HPDF_Obj_Header ;
typedef int HPDF_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;

HPDF_BOOL
FUNC_1 (HPDF_Pages VAR_4)
{
    HPDF_Obj_Header *VAR_5 = (HPDF_Obj_Header *)VAR_4;

    FUNC_0((" HPDF_Pages_Validate\n"));

    if (!VAR_4 || VAR_5->obj_class != (VAR_1 |
                VAR_2))
        return VAR_0;

    return VAR_3;
}
