
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ unsaved_sigs; } ;
typedef TYPE_1__ pdf_xref ;
struct TYPE_5__ {int num_incremental_sections; TYPE_1__* xref_sections; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;



int FUNC_0(fz_context *VAR_0, pdf_document *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->num_incremental_sections; VAR_2++)
 {
  pdf_xref *VAR_3 = &VAR_1->xref_sections[VAR_1->num_incremental_sections - VAR_2 - 1];

  if (VAR_3->unsaved_sigs)
   return 1;
 }
 return 0;
}
