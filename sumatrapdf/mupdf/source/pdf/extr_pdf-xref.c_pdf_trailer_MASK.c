
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * trailer; } ;
typedef TYPE_1__ pdf_xref ;
typedef int pdf_obj ;
struct TYPE_5__ {TYPE_1__* xref_sections; } ;
typedef TYPE_2__ pdf_document ;
typedef int fz_context ;



pdf_obj *FUNC_0(fz_context *VAR_0, pdf_document *VAR_1)
{

 pdf_xref *VAR_2 = &VAR_1->xref_sections[0];

 return VAR_2 ? VAR_2->trailer : ((void*)0);
}
