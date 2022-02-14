
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;



UINT8 FUNC_0(UINT8 VAR_0)
{
 if (VAR_0>>7)
 {
  VAR_0 = VAR_0 << 1;
  return (VAR_0^0x1b);
 } else
  return VAR_0<<1;
}
