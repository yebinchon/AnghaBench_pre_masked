
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct mii_bus {int priv; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int,int,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static u32 FUNC_7(struct mii_bus *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3;
 u16 VAR_4;
 u32 VAR_5, VAR_6;

 VAR_1 = (VAR_1 & 0xfffffffc) >> 2;
 VAR_3 = FUNC_5(VAR_1);
 VAR_4 = FUNC_6(VAR_1);

 FUNC_3(VAR_2);
 FUNC_1(VAR_0->priv, 0x1f, 0x10, FUNC_4(VAR_1));
 VAR_6 = (u32) FUNC_0(VAR_0->priv, VAR_3, VAR_4);
 VAR_5 = (u32) FUNC_0(VAR_0->priv, VAR_3, VAR_4 + 1);
 FUNC_2(VAR_2);

 return (VAR_5 << 16) | VAR_6;
}
