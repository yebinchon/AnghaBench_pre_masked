
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int pf; int vf; } ;
struct TYPE_5__ {int pf; } ;
struct TYPE_4__ {int port_number; int split_subport_number; } ;
struct devlink_port_attrs {int flavour; TYPE_3__ pci_vf; TYPE_2__ pci_pf; TYPE_1__ phys; int split; int set; } ;
struct devlink_port {struct devlink_port_attrs attrs; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,char*,int,...) ;

__attribute__((used)) static int FUNC_2(struct devlink_port *VAR_2,
          char *VAR_3, size_t VAR_4)
{
 struct devlink_port_attrs *VAR_5 = &VAR_2->attrs;
 int VAR_6 = 0;

 if (!VAR_5->set)
  return -VAR_1;

 switch (VAR_5->flavour) {
 case 128:
  if (!VAR_5->split)
   VAR_6 = FUNC_1(VAR_3, VAR_4, "p%u", VAR_5->phys.port_number);
  else
   VAR_6 = FUNC_1(VAR_3, VAR_4, "p%us%u",
         VAR_5->phys.port_number,
         VAR_5->phys.split_subport_number);
  break;
 case 132:
 case 131:



  FUNC_0(1);
  return -VAR_0;
 case 130:
  VAR_6 = FUNC_1(VAR_3, VAR_4, "pf%u", VAR_5->pci_pf.pf);
  break;
 case 129:
  VAR_6 = FUNC_1(VAR_3, VAR_4, "pf%uvf%u",
        VAR_5->pci_vf.pf, VAR_5->pci_vf.vf);
  break;
 }

 if (VAR_6 >= VAR_4)
  return -VAR_0;

 return 0;
}
