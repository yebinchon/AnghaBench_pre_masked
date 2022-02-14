
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int obj_class; } ;
struct TYPE_20__ {TYPE_2__ header; int before_write_fn; } ;
struct TYPE_17__ {int obj_id; } ;
struct TYPE_19__ {TYPE_1__ header; } ;
typedef int HPDF_Xref ;
typedef TYPE_3__* HPDF_String ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_4__* HPDF_Outline ;
typedef TYPE_3__* HPDF_Number ;
typedef int HPDF_MMgr ;
typedef int HPDF_Encoder ;


 scalar_t__ FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__*,char*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,char*,char*) ;
 TYPE_4__* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 TYPE_3__* FUNC_6 (int ,char const*,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*) ;

HPDF_Outline
FUNC_8 (HPDF_MMgr VAR_5,
                   HPDF_Outline VAR_6,
                   const char *VAR_7,
                   HPDF_Encoder VAR_8,
                   HPDF_Xref VAR_9)
{
    HPDF_Outline VAR_10;
    HPDF_String VAR_11;
    HPDF_STATUS VAR_12 = VAR_1;
    HPDF_Number VAR_13;

    FUNC_5((" HPDF_Outline_New\n"));

    if (!VAR_5 || !VAR_6 || !VAR_9)
        return ((void*)0);

    VAR_10 = FUNC_3 (VAR_5);
    if (!VAR_10)
        return ((void*)0);

    VAR_10->before_write_fn = VAR_0;

    if (FUNC_7 (VAR_9, VAR_10) != VAR_1)
        return ((void*)0);

    VAR_11 = FUNC_6 (VAR_5, VAR_7, VAR_8);
    if (!VAR_11)
        return ((void*)0);
    else
        VAR_12 += FUNC_1 (VAR_10, "Title", VAR_11);

    VAR_13 = FUNC_4 (VAR_5, VAR_4);
    if (!VAR_13)
        return ((void*)0);

    VAR_13->header.obj_id |= VAR_3;
    VAR_12 += FUNC_1 (VAR_10, "_OPENED", VAR_13);

    VAR_12 += FUNC_2 (VAR_10, "Type", "Outlines");
    VAR_12 += FUNC_0 (VAR_6, VAR_10);

    if (VAR_12 != VAR_1)
        return ((void*)0);

    VAR_10->header.obj_class |= VAR_2;

    return VAR_10;
}
