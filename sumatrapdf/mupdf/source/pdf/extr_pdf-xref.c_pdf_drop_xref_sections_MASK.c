
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_incremental_sections; scalar_t__ num_xref_sections; int * xref_sections; scalar_t__ saved_num_xref_sections; int * saved_xref_sections; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_0, pdf_document *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, VAR_1->saved_xref_sections, VAR_1->saved_num_xref_sections);
 FUNC_0(VAR_0, VAR_1, VAR_1->xref_sections, VAR_1->num_xref_sections);

 VAR_1->saved_xref_sections = ((void*)0);
 VAR_1->saved_num_xref_sections = 0;
 VAR_1->xref_sections = ((void*)0);
 VAR_1->num_xref_sections = 0;
 VAR_1->num_incremental_sections = 0;
}
