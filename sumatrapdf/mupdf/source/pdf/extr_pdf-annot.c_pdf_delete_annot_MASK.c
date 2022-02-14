
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int obj; TYPE_4__** annot_tailp; TYPE_4__* annots; } ;
typedef TYPE_2__ pdf_page ;
typedef int pdf_obj ;
struct TYPE_10__ {int dirty; } ;
typedef TYPE_3__ pdf_document ;
struct TYPE_11__ {int obj; struct TYPE_11__* next; TYPE_1__* page; } ;
typedef TYPE_4__ pdf_annot ;
typedef int fz_context ;
struct TYPE_8__ {TYPE_3__* doc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,TYPE_4__*) ;

void
FUNC_5(fz_context *VAR_1, pdf_page *VAR_2, pdf_annot *VAR_3)
{
 pdf_document *VAR_4 = VAR_3->page->doc;
 pdf_annot **VAR_5;
 pdf_obj *VAR_6;
 int VAR_7;

 if (VAR_3 == ((void*)0))
  return;


 for (VAR_5 = &VAR_2->annots; *VAR_5; VAR_5 = &(*VAR_5)->next)
 {
  if (*VAR_5 == VAR_3)
   break;
 }


 if (*VAR_5 == ((void*)0))
  return;

 *VAR_5 = VAR_3->next;


 if (*VAR_5 == ((void*)0))
  VAR_2->annot_tailp = VAR_5;


 VAR_6 = FUNC_3(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_3->obj);
 if (VAR_7 >= 0)
  FUNC_1(VAR_1, VAR_6, VAR_7);





 FUNC_4(VAR_1, VAR_3);

 VAR_4->dirty = 1;
}
