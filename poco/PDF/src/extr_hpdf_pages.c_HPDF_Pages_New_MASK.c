
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int obj_class; } ;
struct TYPE_12__ {int mmgr; int before_write_fn; TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__* HPDF_Pages ;
typedef int HPDF_MMgr ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,char*) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ,TYPE_2__*) ;
 int VAR_2 ;

HPDF_Pages
FUNC_8 (HPDF_MMgr VAR_3,
                 HPDF_Pages VAR_4,
                 HPDF_Xref VAR_5)
{
    HPDF_STATUS VAR_6 = VAR_0;
    HPDF_Pages VAR_7;


    FUNC_5((" HPDF_Pages_New\n"));

    VAR_7 = FUNC_3 (VAR_3);
    if (!VAR_7)
        return ((void*)0);

    VAR_7->header.obj_class |= VAR_1;
    VAR_7->before_write_fn = VAR_2;

    if (FUNC_7 (VAR_5, VAR_7) != VAR_0)
        return ((void*)0);


    VAR_6 += FUNC_2 (VAR_7, "Type", "Pages");
    VAR_6 += FUNC_1 (VAR_7, "Kids", FUNC_0 (VAR_7->mmgr));
    VAR_6 += FUNC_1 (VAR_7, "Count", FUNC_4 (VAR_7->mmgr, 0));

    if (VAR_6 == VAR_0 && VAR_4)
        VAR_6 += FUNC_6 (VAR_4, VAR_7);

    if (VAR_6 != VAR_0)
        return ((void*)0);

    return VAR_7;
}
