
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 unsigned long FUNC_0 (char*,char*) ;

unsigned long FUNC_1(char *VAR_0, char *VAR_1,
      unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_3 += VAR_2 + sizeof(uint32_t);
 VAR_3 += (4 - VAR_3 % 4);

 return VAR_3;
}
