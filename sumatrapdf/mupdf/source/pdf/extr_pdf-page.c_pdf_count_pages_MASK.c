
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ linear_page_count; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;

int
FUNC_3(fz_context *VAR_0, pdf_document *VAR_1)
{


 if (VAR_1->linear_page_count != 0)
  return VAR_1->linear_page_count;
 return FUNC_1(VAR_0, FUNC_0(VAR_0, FUNC_2(VAR_0, VAR_1), "Root/Pages/Count"));
}
