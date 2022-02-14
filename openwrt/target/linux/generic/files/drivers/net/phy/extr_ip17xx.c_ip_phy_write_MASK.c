
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ip17xx_state {int mii_bus; } ;


 int FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct ip17xx_state *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 int VAR_4;




 VAR_4 = FUNC_0(VAR_0->mii_bus, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  FUNC_2("IP17xx: Unable to write MII register %d,%d: error %d\n", VAR_1, VAR_2, -VAR_4);
 return VAR_4;
}
