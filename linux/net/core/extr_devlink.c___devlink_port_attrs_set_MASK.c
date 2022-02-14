
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char id_len; int id; } ;
struct devlink_port_attrs {int set; int flavour; int switch_port; TYPE_1__ switch_id; } ;
struct devlink_port {int registered; struct devlink_port_attrs attrs; } ;
typedef enum devlink_port_flavour { ____Placeholder_devlink_port_flavour } devlink_port_flavour ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned char const*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct devlink_port *VAR_2,
        enum devlink_port_flavour VAR_3,
        const unsigned char *VAR_4,
        unsigned char VAR_5)
{
 struct devlink_port_attrs *VAR_6 = &VAR_2->attrs;

 if (FUNC_0(VAR_2->registered))
  return -VAR_0;
 VAR_6->set = 1;
 VAR_6->flavour = VAR_3;
 if (VAR_4) {
  VAR_6->switch_port = 1;
  if (FUNC_0(VAR_5 > VAR_1))
   VAR_5 = VAR_1;
  FUNC_1(VAR_6->switch_id.id, VAR_4, VAR_5);
  VAR_6->switch_id.id_len = VAR_5;
 } else {
  VAR_6->switch_port = 0;
 }
 return 0;
}
