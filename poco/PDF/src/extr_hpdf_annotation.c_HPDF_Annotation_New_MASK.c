
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int obj_class; } ;
struct TYPE_12__ {TYPE_1__ header; } ;
struct TYPE_11__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef int HPDF_Xref ;
typedef scalar_t__ HPDF_STATUS ;
typedef TYPE_2__ HPDF_Rect ;
typedef scalar_t__ HPDF_REAL ;
typedef int HPDF_MMgr ;
typedef size_t HPDF_INT ;
typedef int HPDF_Array ;
typedef TYPE_3__* HPDF_Annotation ;
typedef scalar_t__ HPDF_AnnotType ;


 char** VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,char*,char*) ;
 TYPE_3__* FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ,TYPE_3__*) ;

HPDF_Annotation
FUNC_7 (HPDF_MMgr VAR_3,
                      HPDF_Xref VAR_4,
                      HPDF_AnnotType VAR_5,
                      HPDF_Rect VAR_6)
{
    HPDF_Annotation VAR_7;
    HPDF_Array VAR_8;
    HPDF_STATUS VAR_9 = VAR_1;
    HPDF_REAL VAR_10;

    FUNC_5((" HPDF_Annotation_New\n"));

    VAR_7 = FUNC_4 (VAR_3);
    if (!VAR_7)
        return ((void*)0);

    if (FUNC_6 (VAR_4, VAR_7) != VAR_1)
        return ((void*)0);

    VAR_8 = FUNC_1 (VAR_3);
    if (!VAR_8)
        return ((void*)0);

    if (FUNC_2 (VAR_7, "Rect", VAR_8) != VAR_1)
        return ((void*)0);

    if (VAR_6.top < VAR_6.bottom) {
        VAR_10 = VAR_6.top;
        VAR_6.top = VAR_6.bottom;
        VAR_6.bottom = VAR_10;
    }

    VAR_9 += FUNC_0 (VAR_8, VAR_6.left);
    VAR_9 += FUNC_0 (VAR_8, VAR_6.bottom);
    VAR_9 += FUNC_0 (VAR_8, VAR_6.right);
    VAR_9 += FUNC_0 (VAR_8, VAR_6.top);

    VAR_9 += FUNC_3 (VAR_7, "Type", "Annot");
    VAR_9 += FUNC_3 (VAR_7, "Subtype",
                    VAR_0[(HPDF_INT)VAR_5]);

    if (VAR_9 != VAR_1)
        return ((void*)0);

    VAR_7->header.obj_class |= VAR_2;

    return VAR_7;
}
