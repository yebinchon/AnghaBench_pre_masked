
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int error; TYPE_1__* list; } ;
struct TYPE_7__ {int obj_class; } ;
struct TYPE_6__ {int count; } ;
typedef scalar_t__ HPDF_Page ;
typedef TYPE_2__ HPDF_Obj_Header ;
typedef TYPE_3__* HPDF_Destination ;
typedef int HPDF_BOOL ;


 scalar_t__ FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_5 ;

HPDF_BOOL
FUNC_3 (HPDF_Destination VAR_6)
{
    HPDF_Obj_Header *VAR_7 = (HPDF_Obj_Header *)VAR_6;
    HPDF_Page VAR_8;

    if (!VAR_6 || VAR_7->obj_class !=
                (VAR_2 | VAR_4))
        return VAR_0;


    if (VAR_6->list->count < 2)
        return VAR_0;

    VAR_8 = (HPDF_Page)FUNC_0 (VAR_6, 0, VAR_3);
    if (!FUNC_1 (VAR_8)) {
     FUNC_2 (VAR_6->error, VAR_1, 0);
        return VAR_0;
    }

    return VAR_5;
}
