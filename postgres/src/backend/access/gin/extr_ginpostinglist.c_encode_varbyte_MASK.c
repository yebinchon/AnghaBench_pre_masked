
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64 ;



__attribute__((used)) static void
FUNC_0(uint64 VAR_0, unsigned char **VAR_1)
{
 unsigned char *VAR_2 = *VAR_1;

 while (VAR_0 > 0x7F)
 {
  *(VAR_2++) = 0x80 | (VAR_0 & 0x7F);
  VAR_0 >>= 7;
 }
 *(VAR_2++) = (unsigned char) VAR_0;

 *VAR_1 = VAR_2;
}
