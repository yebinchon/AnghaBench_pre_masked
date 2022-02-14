
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static void FUNC_2(char *VAR_0)
{
 char *VAR_1;

 VAR_1 = FUNC_1(VAR_0, '/');
 if (VAR_1) {
  VAR_1++;
 } else {
  VAR_1 = "php";
 }

 FUNC_0( "Usage: %s [-q] [-h] [-s] [-v] [-i] [-f <file>]\n"
    "       %s <file> [args...]\n"
    "  -a               Run interactively\n"
    "  -b <address:port>|<port> Bind Path for external FASTCGI Server mode\n"
    "  -C               Do not chdir to the script's directory\n"
    "  -c <path>|<file> Look for php.ini file in this directory\n"
    "  -n               No php.ini file will be used\n"
    "  -d foo[=bar]     Define INI entry foo with value 'bar'\n"
    "  -e               Generate extended information for debugger/profiler\n"
    "  -f <file>        Parse <file>.  Implies `-q'\n"
    "  -h               This help\n"
    "  -i               PHP information\n"
    "  -l               Syntax check only (lint)\n"
    "  -m               Show compiled in modules\n"
    "  -q               Quiet-mode.  Suppress HTTP Header output.\n"
    "  -s               Display colour syntax highlighted source.\n"
    "  -v               Version number\n"
    "  -w               Display source with stripped comments and whitespace.\n"
    "  -z <file>        Load Zend extension <file>.\n"
    "  -T <count>       Measure execution time of script repeated <count> times.\n",
    VAR_1, VAR_1);
}
