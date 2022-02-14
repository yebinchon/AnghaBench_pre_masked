
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int FUNC_0 (char*,int,char*,char const*,float,...) ;

void
FUNC_1(fz_context *VAR_0, char *VAR_1, int VAR_2, const char *VAR_3, float VAR_4, const float VAR_5[3])
{
 if (VAR_5[0] > 0 || VAR_5[1] > 0 || VAR_5[2] > 0)
  FUNC_0(VAR_1, VAR_2, "/%s %g Tf %g %g %g rg", VAR_3, VAR_4, VAR_5[0], VAR_5[1], VAR_5[2]);
 else
  FUNC_0(VAR_1, VAR_2, "/%s %g Tf", VAR_3, VAR_4);
}
