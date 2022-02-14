
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int len; TYPE_2__* table; struct TYPE_6__* next; } ;
typedef TYPE_1__ pdf_xref_subsec ;
struct TYPE_7__ {int marked; scalar_t__ obj; } ;
typedef TYPE_2__ pdf_xref_entry ;
struct TYPE_8__ {TYPE_1__* subsec; } ;
typedef TYPE_3__ pdf_xref ;
struct TYPE_9__ {int num_xref_sections; TYPE_3__* xref_sections; } ;
typedef TYPE_4__ pdf_document ;
typedef int fz_context ;



void FUNC_0(fz_context *VAR_0, pdf_document *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_xref_sections; VAR_2++)
 {
  pdf_xref *VAR_4 = &VAR_1->xref_sections[VAR_2];
  pdf_xref_subsec *VAR_5;

  for (VAR_5 = VAR_4->subsec; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
  {
   for (VAR_3 = 0; VAR_3 < VAR_5->len; VAR_3++)
   {
    pdf_xref_entry *VAR_6 = &VAR_5->table[VAR_3];
    if (VAR_6->obj)
    {
     VAR_6->marked = 1;
    }
   }
  }
 }
}
