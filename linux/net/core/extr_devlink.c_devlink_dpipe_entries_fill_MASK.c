
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlmsghdr {int dummy; } ;
struct genl_info {int snd_seq; int snd_portid; } ;
struct devlink_dpipe_table {int counters_enabled; int priv; TYPE_1__* table_ops; } ;
struct devlink_dpipe_dump_ctx {int cmd; int * skb; struct genl_info* info; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;
struct TYPE_2__ {int (* entries_dump ) (int ,int ,struct devlink_dpipe_dump_ctx*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,struct genl_info*) ;
 int FUNC_1 (int *,struct genl_info*) ;
 struct nlmsghdr* FUNC_2 (int *,int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,struct devlink_dpipe_dump_ctx*) ;

__attribute__((used)) static int FUNC_4(struct genl_info *VAR_2,
          enum devlink_command VAR_3, int VAR_4,
          struct devlink_dpipe_table *VAR_5)
{
 struct devlink_dpipe_dump_ctx VAR_6;
 struct nlmsghdr *VAR_7;
 int VAR_8;

 VAR_6.skb = ((void*)0);
 VAR_6.cmd = VAR_3;
 VAR_6.info = VAR_2;

 VAR_8 = VAR_5->table_ops->entries_dump(VAR_5->priv,
          VAR_5->counters_enabled,
          &VAR_6);
 if (VAR_8)
  return VAR_8;

send_done:
 VAR_7 = FUNC_2(VAR_6.skb, VAR_2->snd_portid, VAR_2->snd_seq,
   VAR_0, 0, VAR_4 | VAR_1);
 if (!VAR_7) {
  VAR_8 = FUNC_0(&VAR_6.skb, VAR_2);
  if (VAR_8)
   return VAR_8;
  goto send_done;
 }
 return FUNC_1(VAR_6.skb, VAR_2);
}
