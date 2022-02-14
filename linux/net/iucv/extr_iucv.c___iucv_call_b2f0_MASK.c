
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iucv_param {int dummy; } iucv_param ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, union iucv_param *VAR_1)
{
 register unsigned long VAR_2 asm ("0");
 register unsigned long VAR_3 asm ("1");
 int VAR_4;

 VAR_2 = VAR_0;
 VAR_3 = (unsigned long)VAR_1;
 asm volatile(
  "	.long 0xb2f01000\n"
  "	ipm	%0\n"
  "	srl	%0,28\n"
  : "=d" (VAR_4), "=m" (*VAR_1), "+d" (VAR_2), "+a" (VAR_3)
  : "m" (*VAR_1) : "cc");
 return VAR_4;
}
