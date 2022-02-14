
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ean13 ;


 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static ean13
FUNC_1(const char *VAR_0)
{
 ean13 VAR_1 = 0;

 while (*VAR_0)
 {
  if (FUNC_0((unsigned char) *VAR_0))
   VAR_1 = 10 * VAR_1 + (*VAR_0 - '0');
  VAR_0++;
 }
 return (VAR_1 << 1);
}
