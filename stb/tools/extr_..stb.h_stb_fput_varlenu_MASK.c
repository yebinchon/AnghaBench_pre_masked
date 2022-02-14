
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (unsigned int,int *) ;

void FUNC_1(FILE *VAR_0, unsigned int VAR_1)
{
   if (VAR_1 >= 0x10000000) FUNC_0(0xF0,VAR_0);
   if (VAR_1 >= 0x00200000) FUNC_0((VAR_1 < 0x10000000 ? 0xE0 : 0)+(VAR_1>>24),VAR_0);
   if (VAR_1 >= 0x00004000) FUNC_0((VAR_1 < 0x00200000 ? 0xC0 : 0)+(VAR_1>>16),VAR_0);
   if (VAR_1 >= 0x00000080) FUNC_0((VAR_1 < 0x00004000 ? 0x80 : 0)+(VAR_1>> 8),VAR_0);
   FUNC_0(VAR_1,VAR_0);
}
