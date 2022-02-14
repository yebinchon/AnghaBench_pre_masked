
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_1__ pdf_widget ;
struct TYPE_8__ {TYPE_1__* widgets; TYPE_1__* annots; TYPE_6__* doc; } ;
typedef TYPE_2__ pdf_page ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;
struct TYPE_9__ {scalar_t__ recalculate; } ;


 int FUNC_0 (int *,TYPE_6__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

int
FUNC_2(fz_context *VAR_0, pdf_page *VAR_1)
{
 pdf_annot *VAR_2;
 pdf_widget *VAR_3;
 int VAR_4 = 0;

 if (VAR_1->doc->recalculate)
  FUNC_0(VAR_0, VAR_1->doc);

 for (VAR_2 = VAR_1->annots; VAR_2; VAR_2 = VAR_2->next)
  if (FUNC_1(VAR_0, VAR_2))
   VAR_4 = 1;
 for (VAR_3 = VAR_1->widgets; VAR_3; VAR_3 = VAR_3->next)
  if (FUNC_1(VAR_0, VAR_3))
   VAR_4 = 1;

 return VAR_4;
}
