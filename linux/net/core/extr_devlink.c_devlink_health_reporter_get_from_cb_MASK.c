
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_callback {TYPE_1__* skb; int extack; int nlh; } ;
struct devlink_health_reporter {int dummy; } ;
struct devlink {int dummy; } ;
struct TYPE_4__ {int policy; scalar_t__ hdrsize; } ;
struct TYPE_3__ {int sk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct devlink*) ;
 struct devlink* FUNC_1 (int ,struct nlattr**) ;
 struct devlink_health_reporter* FUNC_2 (struct devlink*,struct nlattr**) ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_3 (struct nlattr**) ;
 struct nlattr** FUNC_4 (scalar_t__,int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__,struct nlattr**,scalar_t__,int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static struct devlink_health_reporter *
FUNC_9(struct netlink_callback *VAR_5)
{
 struct devlink_health_reporter *VAR_6;
 struct devlink *VAR_7;
 struct nlattr **VAR_8;
 int VAR_9;

 VAR_8 = FUNC_4(VAR_0 + 1, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return ((void*)0);

 VAR_9 = FUNC_7(VAR_5->nlh,
         VAR_1 + VAR_4.hdrsize,
         VAR_8, VAR_0,
         VAR_4.policy, VAR_5->extack);
 if (VAR_9)
  goto free;

 FUNC_5(&VAR_3);
 VAR_7 = FUNC_1(FUNC_8(VAR_5->skb->sk), VAR_8);
 if (FUNC_0(VAR_7))
  goto unlock;

 VAR_6 = FUNC_2(VAR_7, VAR_8);
 FUNC_6(&VAR_3);
 FUNC_3(VAR_8);
 return VAR_6;
unlock:
 FUNC_6(&VAR_3);
free:
 FUNC_3(VAR_8);
 return ((void*)0);
}
