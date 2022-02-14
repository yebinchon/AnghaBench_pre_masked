
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int pf; } ;
struct devlink_port_attrs {TYPE_1__ pci_pf; } ;
struct devlink_port {struct devlink_port_attrs attrs; } ;


 int VAR_0 ;
 int FUNC_0 (struct devlink_port*,int ,unsigned char const*,unsigned char) ;

void FUNC_1(struct devlink_port *VAR_1,
       const unsigned char *VAR_2,
       unsigned char VAR_3, u16 VAR_4)
{
 struct devlink_port_attrs *VAR_5 = &VAR_1->attrs;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1,
           VAR_0,
           VAR_2, VAR_3);
 if (VAR_6)
  return;

 VAR_5->pci_pf.pf = VAR_4;
}
