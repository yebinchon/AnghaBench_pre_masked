
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
  VAR_0 = ((VAR_0 & 0xAAAA) >> 1) | ((VAR_0 & 0x5555) << 1);
  VAR_0 = ((VAR_0 & 0xCCCC) >> 2) | ((VAR_0 & 0x3333) << 2);
  VAR_0 = ((VAR_0 & 0xF0F0) >> 4) | ((VAR_0 & 0x0F0F) << 4);
  VAR_0 = ((VAR_0 & 0xFF00) >> 8) | ((VAR_0 & 0x00FF) << 8);
  return VAR_0;
}
