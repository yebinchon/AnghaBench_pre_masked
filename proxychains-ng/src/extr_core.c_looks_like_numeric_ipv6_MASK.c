
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
 if(!FUNC_0(VAR_0, ':')) return 0;
 const char* VAR_1= VAR_0;
 while(1) switch(*(VAR_1++)) {
  case 0: return 1;
  case ':': case '.':
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
  case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
  case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
   break;
  default: return 0;
 }
}
