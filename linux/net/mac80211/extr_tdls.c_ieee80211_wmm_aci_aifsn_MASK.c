
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 FUNC_0(int VAR_0, bool VAR_1, int VAR_2)
{
 u8 VAR_3;

 VAR_3 = VAR_0 & 0x0f;
 if (VAR_1)
  VAR_3 |= 0x10;
 VAR_3 |= (VAR_2 << 5) & 0x60;
 return VAR_3;
}
