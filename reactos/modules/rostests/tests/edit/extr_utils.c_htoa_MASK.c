
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;


 int * VAR_0 ;

VOID FUNC_0 (unsigned int VAR_1, char *VAR_2)
{
   int VAR_3;
   VAR_2 += 7;

   for (VAR_3=0;VAR_3<8;VAR_3++)
       {
            *VAR_2-- = VAR_0[VAR_1 & 0x0000000F];
            VAR_1 = VAR_1 >> 4;
       }
}
