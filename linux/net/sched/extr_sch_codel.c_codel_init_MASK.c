
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int mtu; } ;
struct codel_sched_data {TYPE_1__ params; int stats; int vars; } ;
struct Qdisc {int limit; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct Qdisc*) ;
 struct codel_sched_data* FUNC_6 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_7(struct Qdisc *VAR_2, struct nlattr *VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 struct codel_sched_data *VAR_5 = FUNC_6(VAR_2);

 VAR_2->limit = VAR_0;

 FUNC_1(&VAR_5->params);
 FUNC_3(&VAR_5->vars);
 FUNC_2(&VAR_5->stats);
 VAR_5->params.mtu = FUNC_4(FUNC_5(VAR_2));

 if (VAR_3) {
  int VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4);

  if (VAR_6)
   return VAR_6;
 }

 if (VAR_2->limit >= 1)
  VAR_2->flags |= VAR_1;
 else
  VAR_2->flags &= ~VAR_1;

 return 0;
}
