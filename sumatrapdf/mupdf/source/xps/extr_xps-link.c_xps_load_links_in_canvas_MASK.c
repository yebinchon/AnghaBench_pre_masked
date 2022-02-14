
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* parent; } ;
typedef TYPE_1__ xps_resource ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_matrix ;
typedef int fz_link ;
typedef int fz_context ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,TYPE_1__*) ;
 int FUNC_6 (int *,int *,int ,char*,TYPE_1__*,int *,int **) ;
 TYPE_1__* FUNC_7 (int *,int *,char*,int *) ;
 int FUNC_8 (int *,int *,char*,int *,int ) ;
 int FUNC_9 (int *,int *,TYPE_1__*,char**,int **,int *) ;

__attribute__((used)) static void
FUNC_10(fz_context *VAR_0, xps_document *VAR_1, fz_matrix VAR_2,
  char *VAR_3, xps_resource *VAR_4, fz_xml *VAR_5, fz_link **VAR_6)
{
 xps_resource *VAR_7 = ((void*)0);
 fz_xml *VAR_8;

 char *VAR_9 = FUNC_1(VAR_5, "FixedPage.NavigateUri");
 char *VAR_10 = FUNC_1(VAR_5, "RenderTransform");
 fz_xml *VAR_11 = FUNC_2(FUNC_3(VAR_5, "Canvas.RenderTransform"));
 fz_xml *VAR_12 = FUNC_2(FUNC_3(VAR_5, "Canvas.Resources"));

 if (VAR_12)
 {
  VAR_7 = FUNC_7(VAR_0, VAR_1, VAR_3, VAR_12);
  if (VAR_7)
  {
   VAR_7->parent = VAR_4;
   VAR_4 = VAR_7;
  }
 }

 FUNC_9(VAR_0, VAR_1, VAR_4, &VAR_10, &VAR_11, ((void*)0));

 VAR_2 = FUNC_8(VAR_0, VAR_1, VAR_10, VAR_11, VAR_2);

 if (VAR_9)
  FUNC_0(VAR_0, "FixedPage.NavigateUri attribute on Canvas element");

 for (VAR_8 = FUNC_2(VAR_5); VAR_8; VAR_8 = FUNC_4(VAR_8))
  FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_8, VAR_6);

 if (VAR_7)
  FUNC_5(VAR_0, VAR_1, VAR_7);
}
