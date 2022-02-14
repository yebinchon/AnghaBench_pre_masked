
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* parent; } ;
struct TYPE_11__ {int obj_class; } ;
struct TYPE_12__ {int attr; TYPE_1__ header; int error; } ;
typedef int HPDF_STATUS ;
typedef TYPE_2__* HPDF_Pages ;
typedef TYPE_3__* HPDF_PageAttr ;
typedef TYPE_2__* HPDF_Dict ;
typedef scalar_t__ HPDF_Array ;


 int FUNC_0 (scalar_t__,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

HPDF_STATUS
FUNC_5 (HPDF_Pages VAR_6,
                     HPDF_Dict VAR_7)
{
    HPDF_Array VAR_8;
    HPDF_STATUS VAR_9;

    FUNC_3((" HPDF_Pages_AddKids\n"));

    if (FUNC_2 (VAR_7, "Parent", VAR_1))
        return FUNC_4 (VAR_6->error, VAR_5, 0);

    if ((VAR_9 = FUNC_1 (VAR_7, "Parent", VAR_6)) != VAR_2)
        return VAR_9;

    VAR_8 = (HPDF_Array )FUNC_2 (VAR_6, "Kids", VAR_0);
    if (!VAR_8)
        return FUNC_4 (VAR_6->error, VAR_4, 0);

    if (VAR_7->header.obj_class == (VAR_1 | VAR_3)) {
        HPDF_PageAttr VAR_10 = (HPDF_PageAttr)VAR_7->attr;

        VAR_10->parent = VAR_6;
    }

    return FUNC_0 (VAR_8, VAR_7);
}
