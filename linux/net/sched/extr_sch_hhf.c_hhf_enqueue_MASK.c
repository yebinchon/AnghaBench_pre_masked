
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wdrr_bucket {unsigned int deficit; int bucketchain; } ;
struct sk_buff {int dummy; } ;
struct hhf_sched_data {unsigned int hhf_non_hh_weight; unsigned int quantum; int drop_overlimit; int new_buckets; int old_buckets; struct wdrr_bucket* buckets; } ;
struct TYPE_4__ {unsigned int backlog; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct Qdisc {scalar_t__ limit; TYPE_2__ qstats; TYPE_1__ q; } ;
typedef enum wdrr_bucket_idx { ____Placeholder_wdrr_bucket_idx } wdrr_bucket_idx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wdrr_bucket*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct Qdisc*) ;
 int FUNC_2 (struct Qdisc*,struct sk_buff**) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 struct hhf_sched_data* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_7 (struct Qdisc*,int,unsigned int) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3, struct Qdisc *VAR_4,
         struct sk_buff **VAR_5)
{
 struct hhf_sched_data *VAR_6 = FUNC_5(VAR_4);
 enum wdrr_bucket_idx VAR_7;
 struct wdrr_bucket *VAR_8;
 unsigned int VAR_9;

 VAR_7 = FUNC_1(VAR_3, VAR_4);

 VAR_8 = &VAR_6->buckets[VAR_7];
 FUNC_0(VAR_8, VAR_3);
 FUNC_6(VAR_4, VAR_3);

 if (FUNC_4(&VAR_8->bucketchain)) {
  unsigned int VAR_10;





  if (VAR_7 == VAR_2) {

   VAR_10 = 1;
   FUNC_3(&VAR_8->bucketchain, &VAR_6->old_buckets);
  } else {
   VAR_10 = VAR_6->hhf_non_hh_weight;
   FUNC_3(&VAR_8->bucketchain, &VAR_6->new_buckets);
  }
  VAR_8->deficit = VAR_10 * VAR_6->quantum;
 }
 if (++VAR_4->q.qlen <= VAR_4->limit)
  return VAR_1;

 VAR_9 = VAR_4->qstats.backlog;
 VAR_6->drop_overlimit++;



 if (FUNC_2(VAR_4, VAR_5) == VAR_7)
  return VAR_0;


 FUNC_7(VAR_4, 1, VAR_9 - VAR_4->qstats.backlog);
 return VAR_1;
}
