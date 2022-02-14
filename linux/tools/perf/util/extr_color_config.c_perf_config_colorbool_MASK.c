
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

int FUNC_6(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 if (VAR_1) {
  if (!FUNC_4(VAR_1, "never"))
   return 0;
  if (!FUNC_4(VAR_1, "always"))
   return 1;
  if (!FUNC_4(VAR_1, "auto"))
   goto auto_color;
 }


 if (!FUNC_3(VAR_0, VAR_1))
  return 0;


 auto_color:
 if (VAR_2 < 0)
  VAR_2 = FUNC_1(1);
 if (VAR_2 || FUNC_2()) {
  char *VAR_3 = FUNC_0("TERM");
  if (VAR_3 && FUNC_5(VAR_3, "dumb"))
   return 1;
 }
 return 0;
}
