
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {int priv; } ;


 int FUNC_0 (int ,int,int,int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct mii_bus *VAR_0, u32 VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 u16 VAR_4;
 u16 VAR_5;

 VAR_1 = (VAR_1 & 0xfffffffc) >> 2;
 VAR_4 = FUNC_4(VAR_1);
 VAR_5 = FUNC_5(VAR_1);

 FUNC_2(VAR_3);
 FUNC_0(VAR_0->priv, 0x1f, 0x10, FUNC_3(VAR_1));
 FUNC_0(VAR_0->priv, VAR_4, VAR_5 + 1, (VAR_2 >> 16));
 FUNC_0(VAR_0->priv, VAR_4, VAR_5, (VAR_2 & 0xffff));
 FUNC_1(VAR_3);
}
