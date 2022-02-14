
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0)
{
 VAR_0 ^= VAR_0>>11;
 VAR_0 ^= VAR_0<<7 & 0x9D2C5680;
 VAR_0 ^= VAR_0<<15 & 0xEFC60000;
 VAR_0 ^= VAR_0>>18;
 return VAR_0;
}
