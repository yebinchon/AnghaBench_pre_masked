
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {void* split_subport_number; void* port_number; } ;
struct devlink_port_attrs {int split; TYPE_1__ phys; } ;
struct devlink_port {struct devlink_port_attrs attrs; } ;
typedef enum devlink_port_flavour { ____Placeholder_devlink_port_flavour } devlink_port_flavour ;


 int FUNC_0 (struct devlink_port*,int,unsigned char const*,unsigned char) ;

void FUNC_1(struct devlink_port *VAR_0,
       enum devlink_port_flavour VAR_1,
       u32 VAR_2, bool VAR_3,
       u32 VAR_4,
       const unsigned char *VAR_5,
       unsigned char VAR_6)
{
 struct devlink_port_attrs *VAR_7 = &VAR_0->attrs;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_0, VAR_1,
           VAR_5, VAR_6);
 if (VAR_8)
  return;
 VAR_7->split = VAR_3;
 VAR_7->phys.port_number = VAR_2;
 VAR_7->phys.split_subport_number = VAR_4;
}
