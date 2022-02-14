
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int limit; } ;
struct pie_sched_data {int adapt_timer; struct Qdisc* sch; TYPE_1__ params; int vars; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int limit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 struct pie_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_3, struct nlattr *VAR_4,
      struct netlink_ext_ack *VAR_5)
{
 struct pie_sched_data *VAR_6 = FUNC_4(VAR_3);

 FUNC_2(&VAR_6->params);
 FUNC_3(&VAR_6->vars);
 VAR_3->limit = VAR_6->params.limit;

 VAR_6->sch = VAR_3;
 FUNC_5(&VAR_6->adapt_timer, VAR_2, 0);

 if (VAR_4) {
  int VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);

  if (VAR_7)
   return VAR_7;
 }

 FUNC_0(&VAR_6->adapt_timer, VAR_1 + VAR_0 / 2);
 return 0;
}
