
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int obj_class; } ;
struct TYPE_7__ {TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef TYPE_2__* HPDF_NameDict ;
typedef int HPDF_MMgr ;


 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;

HPDF_NameDict
FUNC_3 (HPDF_MMgr VAR_2,
                    HPDF_Xref VAR_3)
{
    HPDF_NameDict VAR_4;

    FUNC_1((" HPDF_NameDict_New\n"));

    VAR_4 = FUNC_0 (VAR_2);
    if (!VAR_4)
        return ((void*)0);

    if (FUNC_2 (VAR_3, VAR_4) != VAR_0)
        return ((void*)0);

    VAR_4->header.obj_class |= VAR_1;

    return VAR_4;
}
