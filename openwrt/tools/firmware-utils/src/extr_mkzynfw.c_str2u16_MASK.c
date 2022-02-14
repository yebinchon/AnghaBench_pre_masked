
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char**,int ) ;

int
FUNC_1(char *VAR_1, uint16_t *VAR_2)
{
 char *VAR_3 = ((void*)0);
 uint32_t VAR_4;

 VAR_0=0;
 VAR_4 = FUNC_0(VAR_1, &VAR_3, 0);
 if (VAR_0 || (VAR_3==VAR_1) || ((VAR_3 != ((void*)0)) && *VAR_3) || (VAR_4 >= 0x10000)) {
  return -1;
 }

 *VAR_2 = VAR_4 & 0xFFFF;
 return 0;
}
