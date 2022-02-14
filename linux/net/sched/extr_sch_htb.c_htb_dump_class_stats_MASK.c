
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* ctokens; void* tokens; } ;
struct TYPE_3__ {scalar_t__ q; } ;
struct htb_class {TYPE_2__ xstats; int rate_est; int bstats; int ctokens; int tokens; TYPE_1__ leaf; int level; int overlimits; int drops; } ;
struct gnet_stats_queue {int backlog; int overlimits; int drops; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct gnet_dump*,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int ,struct gnet_dump*,int *,int *) ;
 scalar_t__ FUNC_4 (struct gnet_dump*,int *,struct gnet_stats_queue*,int ) ;
 scalar_t__ FUNC_5 (struct gnet_dump*,int *) ;
 int FUNC_6 (scalar_t__,int *,int *) ;
 int FUNC_7 (struct Qdisc*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(struct Qdisc *VAR_3, unsigned long VAR_4, struct gnet_dump *VAR_5)
{
 struct htb_class *VAR_6 = (struct htb_class *)VAR_4;
 struct gnet_stats_queue VAR_7 = {
  .drops = VAR_6->drops,
  .overlimits = VAR_6->overlimits,
 };
 __u32 VAR_8 = 0;

 if (!VAR_6->level && VAR_6->leaf.q)
  FUNC_6(VAR_6->leaf.q, &VAR_8, &VAR_7.backlog);

 VAR_6->xstats.tokens = FUNC_1(VAR_2, FUNC_0(VAR_6->tokens),
        VAR_1, VAR_0);
 VAR_6->xstats.ctokens = FUNC_1(VAR_2, FUNC_0(VAR_6->ctokens),
         VAR_1, VAR_0);

 if (FUNC_3(FUNC_7(VAR_3),
      VAR_5, ((void*)0), &VAR_6->bstats) < 0 ||
     FUNC_5(VAR_5, &VAR_6->rate_est) < 0 ||
     FUNC_4(VAR_5, ((void*)0), &VAR_7, VAR_8) < 0)
  return -1;

 return FUNC_2(VAR_5, &VAR_6->xstats, sizeof(VAR_6->xstats));
}
