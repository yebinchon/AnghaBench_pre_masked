
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int start; int len; TYPE_2__* table; struct TYPE_8__* next; } ;
typedef TYPE_1__ pdf_xref_subsec ;
struct TYPE_9__ {scalar_t__ type; } ;
typedef TYPE_2__ pdf_xref_entry ;
struct TYPE_10__ {int num_objects; TYPE_1__* subsec; } ;
typedef TYPE_3__ pdf_xref ;
struct TYPE_11__ {int max_xref_len; int* xref_index; int xref_base; int num_xref_sections; TYPE_3__* xref_sections; } ;
typedef TYPE_4__ pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*,int,int ) ;
 int FUNC_1 (int *,int ,char*) ;

pdf_xref_entry *FUNC_2(fz_context *VAR_1, pdf_document *VAR_2, int VAR_3)
{
 pdf_xref *VAR_4 = ((void*)0);
 pdf_xref_subsec *VAR_5;
 int VAR_6;

 if (VAR_3 < 0)
  FUNC_1(VAR_1, VAR_0, "Negative object number requested");

 if (VAR_3 <= VAR_2->max_xref_len)
  VAR_6 = VAR_2->xref_index[VAR_3];
 else
  VAR_6 = 0;



 if (VAR_2->xref_base > VAR_6)
  VAR_6 = VAR_2->xref_base;


 for (; VAR_6 < VAR_2->num_xref_sections; VAR_6++)
 {
  VAR_4 = &VAR_2->xref_sections[VAR_6];

  if (VAR_3 < VAR_4->num_objects)
  {
   for (VAR_5 = VAR_4->subsec; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
   {
    pdf_xref_entry *VAR_7;

    if (VAR_3 < VAR_5->start || VAR_3 >= VAR_5->start + VAR_5->len)
     continue;

    VAR_7 = &VAR_5->table[VAR_3 - VAR_5->start];
    if (VAR_7->type)
    {


     if (VAR_2->xref_base == 0)
      VAR_2->xref_index[VAR_3] = VAR_6;
     return VAR_7;
    }
   }
  }
 }



 VAR_2->xref_index[VAR_3] = 0;
 if (VAR_4 == ((void*)0) || VAR_3 < VAR_4->num_objects)
 {
  VAR_4 = &VAR_2->xref_sections[VAR_2->xref_base];
  for (VAR_5 = VAR_4->subsec; VAR_5 != ((void*)0); VAR_5 = VAR_5->next)
  {
   if (VAR_3 >= VAR_5->start && VAR_3 < VAR_5->start + VAR_5->len)
    return &VAR_5->table[VAR_3 - VAR_5->start];
  }
 }





 FUNC_0(VAR_1, VAR_2, VAR_3+1, 0);
 VAR_4 = &VAR_2->xref_sections[0];
 VAR_5 = VAR_4->subsec;
 return &VAR_5->table[VAR_3 - VAR_5->start];
}
