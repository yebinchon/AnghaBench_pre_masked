
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {int obj; TYPE_1__* page; } ;
typedef TYPE_2__ pdf_annot ;
typedef int fz_context ;
struct TYPE_4__ {int doc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (int *,int ,int ,char*,int *) ;

void FUNC_4(fz_context *VAR_1, pdf_annot *VAR_2)
{
 pdf_obj *VAR_3 = FUNC_1(VAR_1, VAR_2->obj, FUNC_0(VAR_0));
 if (VAR_3)
  FUNC_3(VAR_1, VAR_2->page->doc, VAR_2->obj, "A", VAR_3);
 else
  FUNC_2(VAR_1, VAR_2->page->doc, VAR_2->obj, "AA/U");
}
