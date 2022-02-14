
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char const*,char const**) ;
 int FUNC_1 (int *,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3[])
{
  int VAR_4 = -1;
  if (VAR_2) {
    if (VAR_3) {
      VAR_4 = FUNC_0(VAR_2, VAR_3);
    }
    if (VAR_4 >= 0)
      FUNC_1(VAR_0, "%s=\"%s\" # %s\n", VAR_1, VAR_2, VAR_3[VAR_4]);
    else
      FUNC_1(VAR_0, "%s=\"%s\"\n", VAR_1, VAR_2);
  } else {
    FUNC_1(VAR_0, "%s\n", VAR_1);
  }
}
