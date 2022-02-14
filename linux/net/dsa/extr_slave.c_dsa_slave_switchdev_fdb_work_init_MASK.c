
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct switchdev_notifier_fdb_info {int addr; } ;
struct TYPE_2__ {scalar_t__ addr; } ;
struct dsa_switchdev_event_work {TYPE_1__ fdb_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_1__*,struct switchdev_notifier_fdb_info const*,int) ;

__attribute__((used)) static int
FUNC_3(struct dsa_switchdev_event_work *
      VAR_3,
      const struct switchdev_notifier_fdb_info *
      VAR_4)
{
 FUNC_2(&VAR_3->fdb_info, VAR_4,
        sizeof(VAR_3->fdb_info));
 VAR_3->fdb_info.addr = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3->fdb_info.addr)
  return -VAR_0;
 FUNC_0((u8 *)VAR_3->fdb_info.addr,
   VAR_4->addr);
 return 0;
}
