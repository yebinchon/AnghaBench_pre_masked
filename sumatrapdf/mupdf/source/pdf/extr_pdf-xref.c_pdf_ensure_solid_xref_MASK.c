
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_xref_sections; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int,scalar_t__) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void FUNC_2(fz_context *VAR_0, pdf_document *VAR_1, int VAR_2)
{
 if (VAR_1->num_xref_sections == 0)
  FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_1->num_xref_sections-1);
}
