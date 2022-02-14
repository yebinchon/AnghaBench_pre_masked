
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

size_t FUNC_1(const unsigned char *VAR_0, size_t VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *)VAR_0;
 while(*VAR_2 != 0 && VAR_1 > 0) {
  if (!FUNC_0(*VAR_2) )
   VAR_1--;
  VAR_2++;
 }

 return (size_t)(VAR_2 - VAR_0);
}
