
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static u64 FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1, VAR_2;

 asm volatile("rdpmc" : "=a" (VAR_1), "=d" (VAR_2) : "c" (VAR_0));

 return VAR_1 | ((u64)VAR_2) << 32;
}
