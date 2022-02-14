
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned
FUNC_0(const char *VAR_0, unsigned VAR_1, char *VAR_2)
{
 static const char VAR_3[] = "0123456789abcdef";
 const char *VAR_4 = VAR_0 + VAR_1;

 while (VAR_0 < VAR_4)
 {
  *VAR_2++ = VAR_3[(*VAR_0 >> 4) & 0xF];
  *VAR_2++ = VAR_3[*VAR_0 & 0xF];
  VAR_0++;
 }
 return VAR_1 * 2;
}
