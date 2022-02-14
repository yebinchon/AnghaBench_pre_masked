
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,size_t) ;

bool
FUNC_1(const char *VAR_0, size_t VAR_1, bool *VAR_2)
{
 switch (*VAR_0)
 {
  case 't':
  case 'T':
   if (FUNC_0(VAR_0, "true", VAR_1) == 0)
   {
    if (VAR_2)
     *VAR_2 = 1;
    return 1;
   }
   break;
  case 'f':
  case 'F':
   if (FUNC_0(VAR_0, "false", VAR_1) == 0)
   {
    if (VAR_2)
     *VAR_2 = 0;
    return 1;
   }
   break;
  case 'y':
  case 'Y':
   if (FUNC_0(VAR_0, "yes", VAR_1) == 0)
   {
    if (VAR_2)
     *VAR_2 = 1;
    return 1;
   }
   break;
  case 'n':
  case 'N':
   if (FUNC_0(VAR_0, "no", VAR_1) == 0)
   {
    if (VAR_2)
     *VAR_2 = 0;
    return 1;
   }
   break;
  case 'o':
  case 'O':

   if (FUNC_0(VAR_0, "on", (VAR_1 > 2 ? VAR_1 : 2)) == 0)
   {
    if (VAR_2)
     *VAR_2 = 1;
    return 1;
   }
   else if (FUNC_0(VAR_0, "off", (VAR_1 > 2 ? VAR_1 : 2)) == 0)
   {
    if (VAR_2)
     *VAR_2 = 0;
    return 1;
   }
   break;
  case '1':
   if (VAR_1 == 1)
   {
    if (VAR_2)
     *VAR_2 = 1;
    return 1;
   }
   break;
  case '0':
   if (VAR_1 == 1)
   {
    if (VAR_2)
     *VAR_2 = 0;
    return 1;
   }
   break;
  default:
   break;
 }

 if (VAR_2)
  *VAR_2 = 0;
 return 0;
}
