
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* unsaved_sigs; } ;
typedef TYPE_1__ pdf_xref ;
struct TYPE_6__ {int * field; struct TYPE_6__* next; } ;
typedef TYPE_2__ pdf_unsaved_sig ;
typedef int pdf_obj ;
struct TYPE_7__ {int num_incremental_sections; TYPE_1__* xref_sections; } ;
typedef TYPE_3__ pdf_document ;



int FUNC_0(pdf_document *VAR_0, pdf_obj *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->num_incremental_sections; VAR_2++)
 {
  pdf_xref *VAR_3 = &VAR_0->xref_sections[VAR_2];
  pdf_unsaved_sig *VAR_4;

  for (VAR_4 = VAR_3->unsaved_sigs; VAR_4; VAR_4 = VAR_4->next)
  {
   if (VAR_4->field == VAR_1)
    return 1;
  }
 }

 return 0;
}
