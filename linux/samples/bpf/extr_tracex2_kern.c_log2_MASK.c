
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0)
{
 unsigned int VAR_1;
 unsigned int VAR_2;

 VAR_1 = (VAR_0 > 0xFFFF) << 4; VAR_0 >>= VAR_1;
 VAR_2 = (VAR_0 > 0xFF) << 3; VAR_0 >>= VAR_2; VAR_1 |= VAR_2;
 VAR_2 = (VAR_0 > 0xF) << 2; VAR_0 >>= VAR_2; VAR_1 |= VAR_2;
 VAR_2 = (VAR_0 > 0x3) << 1; VAR_0 >>= VAR_2; VAR_1 |= VAR_2;
 VAR_1 |= (VAR_0 >> 1);
 return VAR_1;
}
