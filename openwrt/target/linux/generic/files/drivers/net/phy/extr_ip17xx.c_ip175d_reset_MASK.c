
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip17xx_state {scalar_t__ vlan_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip17xx_state*) ;
 int FUNC_1 (struct ip17xx_state*,int,int,int) ;
 int FUNC_2 (struct ip17xx_state*,int,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct ip17xx_state *VAR_1)
{
 int VAR_2 = 0;


 VAR_2 |= FUNC_2(VAR_1, 21, 22, 0x0003, 0x0000);


 VAR_2 |= FUNC_1(VAR_1, 22, 3, 0x8100);

 VAR_1->vlan_enabled = 0;
 VAR_2 |= FUNC_0(VAR_1);

 return (VAR_2 ? -VAR_0 : 0);
}
