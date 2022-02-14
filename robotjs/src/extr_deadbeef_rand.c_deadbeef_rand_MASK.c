
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

uint32_t FUNC_0(void)
{
 VAR_1 = (VAR_1 << 7) ^ ((VAR_1 >> 25) + VAR_0);
 VAR_0 = (VAR_0 << 7) ^ ((VAR_0 >> 25) + 0xdeadbeef);
 return VAR_1;
}
