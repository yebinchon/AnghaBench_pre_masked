
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(unsigned char *VAR_0, const unsigned char *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 while (VAR_2-- > 0)
 {
  VAR_3 |= (*VAR_0++ = *VAR_1++);
  VAR_3 |= (*VAR_0++ = *VAR_1++);
  VAR_3 |= (*VAR_0++ = *VAR_1++);
 }

 return VAR_3 == 0;
}
