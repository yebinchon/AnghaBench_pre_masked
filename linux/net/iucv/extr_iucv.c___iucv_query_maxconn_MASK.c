
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(void *VAR_1, unsigned long *VAR_2)
{
 register unsigned long VAR_3 asm ("0");
 register unsigned long VAR_4 asm ("1");
 int VAR_5;

 VAR_3 = VAR_0;
 VAR_4 = (unsigned long) VAR_1;
 asm volatile (
  "	.long	0xb2f01000\n"
  "	ipm	%0\n"
  "	srl	%0,28\n"
  : "=d" (VAR_5), "+d" (VAR_3), "+d" (VAR_4) : : "cc");
 *VAR_2 = VAR_4;
 return VAR_5;
}
