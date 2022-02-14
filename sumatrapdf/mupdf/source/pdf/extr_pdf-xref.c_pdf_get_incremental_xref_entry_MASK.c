
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int start; int len; int * table; int * next; } ;
typedef TYPE_1__ pdf_xref_subsec ;
typedef int pdf_xref_entry ;
struct TYPE_8__ {int num_objects; TYPE_1__* subsec; } ;
typedef TYPE_2__ pdf_xref ;
struct TYPE_9__ {size_t xref_base; scalar_t__* xref_index; TYPE_2__* xref_sections; } ;
typedef TYPE_3__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,TYPE_3__*,int) ;

__attribute__((used)) static pdf_xref_entry *FUNC_3(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2)
{
 pdf_xref *VAR_3;
 pdf_xref_subsec *VAR_4;


 FUNC_1(VAR_0, VAR_1);

 VAR_3 = &VAR_1->xref_sections[VAR_1->xref_base];
 if (VAR_2 >= VAR_3->num_objects)
  FUNC_2(VAR_0, VAR_1, VAR_2 + 1);

 VAR_4 = VAR_3->subsec;
 FUNC_0(VAR_4 != ((void*)0) && VAR_4->next == ((void*)0));
 FUNC_0(VAR_2 >= VAR_4->start && VAR_2 < VAR_4->start + VAR_4->len);
 VAR_1->xref_index[VAR_2] = 0;
 return &VAR_4->table[VAR_2 - VAR_4->start];
}
