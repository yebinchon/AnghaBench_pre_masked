
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(int VAR_0) {
 FUNC_0 ("usage: sdb [-0cdehjJv|-D A B] [-|db] "
  "[.file]|[-=]|[-+][(idx)key[:json|=value] ..]\n");
 if (VAR_0 == 2) {
  FUNC_0 ("  -0      terminate results with \\x00\n"
   "  -c      count the number of keys database\n"
   "  -d      decode base64 from stdin\n"
   "  -D      diff two databases\n"
   "  -e      encode stdin as base64\n"
   "  -h      show this help\n"
   "  -j      output in json\n"
   "  -J      enable journaling\n"
   "  -v      show version information\n");
  return 0;
 }
 return VAR_0;
}
