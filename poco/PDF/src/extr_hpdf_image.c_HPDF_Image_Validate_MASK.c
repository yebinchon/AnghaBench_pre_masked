
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int obj_class; } ;
struct TYPE_9__ {int error; TYPE_1__ header; } ;
struct TYPE_8__ {int value; } ;
typedef TYPE_2__* HPDF_Name ;
typedef TYPE_3__* HPDF_Image ;
typedef int HPDF_BOOL ;


 TYPE_2__* FUNC_0 (TYPE_3__*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int VAR_5 ;

HPDF_BOOL
FUNC_4 (HPDF_Image VAR_6)
{
    HPDF_Name VAR_7;

    FUNC_1 ((" HPDF_Image_Validate\n"));

    if (!VAR_6)
        return VAR_0;

    if (VAR_6->header.obj_class != (VAR_4 |
                VAR_2)) {
        FUNC_2 (VAR_6->error, VAR_1, 0);
        return VAR_0;
    }

    VAR_7 = FUNC_0 (VAR_6, "Subtype", VAR_3);
    if (!VAR_7 || FUNC_3 (VAR_7->value, "Image") != 0) {
        FUNC_2 (VAR_6->error, VAR_1, 0);
        return VAR_0;
    }

    return VAR_5;
}
