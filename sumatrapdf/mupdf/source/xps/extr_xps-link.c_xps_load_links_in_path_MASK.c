
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_resource ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_rect ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_link ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int ,char*,char*,int **) ;
 int * FUNC_6 (int *,int *,char*,int*) ;
 int * FUNC_7 (int *,int *,int *,int *,int ,int*) ;
 int FUNC_8 (int *,int *,char*,int *,int ) ;
 int FUNC_9 (int *,int *,int *,char**,int **,int *) ;

__attribute__((used)) static void
FUNC_10(fz_context *VAR_0, xps_document *VAR_1, fz_matrix VAR_2,
  char *VAR_3, xps_resource *VAR_4, fz_xml *VAR_5, fz_link **VAR_6)
{
 char *VAR_7 = FUNC_2(VAR_5, "FixedPage.NavigateUri");
 if (VAR_7)
 {
  char *VAR_8 = FUNC_2(VAR_5, "RenderTransform");
  fz_xml *VAR_9 = FUNC_3(FUNC_4(VAR_5, "Path.RenderTransform"));

  char *VAR_10 = FUNC_2(VAR_5, "Data");
  fz_xml *VAR_11 = FUNC_3(FUNC_4(VAR_5, "Path.Data"));

  fz_path *VAR_12 = ((void*)0);
  int VAR_13;
  fz_rect VAR_14;

  FUNC_9(VAR_0, VAR_1, VAR_4, &VAR_10, &VAR_11, ((void*)0));
  FUNC_9(VAR_0, VAR_1, VAR_4, &VAR_8, &VAR_9, ((void*)0));

  VAR_2 = FUNC_8(VAR_0, VAR_1, VAR_8, VAR_9, VAR_2);

  if (VAR_10)
   VAR_12 = FUNC_6(VAR_0, VAR_1, VAR_10, &VAR_13);
  else if (VAR_11)
   VAR_12 = FUNC_7(VAR_0, VAR_1, VAR_4, VAR_11, 0, &VAR_13);
  if (VAR_12)
  {
   VAR_14 = FUNC_0(VAR_0, VAR_12, ((void*)0), VAR_2);
   FUNC_1(VAR_0, VAR_12);
   FUNC_5(VAR_0, VAR_1, VAR_14, VAR_3, VAR_7, VAR_6);
  }
 }
}
