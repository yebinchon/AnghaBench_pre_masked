
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;
typedef int tmsize_t ;


 int FUNC_0 (int) ;

void
FUNC_1(register uint16* VAR_0, tmsize_t VAR_1)
{
 register unsigned char* VAR_2;
 register unsigned char VAR_3;
 FUNC_0(sizeof(uint16)==2);

 while (VAR_1-- > 0) {
  VAR_2 = (unsigned char*) VAR_0;
  VAR_3 = VAR_2[1]; VAR_2[1] = VAR_2[0]; VAR_2[0] = VAR_3;
  VAR_0++;
 }
}
