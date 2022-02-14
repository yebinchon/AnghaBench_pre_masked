
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int obj_class; } ;
struct TYPE_9__ {TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_MMgr ;
typedef TYPE_2__* HPDF_Catalog ;


 scalar_t__ FUNC_0 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,char*) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;

HPDF_Catalog
FUNC_5 (HPDF_MMgr VAR_2,
                   HPDF_Xref VAR_3)
{
    HPDF_Catalog VAR_4;
    HPDF_STATUS VAR_5 = 0;

    VAR_4 = FUNC_2 (VAR_2);
    if (!VAR_4)
        return ((void*)0);

    VAR_4->header.obj_class |= VAR_1;

    if (FUNC_4 (VAR_3, VAR_4) != VAR_0)
        return ((void*)0);


    VAR_5 += FUNC_1 (VAR_4, "Type", "Catalog");
    VAR_5 += FUNC_0 (VAR_4, "Pages", FUNC_3 (VAR_2, ((void*)0), VAR_3));

    if (VAR_5 != VAR_0)
        return ((void*)0);

    return VAR_4;
}
