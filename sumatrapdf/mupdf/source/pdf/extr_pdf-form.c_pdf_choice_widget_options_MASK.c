
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


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int) ;
 char* FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int ,int ) ;

int FUNC_5(fz_context *VAR_1, pdf_widget *VAR_2, int VAR_3, const char *VAR_4[])
{
 pdf_annot *VAR_5 = (pdf_annot *)VAR_2;
 pdf_obj *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_4(VAR_1, VAR_5->obj, FUNC_0(VAR_0));
 VAR_8 = FUNC_3(VAR_1, VAR_6);

 if (VAR_4)
 {
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  {
   VAR_9 = FUNC_3(VAR_1, FUNC_1(VAR_1, VAR_6, VAR_7));

   if (VAR_9 == 2)
    if (VAR_3)
     VAR_4[VAR_7] = FUNC_2(VAR_1, FUNC_1(VAR_1, VAR_6, VAR_7), 0);
    else
     VAR_4[VAR_7] = FUNC_2(VAR_1, FUNC_1(VAR_1, VAR_6, VAR_7), 1);
   else
    VAR_4[VAR_7] = FUNC_2(VAR_1, VAR_6, VAR_7);
  }
 }
 return VAR_8;
}
