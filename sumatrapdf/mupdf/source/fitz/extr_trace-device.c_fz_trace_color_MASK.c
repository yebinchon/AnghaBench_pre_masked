
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_output ;
typedef int fz_context ;
typedef int fz_colorspace ;


 int FUNC_0 (int *,int *) ;
 float FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_output *VAR_1, fz_colorspace *VAR_2, const float *VAR_3, float VAR_4)
{
 int VAR_5, VAR_6;
 if (VAR_2)
 {
  VAR_6 = FUNC_0(VAR_0, VAR_2);
  FUNC_2(VAR_0, VAR_1, " colorspace=\"%s\" color=\"", FUNC_1(VAR_0, VAR_2));
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_2(VAR_0, VAR_1, "%s%g", VAR_5 == 0 ? "" : " ", VAR_3[VAR_5]);
  FUNC_2(VAR_0, VAR_1, "\"");
 }
 if (VAR_4 < 1)
  FUNC_2(VAR_0, VAR_1, " alpha=\"%g\"", VAR_4);
}
