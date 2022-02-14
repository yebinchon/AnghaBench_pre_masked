
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_resource ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_context ;


 char* FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,int ,int ,char*,int *,int *,int ,int *) ;
 int FUNC_5 (int *,int *,int *,char**,int **,char**) ;

void
FUNC_6(fz_context *VAR_1, xps_document *VAR_2, fz_matrix VAR_3, fz_rect VAR_4,
 char *VAR_5, xps_resource *VAR_6, fz_xml *VAR_7)
{
 fz_xml *VAR_8;

 char *VAR_9;
 char *VAR_10;
 fz_xml *VAR_11 = ((void*)0);

 VAR_10 = FUNC_0(VAR_7, "Visual");

 for (VAR_8 = FUNC_1(VAR_7); VAR_8; VAR_8 = FUNC_3(VAR_8))
 {
  if (FUNC_2(VAR_8, "VisualBrush.Visual"))
   VAR_11 = FUNC_1(VAR_8);
 }

 VAR_9 = VAR_5;
 FUNC_5(VAR_1, VAR_2, VAR_6, &VAR_10, &VAR_11, &VAR_9);

 if (VAR_11)
 {
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_9, VAR_6, VAR_7, VAR_0, VAR_11);
 }
}
