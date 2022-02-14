
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_obj ;
struct TYPE_5__ {scalar_t__ rev_page_map; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2)
{
 if (VAR_1->rev_page_map)
  return FUNC_0(VAR_0, VAR_1, FUNC_2(VAR_0, VAR_2));
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}
