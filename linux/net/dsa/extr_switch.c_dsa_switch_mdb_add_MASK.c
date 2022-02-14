
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int num_ports; TYPE_1__* ops; } ;
struct dsa_notifier_mdb_info {int mdb; int trans; } ;
struct TYPE_2__ {int (* port_mdb_add ) (struct dsa_switch*,int,int ) ;} ;


 scalar_t__ FUNC_0 (struct dsa_switch*,int,struct dsa_notifier_mdb_info*) ;
 int FUNC_1 (struct dsa_switch*,struct dsa_notifier_mdb_info*) ;
 int FUNC_2 (struct dsa_switch*,int,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch *VAR_0,
         struct dsa_notifier_mdb_info *VAR_1)
{
 int VAR_2;

 if (FUNC_3(VAR_1->trans))
  return FUNC_1(VAR_0, VAR_1);

 if (!VAR_0->ops->port_mdb_add)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ports; VAR_2++)
  if (FUNC_0(VAR_0, VAR_2, VAR_1))
   VAR_0->ops->port_mdb_add(VAR_0, VAR_2, VAR_1->mdb);

 return 0;
}
