
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const) ;

int FUNC_4(const char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3 = 0, VAR_4;

 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_0); VAR_2++) {
  VAR_4 = FUNC_3(VAR_0[VAR_2]);

  if (FUNC_1("<[(", VAR_4))
   ++VAR_3;
  if (FUNC_1(">])", VAR_4) && VAR_3 > 0)
   --VAR_3;

  if ((!VAR_3) && FUNC_0(VAR_4) && FUNC_1(VAR_1, VAR_4) == 0)
   return VAR_2;
 }

 return 0;
}
