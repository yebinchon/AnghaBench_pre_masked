
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ip17xx_state {unsigned int add_tag; unsigned int remove_tag; TYPE_3__* ports; TYPE_2__* regs; TYPE_1__* vlans; } ;
struct TYPE_11__ {int m; } ;
typedef TYPE_4__ reg ;
typedef int bitnum ;
struct TYPE_10__ {unsigned int shareports; int pvid; } ;
struct TYPE_9__ {int NUM_PORTS; TYPE_4__* VLAN_DEFAULT_TAG_REG; scalar_t__ SIMPLE_VLAN_REGISTERS; int * TAG_VLAN_MASK_ODD_BIT; int * TAG_VLAN_MASK_EVEN_BIT; TYPE_4__ TAG_VLAN_MASK_REG; TYPE_4__ VLAN_LOOKUP_REG_5; TYPE_4__ VLAN_LOOKUP_REG; int * VLAN_LOOKUP_ODD_BIT; int * VLAN_LOOKUP_EVEN_BIT; int const* REMOVE_TAG_BIT; TYPE_4__ REMOVE_TAG_REG; int const* ADD_TAG_BIT; TYPE_4__ ADD_TAG_REG; } ;
struct TYPE_8__ {unsigned int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__) ;
 int FUNC_1 (struct ip17xx_state*,unsigned int,TYPE_4__,int const*) ;
 int FUNC_2 (struct ip17xx_state*) ;
 int FUNC_3 (struct ip17xx_state*,TYPE_4__,int ) ;

__attribute__((used)) static int FUNC_4(struct ip17xx_state *VAR_2)
{
 int VAR_3;
 int VAR_4;
 FUNC_1(VAR_2, VAR_2->add_tag,
      VAR_2->regs->ADD_TAG_REG, VAR_2->regs->ADD_TAG_BIT);
 FUNC_1(VAR_2, VAR_2->remove_tag,
      VAR_2->regs->REMOVE_TAG_REG, VAR_2->regs->REMOVE_TAG_BIT);

 if (FUNC_0(VAR_2->regs->VLAN_LOOKUP_REG)) {
  for (VAR_3=0; VAR_3<VAR_2->regs->NUM_PORTS; VAR_3++) {
   reg VAR_5;
   const bitnum *VAR_6 = (VAR_3%2==0)?
    VAR_2->regs->VLAN_LOOKUP_EVEN_BIT:
    VAR_2->regs->VLAN_LOOKUP_ODD_BIT;

   VAR_5 = VAR_2->regs->VLAN_LOOKUP_REG;
   if (VAR_2->regs->SIMPLE_VLAN_REGISTERS) {
    VAR_5.m += VAR_3;
   } else {
    switch (VAR_3) {
    case 0:
    case 1:
     break;
    case 2:
    case 3:
     VAR_5.m+=1;
     break;
    case 4:
     VAR_5.m+=2;
     break;
    case 5:
     VAR_5 = VAR_2->regs->VLAN_LOOKUP_REG_5;
     break;
    default:
     VAR_5.m = -1;
     break;
    }
   }

   if (FUNC_0(VAR_5)) {
    FUNC_1(VAR_2, VAR_2->ports[VAR_3].shareports, VAR_5, VAR_6);
   }
  }
 }
 if (FUNC_0(VAR_2->regs->TAG_VLAN_MASK_REG)) {
  for (VAR_3=0; VAR_3<VAR_1; VAR_3++) {
   reg VAR_7 = VAR_2->regs->TAG_VLAN_MASK_REG;
   const bitnum *VAR_8 = (VAR_3%2==0)?
    VAR_2->regs->TAG_VLAN_MASK_EVEN_BIT:
    VAR_2->regs->TAG_VLAN_MASK_ODD_BIT;
   unsigned int VAR_9;
   if (VAR_2->regs->SIMPLE_VLAN_REGISTERS) {
    VAR_7.m += VAR_3;
   } else {
    VAR_7.m += VAR_3/2;
   }
   VAR_9 = VAR_2->vlans[VAR_3].ports;
   FUNC_1(VAR_2, VAR_9, VAR_7, VAR_8);
  }
 }

 for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
  if (FUNC_0(VAR_2->regs->VLAN_DEFAULT_TAG_REG[VAR_4])) {
   int VAR_10 = FUNC_3(VAR_2, VAR_2->regs->VLAN_DEFAULT_TAG_REG[VAR_4],
     VAR_2->ports[VAR_4].pvid);
   if (VAR_10 < 0) {
    return VAR_10;
   }
  }
 }

 return FUNC_2(VAR_2);
}
