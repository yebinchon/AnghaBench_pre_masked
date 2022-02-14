
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int obj_class; } ;
struct TYPE_8__ {TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_NameTree ;
typedef int HPDF_MMgr ;
typedef int HPDF_Array ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*) ;

HPDF_NameTree
FUNC_5 (HPDF_MMgr VAR_2,
                    HPDF_Xref VAR_3)
{
    HPDF_STATUS VAR_4 = VAR_0;
    HPDF_NameTree VAR_5;
    HPDF_Array VAR_6;

    FUNC_3((" HPDF_NameTree_New\n"));

    VAR_5 = FUNC_2 (VAR_2);
    if (!VAR_5)
        return ((void*)0);

    if (FUNC_4 (VAR_3, VAR_5) != VAR_0)
        return ((void*)0);

    VAR_5->header.obj_class |= VAR_1;

    VAR_6 = FUNC_0 (VAR_2);
    if (!VAR_5)
        return ((void*)0);

    VAR_4 += FUNC_1 (VAR_5, "Names", VAR_6);
    if (VAR_4 != VAR_0)
        return ((void*)0);

    return VAR_5;
}
