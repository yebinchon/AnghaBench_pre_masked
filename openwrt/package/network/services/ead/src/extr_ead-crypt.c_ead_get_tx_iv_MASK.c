
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint32_t
FUNC_0(void)
{
 unsigned int VAR_3;

 VAR_3 = 1 + ((VAR_2 >> 2 * VAR_1) & 0x3);
 VAR_1 = (VAR_1 + 1) % 16;
 VAR_0 += VAR_3;

 return VAR_0;
}
