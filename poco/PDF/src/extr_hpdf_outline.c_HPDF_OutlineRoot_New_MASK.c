
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int obj_id; } ;
struct TYPE_15__ {TYPE_1__ header; } ;
struct TYPE_13__ {int obj_class; } ;
struct TYPE_14__ {TYPE_2__ header; int before_write_fn; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_3__* HPDF_Outline ;
typedef TYPE_4__* HPDF_Number ;
typedef int HPDF_MMgr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,char*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,char*,char*) ;
 TYPE_3__* FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*) ;

HPDF_Outline
FUNC_6 (HPDF_MMgr VAR_5,
                       HPDF_Xref VAR_6)
{
    HPDF_Outline VAR_7;
    HPDF_STATUS VAR_8 = VAR_1;
    HPDF_Number VAR_9;

    FUNC_4((" HPDF_OutlineRoot_New\n"));

    VAR_7 = FUNC_2 (VAR_5);
    if (!VAR_7)
        return ((void*)0);

    VAR_7->before_write_fn = VAR_0;

    if (FUNC_5 (VAR_6, VAR_7) != VAR_1)
        return ((void*)0);

    VAR_9 = FUNC_3 (VAR_5, VAR_4);
    if (!VAR_9)
        return ((void*)0);

    VAR_9->header.obj_id |= VAR_3;

    VAR_8 += FUNC_0 (VAR_7, "_OPENED", VAR_9);
    VAR_8 += FUNC_1 (VAR_7, "Type", "Outlines");

    if (VAR_8 != VAR_1)
        return ((void*)0);

    VAR_7->header.obj_class |= VAR_2;

    return VAR_7;
}
