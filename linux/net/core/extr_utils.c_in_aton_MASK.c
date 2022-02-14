
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (unsigned int) ;

__be32 FUNC_1(const char *VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;
 int VAR_3;

 VAR_1 = 0;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  VAR_1 <<= 8;
  if (*VAR_0 != '\0') {
   VAR_2 = 0;
   while (*VAR_0 != '\0' && *VAR_0 != '.' && *VAR_0 != '\n') {
    VAR_2 *= 10;
    VAR_2 += *VAR_0 - '0';
    VAR_0++;
   }
   VAR_1 |= VAR_2;
   if (*VAR_0 != '\0')
    VAR_0++;
  }
 }
 return FUNC_0(VAR_1);
}
