
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_resource ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_text ;
typedef int fz_rect ;
typedef int fz_matrix ;
typedef int fz_link ;
typedef int fz_font ;
typedef int fz_context ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *,char*) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int *,int *,int ,char*,char*,int **) ;
 int * FUNC_10 (int *,int *,char*,char*,char*) ;
 int * FUNC_11 (int *,int *,int ,int *,int ,int ,int ,int,int,char*,char*) ;
 int FUNC_12 (int *,int *,char*,int *,int ) ;
 int FUNC_13 (int *,int *,int *,char**,int **,int *) ;

__attribute__((used)) static void
FUNC_14(fz_context *VAR_0, xps_document *VAR_1, fz_matrix VAR_2,
  char *VAR_3, xps_resource *VAR_4, fz_xml *VAR_5, fz_link **VAR_6)
{
 char *VAR_7 = FUNC_5(VAR_5, "FixedPage.NavigateUri");
 if (VAR_7)
 {
  char *VAR_8 = FUNC_5(VAR_5, "RenderTransform");
  fz_xml *VAR_9 = FUNC_6(FUNC_7(VAR_5, "Path.RenderTransform"));

  char *VAR_10 = FUNC_5(VAR_5, "BidiLevel");
  char *VAR_11 = FUNC_5(VAR_5, "FontRenderingEmSize");
  char *VAR_12 = FUNC_5(VAR_5, "FontUri");
  char *VAR_13 = FUNC_5(VAR_5, "OriginX");
  char *VAR_14 = FUNC_5(VAR_5, "OriginY");
  char *VAR_15 = FUNC_5(VAR_5, "IsSideways");
  char *VAR_16 = FUNC_5(VAR_5, "Indices");
  char *VAR_17 = FUNC_5(VAR_5, "UnicodeString");
  char *VAR_18 = FUNC_5(VAR_5, "StyleSimulations");

  int VAR_19 = 0;
  int VAR_20 = 0;
  fz_font *VAR_21;
  fz_text *VAR_22;
  fz_rect VAR_23;

  FUNC_13(VAR_0, VAR_1, VAR_4, &VAR_8, &VAR_9, ((void*)0));

  VAR_2 = FUNC_12(VAR_0, VAR_1, VAR_8, VAR_9, VAR_2);

  if (VAR_15)
   VAR_19 = !FUNC_8(VAR_15, "true");
  if (VAR_10)
   VAR_20 = FUNC_0(VAR_10);

  VAR_21 = FUNC_10(VAR_0, VAR_1, VAR_3, VAR_12, VAR_18);
  if (!VAR_21)
   return;
  VAR_22 = FUNC_11(VAR_0, VAR_1, VAR_2, VAR_21, FUNC_1(VAR_11),
    FUNC_1(VAR_13), FUNC_1(VAR_14),
    VAR_19, VAR_20, VAR_16, VAR_17);
  VAR_23 = FUNC_2(VAR_0, VAR_22, ((void*)0), VAR_2);
  FUNC_4(VAR_0, VAR_22);
  FUNC_3(VAR_0, VAR_21);

  FUNC_9(VAR_0, VAR_1, VAR_23, VAR_3, VAR_7, VAR_6);
 }
}
