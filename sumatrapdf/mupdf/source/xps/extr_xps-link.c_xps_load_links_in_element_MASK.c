
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_resource ;
typedef int xps_document ;
typedef int fz_xml ;
typedef int fz_matrix ;
typedef int fz_link ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int ,char*,int *,int *,int **) ;
 int FUNC_2 (int *,int *,int ,char*,int *,int *,int **) ;
 int FUNC_3 (int *,int *,int ,char*,int *,int *,int **) ;
 int * FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, xps_document *VAR_1, fz_matrix VAR_2, char *VAR_3, xps_resource *VAR_4, fz_xml *VAR_5, fz_link **VAR_6)
{
 if (FUNC_0(VAR_5, "Path"))
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else if (FUNC_0(VAR_5, "Glyphs"))
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else if (FUNC_0(VAR_5, "Canvas"))
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else if (FUNC_0(VAR_5, "AlternateContent"))
 {
  VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_5);
  if (VAR_5)
   FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
