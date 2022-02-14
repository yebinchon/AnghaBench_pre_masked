
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int obj_class; } ;
struct TYPE_5__ {TYPE_1__ header; } ;
typedef TYPE_2__* HPDF_ExtGState ;
typedef int HPDF_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

HPDF_BOOL
FUNC_0 (HPDF_ExtGState VAR_5)
{
    if (!VAR_5 || (VAR_5->header.obj_class !=
                (VAR_2 | VAR_1) &&
                VAR_5->header.obj_class !=
                 (VAR_3 | VAR_1)))
        return VAR_0;

    return VAR_4;
}
