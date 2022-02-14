
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(char *VAR_2, uint32_t VAR_3, int VAR_4)
{
 char *VAR_5 = VAR_2;
 int VAR_6 = VAR_4;

 VAR_5 += VAR_4;
 while (VAR_6-- > 0) {
  *--VAR_5 = (char)('0' + (VAR_3 & 7));
  VAR_3 >>= 3;
 }

 if (VAR_3 == 0)
  return VAR_1;


 while (VAR_4-- > 0)
  *VAR_5++ = '7';

 return VAR_0;
}
