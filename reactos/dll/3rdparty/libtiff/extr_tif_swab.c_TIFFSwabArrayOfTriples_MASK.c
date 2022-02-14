
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int tmsize_t ;



void
FUNC_0(register uint8* VAR_0, tmsize_t VAR_1)
{
 unsigned char* VAR_2;
 unsigned char VAR_3;


 while (VAR_1-- > 0) {
  VAR_2 = (unsigned char*) VAR_0;
  VAR_3 = VAR_2[2]; VAR_2[2] = VAR_2[0]; VAR_2[0] = VAR_3;
  VAR_0 += 3;
 }
}
