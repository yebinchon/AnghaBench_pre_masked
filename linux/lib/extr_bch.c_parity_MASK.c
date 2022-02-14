
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(unsigned int VAR_0)
{




 VAR_0 ^= VAR_0 >> 1;
 VAR_0 ^= VAR_0 >> 2;
 VAR_0 = (VAR_0 & 0x11111111U) * 0x11111111U;
 return (VAR_0 >> 28) & 1;
}
