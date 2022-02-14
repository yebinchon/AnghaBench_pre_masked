
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(char *VAR_5)
{
 if (!VAR_5 || !VAR_5[0] || FUNC_1(VAR_5, "-") == 0)
  return 1;

 if (FUNC_0(VAR_5, "a") == 0) {
  VAR_2 = 1;
  VAR_0 = 1;
  VAR_1 = 1;
  VAR_4 = 1;
  return 1;
 }

 for ( ; *VAR_5; VAR_5++)
  switch (*VAR_5) {
  case 'F' : case 'f':
   if (VAR_2)
    return 0;
   VAR_2 = 1;
   break;
  case 'P' : case 'p':
   if (VAR_0)
    return 0;
   VAR_0 = 1;
   break;

  case 'Z' : case 'z':
   if (VAR_1)
    return 0;
   VAR_1 = 1;
   break;

  case 'U' : case 'u':
   if (VAR_4)
    return 0;
   VAR_4 = 1;
   break;

  case 'T' : case 't':
   if (VAR_3)
    return 0;
   VAR_3 = 1;
   break;
  default:
   return 0;
  }
 return 1;
}
