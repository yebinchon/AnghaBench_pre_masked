
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct TYPE_6__ {int prob; scalar_t__ accu_prob_overflows; scalar_t__ accu_prob; } ;
struct TYPE_5__ {scalar_t__ maxq; int dropped; int packets_in; int ecn_mark; int overlimit; } ;
struct TYPE_4__ {scalar_t__ ecn; } ;
struct pie_sched_data {TYPE_3__ vars; TYPE_2__ stats; TYPE_1__ params; } ;
struct Qdisc {scalar_t__ limit; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct Qdisc*,int ) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*) ;
 struct pie_sched_data* FUNC_4 (struct Qdisc*) ;
 scalar_t__ FUNC_5 (struct Qdisc*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_1, struct Qdisc *VAR_2,
        struct sk_buff **VAR_3)
{
 struct pie_sched_data *VAR_4 = FUNC_4(VAR_2);
 bool VAR_5 = 0;

 if (FUNC_6(FUNC_5(VAR_2) >= VAR_2->limit)) {
  VAR_4->stats.overlimit++;
  goto out;
 }

 if (!FUNC_1(VAR_2, VAR_1->len)) {
  VAR_5 = 1;
 } else if (VAR_4->params.ecn && (VAR_4->vars.prob <= VAR_0 / 10) &&
     FUNC_0(VAR_1)) {



  VAR_4->stats.ecn_mark++;
  VAR_5 = 1;
 }


 if (VAR_5) {
  VAR_4->stats.packets_in++;
  if (FUNC_5(VAR_2) > VAR_4->stats.maxq)
   VAR_4->stats.maxq = FUNC_5(VAR_2);

  return FUNC_3(VAR_1, VAR_2);
 }

out:
 VAR_4->stats.dropped++;
 VAR_4->vars.accu_prob = 0;
 VAR_4->vars.accu_prob_overflows = 0;
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
