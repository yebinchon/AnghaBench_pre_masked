
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_notifier_fdb_info {int vid; int addr; int port; int sw_index; } ;
struct TYPE_2__ {int (* port_fdb_del ) (struct dsa_switch*,int,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int ,int ) ;
 int FUNC_1 (struct dsa_switch*,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dsa_switch *VAR_1,
         struct dsa_notifier_fdb_info *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_2->sw_index, VAR_2->port);

 if (!VAR_1->ops->port_fdb_del)
  return -VAR_0;

 return VAR_1->ops->port_fdb_del(VAR_1, VAR_3, VAR_2->addr, VAR_2->vid);
}
