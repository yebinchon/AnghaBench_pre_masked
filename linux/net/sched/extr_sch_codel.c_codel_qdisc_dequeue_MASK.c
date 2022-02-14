
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ drop_len; scalar_t__ drop_count; } ;
struct codel_sched_data {TYPE_3__ stats; int vars; int params; } ;
struct TYPE_5__ {scalar_t__ qlen; } ;
struct TYPE_4__ {int backlog; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;


 struct sk_buff* FUNC_0 (struct Qdisc*,int *,int *,int *,TYPE_3__*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct Qdisc*,struct sk_buff*) ;
 int VAR_3 ;
 struct codel_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,scalar_t__,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct Qdisc *VAR_4)
{
 struct codel_sched_data *VAR_5 = FUNC_2(VAR_4);
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_0(VAR_4, &VAR_4->qstats.backlog, &VAR_5->params, &VAR_5->vars,
       &VAR_5->stats, VAR_3, VAR_0,
       VAR_2, VAR_1);




 if (VAR_5->stats.drop_count && VAR_4->q.qlen) {
  FUNC_3(VAR_4, VAR_5->stats.drop_count, VAR_5->stats.drop_len);
  VAR_5->stats.drop_count = 0;
  VAR_5->stats.drop_len = 0;
 }
 if (VAR_6)
  FUNC_1(VAR_4, VAR_6);
 return VAR_6;
}
