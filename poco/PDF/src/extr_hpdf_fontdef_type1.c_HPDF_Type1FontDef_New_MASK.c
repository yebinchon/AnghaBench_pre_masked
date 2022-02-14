
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int flags; void* attr; TYPE_1__* mmgr; int free_fn; int type; int error; int sig_bytes; } ;
struct TYPE_10__ {int error; } ;
typedef int HPDF_Type1FontDefAttr_Rec ;
typedef void* HPDF_Type1FontDefAttr ;
typedef TYPE_1__* HPDF_MMgr ;
typedef int HPDF_FontDef_Rec ;
typedef TYPE_2__* HPDF_FontDef ;
typedef TYPE_2__ HPDF_BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (char*) ;

HPDF_FontDef
FUNC_4 (HPDF_MMgr VAR_4)
{
    HPDF_FontDef VAR_5;
    HPDF_Type1FontDefAttr VAR_6;

    FUNC_3 ((" HPDF_Type1FontDef_New\n"));

    if (!VAR_4)
        return ((void*)0);

    VAR_5 = FUNC_1 (VAR_4, sizeof(HPDF_FontDef_Rec));
    if (!VAR_5)
        return ((void*)0);

    FUNC_2 (VAR_5, 0, sizeof (HPDF_FontDef_Rec));
    VAR_5->sig_bytes = VAR_1;
    VAR_5->mmgr = VAR_4;
    VAR_5->error = VAR_4->error;
    VAR_5->type = VAR_2;
    VAR_5->free_fn = VAR_0;

    VAR_6 = FUNC_1 (VAR_4, sizeof(HPDF_Type1FontDefAttr_Rec));
    if (!VAR_6) {
        FUNC_0 (VAR_5->mmgr, VAR_5);
        return ((void*)0);
    }

    VAR_5->attr = VAR_6;
    FUNC_2 ((HPDF_BYTE *)VAR_6, 0, sizeof(HPDF_Type1FontDefAttr_Rec));
    VAR_5->flags = VAR_3;

    return VAR_5;
}
