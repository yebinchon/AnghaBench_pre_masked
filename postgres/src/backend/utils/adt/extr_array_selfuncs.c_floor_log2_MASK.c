
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



__attribute__((used)) static int
FUNC_0(uint32 VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0 == 0)
  return -1;
 if (VAR_0 >= (1 << 16))
 {
  VAR_0 >>= 16;
  VAR_1 += 16;
 }
 if (VAR_0 >= (1 << 8))
 {
  VAR_0 >>= 8;
  VAR_1 += 8;
 }
 if (VAR_0 >= (1 << 4))
 {
  VAR_0 >>= 4;
  VAR_1 += 4;
 }
 if (VAR_0 >= (1 << 2))
 {
  VAR_0 >>= 2;
  VAR_1 += 2;
 }
 if (VAR_0 >= (1 << 1))
 {
  VAR_1 += 1;
 }
 return VAR_1;
}
