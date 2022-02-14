
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_widget ;
typedef int pdf_obj ;
struct TYPE_2__ {int obj; } ;
typedef TYPE_1__ pdf_annot ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 char* FUNC_6 (int *,int *) ;

int FUNC_7(fz_context *VAR_1, pdf_widget *VAR_2, const char *VAR_3[])
{
 pdf_annot *VAR_4 = (pdf_annot *)VAR_2;
 pdf_obj *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_3(VAR_1, VAR_4->obj, FUNC_0(VAR_0));

 if (FUNC_5(VAR_1, VAR_5))
 {
  if (VAR_3)
   VAR_3[0] = FUNC_6(VAR_1, VAR_5);
  return 1;
 }
 else
 {
  VAR_7 = FUNC_2(VAR_1, VAR_5);
  if (VAR_3)
  {
   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   {
    pdf_obj *VAR_8 = FUNC_1(VAR_1, VAR_5, VAR_6);
    if (FUNC_4(VAR_1, VAR_8))
     VAR_8 = FUNC_1(VAR_1, VAR_8, 1);
    VAR_3[VAR_6] = FUNC_6(VAR_1, VAR_8);
   }
  }
  return VAR_7;
 }
}
