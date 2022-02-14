
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int obj_class; } ;
struct TYPE_7__ {int error; scalar_t__ attr; TYPE_1__ header; } ;
struct TYPE_6__ {int gmode; } ;
typedef int HPDF_UINT ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_PageAttr ;
typedef TYPE_3__* HPDF_Page ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;

HPDF_STATUS
FUNC_1 (HPDF_Page VAR_6,
                       HPDF_UINT VAR_7)
{
    if (!VAR_6)
        return VAR_0;

    if (VAR_6->header.obj_class != (VAR_4 | VAR_2))
        return VAR_1;

    if (!(((HPDF_PageAttr)VAR_6->attr)->gmode & VAR_7))
        return FUNC_0 (VAR_6->error, VAR_5, 0);

    return VAR_3;
}
