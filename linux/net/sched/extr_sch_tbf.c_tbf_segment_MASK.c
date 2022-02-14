
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tbf_sched_data {int qdisc; } ;
struct sk_buff {scalar_t__ len; struct sk_buff* next; } ;
struct TYPE_3__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {scalar_t__ pkt_len; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_5 (struct sk_buff*,int ,struct sk_buff**) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 struct tbf_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*) ;
 TYPE_2__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct Qdisc*,int,unsigned int) ;
 struct sk_buff* FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
         struct sk_buff **VAR_5)
{
 struct tbf_sched_data *VAR_6 = FUNC_7(VAR_4);
 struct sk_buff *VAR_7, *VAR_8;
 netdev_features_t VAR_9 = FUNC_3(VAR_3);
 unsigned int VAR_10 = 0, VAR_11 = FUNC_6(VAR_3);
 int VAR_12, VAR_13;

 VAR_7 = FUNC_11(VAR_3, VAR_9 & ~VAR_0);

 if (FUNC_0(VAR_7))
  return FUNC_4(VAR_3, VAR_4, VAR_5);

 VAR_13 = 0;
 while (VAR_7) {
  VAR_8 = VAR_7->next;
  FUNC_12(VAR_7);
  FUNC_9(VAR_7)->pkt_len = VAR_7->len;
  VAR_10 += VAR_7->len;
  VAR_12 = FUNC_5(VAR_7, VAR_6->qdisc, VAR_5);
  if (VAR_12 != VAR_2) {
   if (FUNC_2(VAR_12))
    FUNC_8(VAR_4);
  } else {
   VAR_13++;
  }
  VAR_7 = VAR_8;
 }
 VAR_4->q.qlen += VAR_13;
 if (VAR_13 > 1)
  FUNC_10(VAR_4, 1 - VAR_13, VAR_11 - VAR_10);
 FUNC_1(VAR_3);
 return VAR_13 > 0 ? VAR_2 : VAR_1;
}
