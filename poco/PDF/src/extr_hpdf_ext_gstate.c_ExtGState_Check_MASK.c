
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int obj_class; } ;
struct TYPE_6__ {int error; TYPE_1__ header; } ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_ExtGState ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;

HPDF_STATUS
FUNC_2 (HPDF_ExtGState VAR_5)
{
    if (!FUNC_0 (VAR_5))
        return VAR_1;

    if (VAR_5->header.obj_class ==
            (VAR_4 | VAR_2))
        return FUNC_1 (VAR_5->error, VAR_0,
                0);

    return VAR_3;
}
