
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct devlink_dpipe_dump_ctx {int skb; int nest; TYPE_1__* info; int hdr; int cmd; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {struct devlink** user_ptr; int snd_seq; int snd_portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct devlink*) ;
 int FUNC_2 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct devlink_dpipe_dump_ctx *VAR_4)
{
 struct devlink *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_4->skb,
            VAR_4->info);
 if (VAR_6)
  return VAR_6;

 VAR_4->hdr = FUNC_2(VAR_4->skb,
        VAR_4->info->snd_portid,
        VAR_4->info->snd_seq,
        &VAR_3, VAR_2,
        VAR_4->cmd);
 if (!VAR_4->hdr)
  goto nla_put_failure;

 VAR_5 = VAR_4->info->user_ptr[0];
 if (FUNC_1(VAR_4->skb, VAR_5))
  goto nla_put_failure;
 VAR_4->nest = FUNC_3(VAR_4->skb,
            VAR_0);
 if (!VAR_4->nest)
  goto nla_put_failure;
 return 0;

nla_put_failure:
 FUNC_4(VAR_4->skb);
 return -VAR_1;
}
