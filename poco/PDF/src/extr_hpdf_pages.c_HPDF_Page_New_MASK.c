
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_17__ {int obj_class; } ;
struct TYPE_19__ {int mmgr; TYPE_2__* attr; int before_write_fn; int free_fn; TYPE_1__ header; } ;
struct TYPE_18__ {TYPE_12__* contents; int xref; int stream; int gstate; void* text_pos; void* cur_pos; int gmode; } ;
struct TYPE_16__ {int stream; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef int HPDF_PageAttr_Rec ;
typedef TYPE_2__* HPDF_PageAttr ;
typedef TYPE_3__* HPDF_Page ;
typedef int HPDF_MMgr ;
typedef int HPDF_INT16 ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 TYPE_12__* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_12__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,char*,TYPE_12__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,char*,char*) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_3__* FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,int *) ;
 TYPE_2__* FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ,int ,int ) ;
 void* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;

HPDF_Page
FUNC_14 (HPDF_MMgr VAR_7,
                HPDF_Xref VAR_8)
{
    HPDF_STATUS VAR_9;
    HPDF_PageAttr VAR_10;
    HPDF_Page VAR_11;

    FUNC_10((" HPDF_Page_New\n"));

    VAR_11 = FUNC_6 (VAR_7);
    if (!VAR_11)
        return ((void*)0);

    VAR_11->header.obj_class |= VAR_4;
    VAR_11->free_fn = VAR_6;
    VAR_11->before_write_fn = VAR_5;

    VAR_10 = FUNC_8 (VAR_11->mmgr, sizeof(HPDF_PageAttr_Rec));
    if (!VAR_10) {
        FUNC_5 (VAR_11);
        return ((void*)0);
    }

    VAR_11->attr = VAR_10;
    FUNC_9 (VAR_10, 0, sizeof(HPDF_PageAttr_Rec));
    VAR_10->gmode = VAR_2;
    VAR_10->cur_pos = FUNC_12 (0, 0);
    VAR_10->text_pos = FUNC_12 (0, 0);

    VAR_9 = FUNC_13 (VAR_8, VAR_11);
    if (VAR_9 != VAR_3)
        return ((void*)0);

    VAR_10->gstate = FUNC_7 (VAR_11->mmgr, ((void*)0));
    VAR_10->contents = FUNC_2 (VAR_11->mmgr, VAR_8);

    if (!VAR_10->gstate || !VAR_10->contents)
        return ((void*)0);

    VAR_10->stream = VAR_10->contents->stream;
    VAR_10->xref = VAR_8;


    VAR_9 += FUNC_4 (VAR_11, "Type", "Page");
    VAR_9 += FUNC_3 (VAR_11, "MediaBox", FUNC_1 (VAR_11->mmgr,
                FUNC_11 (0, 0, (HPDF_INT16)(VAR_1), (HPDF_INT16)(VAR_0))));
    VAR_9 += FUNC_3 (VAR_11, "Contents", VAR_10->contents);

    VAR_9 += FUNC_0 (VAR_11);

    if (VAR_9 != VAR_3)
        return ((void*)0);

    return VAR_11;
}
