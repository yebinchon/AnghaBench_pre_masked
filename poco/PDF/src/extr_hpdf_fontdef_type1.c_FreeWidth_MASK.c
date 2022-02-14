
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int valid; int mmgr; int attr; } ;
struct TYPE_4__ {int * widths; } ;
typedef TYPE_1__* HPDF_Type1FontDefAttr ;
typedef TYPE_2__* HPDF_FontDef ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (HPDF_FontDef VAR_1)
{
    HPDF_Type1FontDefAttr VAR_2 = (HPDF_Type1FontDefAttr)VAR_1->attr;

    FUNC_1 ((" FreeWidth\n"));

    FUNC_0 (VAR_1->mmgr, VAR_2->widths);
    VAR_2->widths = ((void*)0);

    VAR_1->valid = VAR_0;
}
