
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wdrr_bucket {scalar_t__ head; } ;
struct sk_buff {int dummy; } ;
struct hhf_sched_data {struct wdrr_bucket* buckets; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct sk_buff* FUNC_0 (struct wdrr_bucket*) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct hhf_sched_data* FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_4(struct Qdisc *VAR_2, struct sk_buff **VAR_3)
{
 struct hhf_sched_data *VAR_4 = FUNC_2(VAR_2);
 struct wdrr_bucket *VAR_5;


 VAR_5 = &VAR_4->buckets[VAR_0];
 if (!VAR_5->head)
  VAR_5 = &VAR_4->buckets[VAR_1];

 if (VAR_5->head) {
  struct sk_buff *VAR_6 = FUNC_0(VAR_5);

  VAR_2->q.qlen--;
  FUNC_3(VAR_2, VAR_6);
  FUNC_1(VAR_6, VAR_2, VAR_3);
 }


 return VAR_5 - VAR_4->buckets;
}
