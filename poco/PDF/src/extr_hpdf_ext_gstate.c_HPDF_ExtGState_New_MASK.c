
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int obj_class; } ;
struct TYPE_8__ {TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef int HPDF_MMgr ;
typedef TYPE_2__* HPDF_Dict ;


 scalar_t__ FUNC_0 (TYPE_2__*,char*,char*) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*) ;

HPDF_Dict
FUNC_4 (HPDF_MMgr VAR_2,
                     HPDF_Xref VAR_3)
{
    HPDF_Dict VAR_4 = FUNC_1 (VAR_2);

    FUNC_2 ((" HPDF_ExtGState_New\n"));

    if (!VAR_4)
        return ((void*)0);

    if (FUNC_3 (VAR_3, VAR_4) != VAR_0)
        return ((void*)0);

    if (FUNC_0 (VAR_4, "Type", "ExtGState") != VAR_0)
        return ((void*)0);

    VAR_4->header.obj_class |= VAR_1;

    return VAR_4;
}
