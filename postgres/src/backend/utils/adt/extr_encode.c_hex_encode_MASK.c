
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void** VAR_0 ;

unsigned
FUNC_0(const char *VAR_1, unsigned VAR_2, char *VAR_3)
{
 const char *VAR_4 = VAR_1 + VAR_2;

 while (VAR_1 < VAR_4)
 {
  *VAR_3++ = VAR_0[(*VAR_1 >> 4) & 0xF];
  *VAR_3++ = VAR_0[*VAR_1 & 0xF];
  VAR_1++;
 }
 return VAR_2 * 2;
}
