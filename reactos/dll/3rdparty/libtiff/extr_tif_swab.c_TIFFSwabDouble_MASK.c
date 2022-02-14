
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

void
FUNC_1(double *VAR_0)
{
 register unsigned char* VAR_1 = (unsigned char*) VAR_0;
 unsigned char VAR_2;
 FUNC_0(sizeof(double)==8);
 VAR_2 = VAR_1[7]; VAR_1[7] = VAR_1[0]; VAR_1[0] = VAR_2;
 VAR_2 = VAR_1[6]; VAR_1[6] = VAR_1[1]; VAR_1[1] = VAR_2;
 VAR_2 = VAR_1[5]; VAR_1[5] = VAR_1[2]; VAR_1[2] = VAR_2;
 VAR_2 = VAR_1[4]; VAR_1[4] = VAR_1[3]; VAR_1[3] = VAR_2;
}
