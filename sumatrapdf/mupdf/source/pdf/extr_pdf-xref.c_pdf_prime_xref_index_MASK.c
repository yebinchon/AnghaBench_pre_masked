
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int start; int len; struct TYPE_7__* next; TYPE_1__* table; } ;
typedef TYPE_2__ pdf_xref_subsec ;
struct TYPE_8__ {TYPE_2__* subsec; } ;
typedef TYPE_3__ pdf_xref ;
struct TYPE_9__ {int* xref_index; int num_xref_sections; TYPE_3__* xref_sections; } ;
typedef TYPE_4__ pdf_document ;
typedef int fz_context ;
struct TYPE_6__ {char type; } ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, pdf_document *VAR_1)
{
 int VAR_2, VAR_3;
 int *VAR_4 = VAR_1->xref_index;

 for (VAR_2 = VAR_1->num_xref_sections-1; VAR_2 >= 0; VAR_2--)
 {
  pdf_xref *VAR_5 = &VAR_1->xref_sections[VAR_2];
  pdf_xref_subsec *VAR_6 = VAR_5->subsec;
  while (VAR_6 != ((void*)0))
  {
   int VAR_7 = VAR_6->start;
   int VAR_8 = VAR_6->start + VAR_6->len;
   for (VAR_3 = VAR_7; VAR_3 < VAR_8; VAR_3++)
   {
    char VAR_9 = VAR_6->table[VAR_3-VAR_7].type;
    if (VAR_9 != 0 && VAR_9 != 'f')
     VAR_4[VAR_3] = VAR_2;
   }

   VAR_6 = VAR_6->next;
  }
 }
}
