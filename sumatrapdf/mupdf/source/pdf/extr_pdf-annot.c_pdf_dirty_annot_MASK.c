
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int needs_new_ap; TYPE_2__* page; } ;
typedef TYPE_3__ pdf_annot ;
typedef int fz_context ;
struct TYPE_6__ {TYPE_1__* doc; } ;
struct TYPE_5__ {int dirty; } ;



void
FUNC_0(fz_context *VAR_0, pdf_annot *VAR_1)
{
 VAR_1->needs_new_ap = 1;
 if (VAR_1->page && VAR_1->page->doc)
  VAR_1->page->doc->dirty = 1;
}
