
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int start; int len; TYPE_2__* table; struct TYPE_9__* next; } ;
typedef TYPE_1__ pdf_xref_subsec ;
struct TYPE_10__ {int * stm_buf; int * obj; scalar_t__ type; } ;
typedef TYPE_2__ pdf_xref_entry ;
struct TYPE_11__ {int num_objects; TYPE_1__* subsec; } ;
typedef TYPE_3__ pdf_xref ;
struct TYPE_12__ {int* xref_index; int num_xref_sections; int num_incremental_sections; TYPE_3__* xref_sections; } ;
typedef TYPE_4__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int * FUNC_1 (int *,int *) ;
 TYPE_2__* FUNC_2 (int *,TYPE_4__*,int) ;

void FUNC_3(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2)
{
 pdf_xref_entry *VAR_3, *VAR_4;
 pdf_xref_subsec *VAR_5 = ((void*)0);
 int VAR_6;


 FUNC_0(VAR_0, VAR_1);


 for (VAR_6 = VAR_1->xref_index[VAR_2]; VAR_6 < VAR_1->num_xref_sections; VAR_6++)
 {
  pdf_xref *VAR_7 = &VAR_1->xref_sections[VAR_6];

  if (VAR_2 < 0 && VAR_2 >= VAR_7->num_objects)
   break;
  for (VAR_5 = VAR_7->subsec; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
  {
   if (VAR_5->start <= VAR_2 && VAR_2 < VAR_5->start + VAR_5->len && VAR_5->table[VAR_2 - VAR_5->start].type)
    break;
  }
  if (VAR_5 != ((void*)0))
   break;
 }



 if (VAR_6 == 0 || VAR_5 == ((void*)0))
  return;


 VAR_1->xref_index[VAR_2] = 0;
 VAR_4 = &VAR_5->table[VAR_2 - VAR_5->start];
 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 *VAR_3 = *VAR_4;
 if (VAR_6 < VAR_1->num_incremental_sections)
 {




  VAR_4->obj = FUNC_1(VAR_0, VAR_4->obj);
 }
 else
 {
  VAR_4->obj = ((void*)0);
 }
 VAR_4->stm_buf = ((void*)0);
}
