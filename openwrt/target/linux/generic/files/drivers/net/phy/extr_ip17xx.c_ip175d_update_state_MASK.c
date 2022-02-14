
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ip17xx_state {int add_tag; int remove_tag; TYPE_2__* ports; TYPE_1__* vlans; int vlan_enabled; } ;
struct TYPE_4__ {size_t pvid; } ;
struct TYPE_3__ {unsigned int tag; unsigned int ports; } ;


 int VAR_0 ;
 int FUNC_0 (struct ip17xx_state*,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct ip17xx_state *VAR_1)
{
 unsigned int VAR_2 = 0;
 unsigned int VAR_3[16], VAR_4[16], VAR_5[16];
 int VAR_6, VAR_7;
 int VAR_8 = 0;

 for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
  VAR_3[VAR_6] = 0;
  VAR_4[VAR_6] = 0;
  VAR_5[VAR_6] = 0;
  if (!VAR_1->vlan_enabled) {
   VAR_8 |= FUNC_0(VAR_1, 22, 14+VAR_6, VAR_6+1);
   VAR_3[VAR_6] = 0x3f;
   continue;
  }
  if (!VAR_1->vlans[VAR_6].tag) {

   VAR_8 |= FUNC_0(VAR_1, 22, 14+VAR_6, 0);
   continue;
  }
  VAR_2 |= 1 << VAR_6;
  VAR_8 |= FUNC_0(VAR_1, 22, 14+VAR_6, VAR_1->vlans[VAR_6].tag);
  VAR_3[VAR_6] = VAR_1->vlans[VAR_6].ports;
  for (VAR_7 = 0; VAR_7 < 6; VAR_7++) {
   if (VAR_3[VAR_6] & (1 << VAR_7)) {
    if (VAR_1->add_tag & (1 << VAR_7))
     VAR_4[VAR_6] |= 1 << VAR_7;
    if (VAR_1->remove_tag & (1 << VAR_7))
     VAR_5[VAR_6] |= 1 << VAR_7;
   }
  }
 }


 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  VAR_8 |= FUNC_0(VAR_1, 23, VAR_6, VAR_3[2*VAR_6] | (VAR_3[2*VAR_6+1] << 8));
  VAR_8 |= FUNC_0(VAR_1, 23, 8+VAR_6, VAR_4[2*VAR_6] | (VAR_4[2*VAR_6+1] << 8));
  VAR_8 |= FUNC_0(VAR_1, 23, 16+VAR_6, VAR_5[2*VAR_6] | (VAR_5[2*VAR_6+1] << 8));
 }
 VAR_8 |= FUNC_0(VAR_1, 22, 10, VAR_2);


 for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
  VAR_8 |= FUNC_0(VAR_1, 22, 4+VAR_6, VAR_1->vlans[VAR_1->ports[VAR_6].pvid].tag);

 return (VAR_8 ? -VAR_0 : 0);
}
