
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_port {int index; TYPE_1__* ds; } ;
struct TYPE_4__ {struct net_device* dev; } ;
struct dsa_notifier_register_info {TYPE_2__ info; struct net_device* master; int port_number; int switch_number; } ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (unsigned long,struct net_device*,TYPE_2__*) ;
 struct net_device* FUNC_1 (struct net_device*) ;
 struct dsa_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, unsigned long VAR_1)
{
 struct net_device *VAR_2 = FUNC_1(VAR_0);
 struct dsa_port *VAR_3 = FUNC_2(VAR_0);
 struct dsa_notifier_register_info VAR_4 = {
  .switch_number = VAR_3->ds->index,
  .port_number = VAR_3->index,
  .master = VAR_2,
  .info.dev = VAR_0,
 };

 FUNC_0(VAR_1, VAR_0, &VAR_4.info);
}
