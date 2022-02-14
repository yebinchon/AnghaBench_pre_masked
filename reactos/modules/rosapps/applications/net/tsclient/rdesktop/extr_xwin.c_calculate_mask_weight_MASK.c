
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static unsigned
FUNC_0(uint32 VAR_0)
{
 unsigned VAR_1 = 0;
 do
 {
  VAR_1 += (VAR_0 & 1);
 }
 while (VAR_0 >>= 1);
 return VAR_1;
}
