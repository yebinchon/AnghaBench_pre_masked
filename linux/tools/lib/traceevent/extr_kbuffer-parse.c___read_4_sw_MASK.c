
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(void *VAR_0)
{
 unsigned int VAR_1 = *(unsigned int *)VAR_0;
 unsigned int VAR_2;

 VAR_2 = ((VAR_1 & 0xffULL) << 24) |
  ((VAR_1 & (0xffULL << 8)) << 8) |
  ((VAR_1 & (0xffULL << 16)) >> 8) |
  ((VAR_1 & (0xffULL << 24)) >> 24);

 return VAR_2;
}
