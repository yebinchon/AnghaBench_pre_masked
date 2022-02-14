
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0)
{
  static const char *const VAR_1[] = {
  "switches:",
  "-d           set $DEBUG to true (same as `mruby -d`)",
  "-r library   same as `mruby -r`",
  "-v           print version number, then run in verbose mode",
  "--verbose    run in verbose mode",
  "--version    print the version",
  "--copyright  print the copyright",
  ((void*)0)
  };
  const char *const *VAR_2 = VAR_1;

  FUNC_0("Usage: %s [switches] [programfile] [arguments]\n", VAR_0);
  while (*VAR_2)
    FUNC_0("  %s\n", *VAR_2++);
}
