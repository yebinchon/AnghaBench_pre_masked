
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ trailer; scalar_t__ pre_repair_trailer; } ;
typedef TYPE_1__ pdf_xref ;
typedef int pdf_obj ;
struct TYPE_5__ {int num_xref_sections; TYPE_1__* xref_sections; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *) ;

void FUNC_2(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2)
{

 pdf_xref *VAR_3 = &VAR_1->xref_sections[VAR_1->num_xref_sections - 1];
 if (VAR_3->trailer)
 {
  FUNC_0(VAR_0, VAR_3->pre_repair_trailer);
  VAR_3->pre_repair_trailer = VAR_3->trailer;
 }
 VAR_3->trailer = FUNC_1(VAR_0, VAR_2);
}
