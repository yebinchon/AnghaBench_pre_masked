
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ attr; int error; } ;
struct TYPE_10__ {TYPE_2__* parent; } ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_PageAttr ;
typedef TYPE_2__* HPDF_Page ;
typedef scalar_t__ HPDF_Array ;


 int FUNC_0 (scalar_t__,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,char*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,int ) ;

HPDF_STATUS
FUNC_5 (HPDF_Page VAR_6,
                         HPDF_Page VAR_7)
{
    HPDF_Page VAR_8;
    HPDF_Array VAR_9;
    HPDF_STATUS VAR_10;
    HPDF_PageAttr VAR_11;

    FUNC_3((" HPDF_Page_InsertBefore\n"));

    if (!VAR_7)
        return VAR_0;

    VAR_11 = (HPDF_PageAttr )VAR_7->attr;
    VAR_8 = VAR_11->parent;

    if (!VAR_8)
        return VAR_5;

    if (FUNC_2 (VAR_6, "Parent", VAR_2))
        return FUNC_4 (VAR_8->error, VAR_5, 0);

    if ((VAR_10 = FUNC_1 (VAR_6, "Parent", VAR_8)) != VAR_3)
        return VAR_10;

    VAR_9 = (HPDF_Array )FUNC_2 (VAR_8, "Kids", VAR_1);
    if (!VAR_9)
        return FUNC_4 (VAR_8->error, VAR_4, 0);

    VAR_11 = (HPDF_PageAttr)VAR_6->attr;
    VAR_11->parent = VAR_8;

    return FUNC_0 (VAR_9, VAR_7, VAR_6);
}
