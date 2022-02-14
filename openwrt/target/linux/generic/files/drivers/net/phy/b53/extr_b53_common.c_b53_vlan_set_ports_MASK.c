
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; int len; TYPE_1__ value; } ;
struct switch_port {size_t id; int flags; } ;
struct switch_dev {int dummy; } ;
struct b53_vlan {int members; int untag; } ;
struct b53_device {int enabled_ports; TYPE_2__* ports; int allow_vid_4095; struct b53_vlan* vlans; } ;
struct TYPE_4__ {int pvid; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct b53_device*) ;
 int FUNC_2 (struct b53_device*) ;
 struct b53_device* FUNC_3 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_4(struct switch_dev *VAR_2, struct switch_val *VAR_3)
{
 struct b53_device *VAR_4 = FUNC_3(VAR_2);
 struct switch_port *VAR_5;
 struct b53_vlan *VAR_6 = &VAR_4->vlans[VAR_3->port_vlan];
 int VAR_7;


 if (VAR_3->port_vlan == 0 && !FUNC_1(VAR_4) && !FUNC_2(VAR_4))
  return -VAR_0;


 if (VAR_3->port_vlan == 4095 && !VAR_4->allow_vid_4095)
  return -VAR_0;

 VAR_5 = &VAR_3->value.ports[0];
 VAR_6->members = 0;
 VAR_6->untag = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3->len; VAR_7++, VAR_5++) {
  VAR_6->members |= FUNC_0(VAR_5->id);

  if (!(VAR_5->flags & FUNC_0(VAR_1))) {
   VAR_6->untag |= FUNC_0(VAR_5->id);
   VAR_4->ports[VAR_5->id].pvid = VAR_3->port_vlan;
  };
 }


 VAR_6->members &= VAR_4->enabled_ports;
 VAR_6->untag &= VAR_4->enabled_ports;

 return 0;
}
