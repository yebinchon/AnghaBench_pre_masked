
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16 ;


 int FUNC_0 (int) ;

void
FUNC_1(uint16* VAR_0)
{
 register unsigned char* VAR_1 = (unsigned char*) VAR_0;
 unsigned char VAR_2;
 FUNC_0(sizeof(uint16)==2);
 VAR_2 = VAR_1[1]; VAR_1[1] = VAR_1[0]; VAR_1[0] = VAR_2;
}
