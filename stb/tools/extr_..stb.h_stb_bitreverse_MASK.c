
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(unsigned int VAR_0)
{
  VAR_0 = ((VAR_0 & 0xAAAAAAAA) >> 1) | ((VAR_0 & 0x55555555) << 1);
  VAR_0 = ((VAR_0 & 0xCCCCCCCC) >> 2) | ((VAR_0 & 0x33333333) << 2);
  VAR_0 = ((VAR_0 & 0xF0F0F0F0) >> 4) | ((VAR_0 & 0x0F0F0F0F) << 4);
  VAR_0 = ((VAR_0 & 0xFF00FF00) >> 8) | ((VAR_0 & 0x00FF00FF) << 8);
  return (VAR_0 >> 16) | (VAR_0 << 16);
}
