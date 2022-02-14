
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int obj; } ;
typedef TYPE_1__ pdf_xref_entry ;
typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int *,int ) ;

pdf_obj *
FUNC_2(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2)
{
 pdf_xref_entry *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 return FUNC_1(VAR_0, VAR_3->obj);
}
