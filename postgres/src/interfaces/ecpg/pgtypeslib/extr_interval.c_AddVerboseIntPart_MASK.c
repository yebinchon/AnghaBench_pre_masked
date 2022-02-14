
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,char const*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(char *VAR_0, int VAR_1, const char *VAR_2,
      bool *VAR_3, bool *VAR_4)
{
 if (VAR_1 == 0)
  return VAR_0;

 if (*VAR_3)
 {
  *VAR_4 = (VAR_1 < 0);
  VAR_1 = FUNC_0(VAR_1);
 }
 else if (*VAR_4)
  VAR_1 = -VAR_1;
 FUNC_1(VAR_0, " %d %s%s", VAR_1, VAR_2, (VAR_1 == 1) ? "" : "s");
 *VAR_3 = 0;
 return VAR_0 + FUNC_2(VAR_0);
}
