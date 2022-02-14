
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char*,int) ;

int FUNC_2(const char *VAR_0)
{
 static char *VAR_1[] =
 {
  "version",
  "meminfo",
  "memdebug",
  "detect",
  "devices",
  "oss",
  "cards",
  "timers",
  "synth",
  "pcm",
  "seq",
  ((void*)0)
 };
 char **VAR_2 = VAR_1;

 while (*VAR_2) {
  if (!FUNC_0(*VAR_2, VAR_0))
   return 0;
  VAR_2++;
 }
 if (!FUNC_1(VAR_0, "card", 4))
  return 0;
 return 1;
}
