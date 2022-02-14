
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len; scalar_t__ start; TYPE_1__* table; int * next; } ;
typedef TYPE_2__ pdf_xref_subsec ;
struct TYPE_8__ {int num_objects; TYPE_2__* subsec; } ;
typedef TYPE_3__ pdf_xref ;
struct TYPE_9__ {size_t xref_base; TYPE_3__* xref_sections; } ;
typedef TYPE_4__ pdf_document ;
typedef int fz_context ;
struct TYPE_6__ {scalar_t__ type; } ;


 int FUNC_0 (int) ;

int FUNC_1(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2)
{
 pdf_xref *VAR_3 = &VAR_1->xref_sections[VAR_1->xref_base];
 pdf_xref_subsec *VAR_4 = VAR_3->subsec;

 FUNC_0(VAR_4 != ((void*)0) && VAR_4->next == ((void*)0) && VAR_4->len == VAR_3->num_objects && VAR_4->start == 0);

 return VAR_2 < VAR_3->num_objects && VAR_4->table[VAR_2].type;
}
