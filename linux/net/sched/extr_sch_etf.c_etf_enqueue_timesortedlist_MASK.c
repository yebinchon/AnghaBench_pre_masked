
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int rbnode; int tstamp; } ;
struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;
struct TYPE_4__ {struct rb_node* rb_node; } ;
struct TYPE_6__ {TYPE_1__ rb_root; } ;
struct etf_sched_data {TYPE_3__ head; } ;
struct TYPE_5__ {int qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Qdisc*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct etf_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_5 (int *,TYPE_3__*,int) ;
 int FUNC_6 (int *,struct rb_node*,struct rb_node**) ;
 struct sk_buff* FUNC_7 (struct rb_node*) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
          struct sk_buff **VAR_5)
{
 struct etf_sched_data *VAR_6 = FUNC_3(VAR_4);
 struct rb_node **VAR_7 = &VAR_6->head.rb_root.rb_node, *VAR_8 = ((void*)0);
 ktime_t VAR_9 = VAR_3->tstamp;
 bool VAR_10 = 1;

 if (!FUNC_0(VAR_4, VAR_3)) {
  FUNC_8(VAR_3, VAR_0,
      VAR_2);
  return FUNC_2(VAR_3, VAR_4, VAR_5);
 }

 while (*VAR_7) {
  struct sk_buff *VAR_11;

  VAR_8 = *VAR_7;
  VAR_11 = FUNC_7(VAR_8);
  if (FUNC_1(VAR_9, VAR_11->tstamp) >= 0) {
   VAR_7 = &VAR_8->rb_right;
   VAR_10 = 0;
  } else {
   VAR_7 = &VAR_8->rb_left;
  }
 }
 FUNC_6(&VAR_3->rbnode, VAR_8, VAR_7);
 FUNC_5(&VAR_3->rbnode, &VAR_6->head, VAR_10);

 FUNC_4(VAR_4, VAR_3);
 VAR_4->q.qlen++;


 FUNC_9(VAR_4);

 return VAR_1;
}
