
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int childdrop; int earlydrop; int marked; int penaltydrop; int bucketdrop; int queuedrop; } ;
struct sfb_sched_data {size_t slot; scalar_t__ limit; unsigned long rehash_interval; unsigned long rehash_time; int double_buffering; unsigned long warmup_time; scalar_t__ bin_size; size_t max; TYPE_3__ stats; TYPE_1__* bins; int filter_list; struct Qdisc* qdisc; } ;
struct sfb_bucket {scalar_t__ qlen; size_t p_mark; } ;
struct TYPE_6__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
struct TYPE_8__ {size_t* hashes; } ;
struct TYPE_5__ {struct sfb_bucket** bins; int perturbation; } ;


 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sfb_bucket*,struct sfb_sched_data*) ;
 int FUNC_2 (struct sfb_bucket*,struct sfb_sched_data*) ;
 int FUNC_3 (struct sk_buff*,struct sfb_sched_data*) ;
 unsigned long VAR_7 ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 size_t FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_9 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct sfb_sched_data* FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (struct Qdisc*) ;
 struct tcf_proto* FUNC_14 (int ) ;
 int FUNC_15 (struct sk_buff*,struct tcf_proto*,int*,size_t*) ;
 scalar_t__ FUNC_16 (struct sk_buff*,struct sfb_sched_data*) ;
 TYPE_4__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sfb_sched_data*) ;
 size_t FUNC_19 (size_t,int *) ;
 size_t FUNC_20 (struct sk_buff*,int *) ;
 int FUNC_21 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_22 (int) ;

__attribute__((used)) static int FUNC_23(struct sk_buff *VAR_8, struct Qdisc *VAR_9,
         struct sk_buff **VAR_10)
{

 struct sfb_sched_data *VAR_11 = FUNC_10(VAR_9);
 struct Qdisc *VAR_12 = VAR_11->qdisc;
 struct tcf_proto *VAR_13;
 int VAR_14;
 u32 VAR_15 = ~0;
 u32 VAR_16 = ~0;
 u32 VAR_17, VAR_18;
 u32 VAR_19 = VAR_11->slot;
 int VAR_20 = VAR_1 | VAR_6;

 if (FUNC_22(VAR_9->q.qlen >= VAR_11->limit)) {
  FUNC_13(VAR_9);
  VAR_11->stats.queuedrop++;
  goto drop;
 }

 if (VAR_11->rehash_interval > 0) {
  unsigned long VAR_21 = VAR_11->rehash_time + VAR_11->rehash_interval;

  if (FUNC_22(FUNC_21(VAR_7, VAR_21))) {
   FUNC_18(VAR_11);
   VAR_11->rehash_time = VAR_7;
  } else if (FUNC_22(!VAR_11->double_buffering && VAR_11->warmup_time > 0 &&
        FUNC_21(VAR_7, VAR_21 - VAR_11->warmup_time))) {
   VAR_11->double_buffering = 1;
  }
 }

 VAR_13 = FUNC_14(VAR_11->filter_list);
 if (VAR_13) {
  u32 VAR_22;


  if (!FUNC_15(VAR_8, VAR_13, &VAR_20, &VAR_22))
   goto other_drop;
  VAR_18 = FUNC_19(VAR_22, &VAR_11->bins[VAR_19].perturbation);
 } else {
  VAR_18 = FUNC_20(VAR_8, &VAR_11->bins[VAR_19].perturbation);
 }


 if (!VAR_18)
  VAR_18 = 1;
 FUNC_17(VAR_8)->hashes[VAR_19] = VAR_18;

 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
  u32 VAR_23 = VAR_18 & VAR_2;
  struct sfb_bucket *VAR_24 = &VAR_11->bins[VAR_19].bins[VAR_14][VAR_23];

  VAR_18 >>= VAR_3;
  if (VAR_24->qlen == 0)
   FUNC_1(VAR_24, VAR_11);
  else if (VAR_24->qlen >= VAR_11->bin_size)
   FUNC_2(VAR_24, VAR_11);
  if (VAR_16 > VAR_24->qlen)
   VAR_16 = VAR_24->qlen;
  if (VAR_15 > VAR_24->p_mark)
   VAR_15 = VAR_24->p_mark;
 }

 VAR_19 ^= 1;
 FUNC_17(VAR_8)->hashes[VAR_19] = 0;

 if (FUNC_22(VAR_16 >= VAR_11->max)) {
  FUNC_13(VAR_9);
  VAR_11->stats.bucketdrop++;
  goto drop;
 }

 if (FUNC_22(VAR_15 >= VAR_5)) {

  if (VAR_11->double_buffering) {
   VAR_18 = FUNC_20(VAR_8,
       &VAR_11->bins[VAR_19].perturbation);
   if (!VAR_18)
    VAR_18 = 1;
   FUNC_17(VAR_8)->hashes[VAR_19] = VAR_18;

   for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
    u32 VAR_25 = VAR_18 & VAR_2;
    struct sfb_bucket *VAR_26 = &VAR_11->bins[VAR_19].bins[VAR_14][VAR_25];

    VAR_18 >>= VAR_3;
    if (VAR_26->qlen == 0)
     FUNC_1(VAR_26, VAR_11);
    else if (VAR_26->qlen >= VAR_11->bin_size)
     FUNC_2(VAR_26, VAR_11);
   }
  }
  if (FUNC_16(VAR_8, VAR_11)) {
   FUNC_13(VAR_9);
   VAR_11->stats.penaltydrop++;
   goto drop;
  }
  goto enqueue;
 }

 VAR_17 = FUNC_7() & VAR_5;

 if (FUNC_22(VAR_17 < VAR_15)) {
  if (FUNC_22(VAR_15 > VAR_5 / 2)) {




   if (VAR_17 < (VAR_15 - VAR_5 / 2) * 2) {
    VAR_11->stats.earlydrop++;
    goto drop;
   }
  }
  if (FUNC_0(VAR_8)) {
   VAR_11->stats.marked++;
  } else {
   VAR_11->stats.earlydrop++;
   goto drop;
  }
 }

enqueue:
 VAR_20 = FUNC_9(VAR_8, VAR_12, VAR_10);
 if (FUNC_5(VAR_20 == VAR_1)) {
  FUNC_11(VAR_9, VAR_8);
  VAR_9->q.qlen++;
  FUNC_3(VAR_8, VAR_11);
 } else if (FUNC_6(VAR_20)) {
  VAR_11->stats.childdrop++;
  FUNC_12(VAR_9);
 }
 return VAR_20;

drop:
 FUNC_8(VAR_8, VAR_9, VAR_10);
 return VAR_0;
other_drop:
 if (VAR_20 & VAR_6)
  FUNC_12(VAR_9);
 FUNC_4(VAR_8);
 return VAR_20;
}
