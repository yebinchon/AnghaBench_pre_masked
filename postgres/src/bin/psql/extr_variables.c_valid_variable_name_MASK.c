
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;
 int * FUNC_1 (char*,unsigned char const) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_0)
{
 const unsigned char *VAR_1 = (const unsigned char *) VAR_0;


 if (*VAR_1 == '\0')
  return 0;

 while (*VAR_1)
 {
  if (FUNC_0(*VAR_1) ||
   FUNC_1("ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz"
       "_0123456789", *VAR_1) != ((void*)0))
   VAR_1++;
  else
   return 0;
 }

 return 1;
}
