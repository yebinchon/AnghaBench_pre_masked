
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static int FUNC_0(char *VAR_0, uint16_t VAR_1)
{
 const char *VAR_2 = "0123456789ABCDEF";

 *VAR_0++ = VAR_2[(VAR_1 >> 12) & 0xF];
 *VAR_0++ = VAR_2[(VAR_1 >> 8) & 0xF];
 *VAR_0++ = VAR_2[(VAR_1 >> 4) & 0xF];
 *VAR_0++ = VAR_2[ VAR_1 & 0xF];

 return 4;
}
