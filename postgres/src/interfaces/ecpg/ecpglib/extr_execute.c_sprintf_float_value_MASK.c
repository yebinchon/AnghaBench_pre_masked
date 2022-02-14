
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (float) ;
 scalar_t__ FUNC_1 (float) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0, float VAR_1, const char *VAR_2)
{
 if (FUNC_1(VAR_1))
  FUNC_2(VAR_0, "%s%s", "NaN", VAR_2);
 else if (FUNC_0(VAR_1))
 {
  if (VAR_1 < 0)
   FUNC_2(VAR_0, "%s%s", "-Infinity", VAR_2);
  else
   FUNC_2(VAR_0, "%s%s", "Infinity", VAR_2);
 }
 else
  FUNC_2(VAR_0, "%.15g%s", VAR_1, VAR_2);
}
