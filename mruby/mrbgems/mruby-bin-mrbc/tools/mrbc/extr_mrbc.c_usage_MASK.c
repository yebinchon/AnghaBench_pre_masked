
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
  "-c           check syntax only",
  "-o<outfile>  place the output into <outfile>",
  "-v           print version number, then turn on verbose mode",
  "-g           produce debugging information",
  "-B<symbol>   binary <symbol> output in C language format",
  "-e           generate little endian iseq data",
  "-E           generate big endian iseq data",
  "--remove-lv  remove local variables",
  "--verbose    run at verbose mode",
  "--version    print the version",
  "--copyright  print the copyright",
  ((void*)0)
  };
  const char *const *VAR_2 = VAR_1;

  FUNC_0("Usage: %s [switches] programfile\n", VAR_0);
  while (*VAR_2)
    FUNC_0("  %s\n", *VAR_2++);
}
