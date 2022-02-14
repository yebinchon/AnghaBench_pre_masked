
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rev_page_count; int * rev_page_map; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(fz_context *VAR_0, pdf_document *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->rev_page_map);
 VAR_1->rev_page_map = ((void*)0);
 VAR_1->rev_page_count = 0;
}
