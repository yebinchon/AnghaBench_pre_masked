
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mt7530_priv {scalar_t__ base; scalar_t__ bus; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (scalar_t__,int,int,int) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static u32
FUNC_4(struct mt7530_priv *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 if (VAR_0->bus) {
  u16 VAR_3, VAR_4;

  FUNC_2(VAR_0->bus, 0x1f, 0x1f, (VAR_1 >> 6) & 0x3ff);
  VAR_4 = FUNC_1(VAR_0->bus, 0x1f, (VAR_1 >> 2) & 0xf);
  VAR_3 = FUNC_1(VAR_0->bus, 0x1f, 0x10);

  return (VAR_3 << 16) | (VAR_4 & 0xffff);
 }

 VAR_2 = FUNC_0(VAR_0->base + VAR_1);
 FUNC_3("MT7530 MDIO Read [%04x]=%08x\n", VAR_1, VAR_2);

 return VAR_2;
}
