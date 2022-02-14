
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {int split_subport_number; int port_number; } ;
struct TYPE_5__ {int pf; int vf; } ;
struct TYPE_4__ {int pf; } ;
struct devlink_port_attrs {int flavour; TYPE_3__ phys; int split; TYPE_2__ pci_vf; TYPE_1__ pci_pf; int set; } ;
struct devlink_port {struct devlink_port_attrs attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_7,
         struct devlink_port *VAR_8)
{
 struct devlink_port_attrs *VAR_9 = &VAR_8->attrs;

 if (!VAR_9->set)
  return 0;
 if (FUNC_0(VAR_7, VAR_0, VAR_9->flavour))
  return -VAR_6;
 switch (VAR_8->attrs.flavour) {
 case 130:
  if (FUNC_0(VAR_7, VAR_2,
    VAR_9->pci_pf.pf))
   return -VAR_6;
  break;
 case 129:
  if (FUNC_0(VAR_7, VAR_2,
    VAR_9->pci_vf.pf) ||
      FUNC_0(VAR_7, VAR_3,
    VAR_9->pci_vf.vf))
   return -VAR_6;
  break;
 case 128:
 case 132:
 case 131:
  if (FUNC_1(VAR_7, VAR_1,
    VAR_9->phys.port_number))
   return -VAR_6;
  if (!VAR_9->split)
   return 0;
  if (FUNC_1(VAR_7, VAR_4,
    VAR_9->phys.port_number))
   return -VAR_6;
  if (FUNC_1(VAR_7, VAR_5,
    VAR_9->phys.split_subport_number))
   return -VAR_6;
  break;
 default:
  break;
 }
 return 0;
}
