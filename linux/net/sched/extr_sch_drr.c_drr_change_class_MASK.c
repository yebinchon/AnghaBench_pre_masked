
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct drr_sched {int clhash; } ;
struct TYPE_2__ {scalar_t__ classid; } ;
struct drr_class {TYPE_1__ common; int * qdisc; int rate_est; int bstats; scalar_t__ quantum; } ;
struct Qdisc {int dev_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *,int *,int *,int ,struct nlattr*) ;
 int FUNC_2 (struct drr_class*) ;
 struct drr_class* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct Qdisc*,int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int * FUNC_9 (int ,int *,scalar_t__,int *) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (int *,int) ;
 struct drr_sched* FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct Qdisc*) ;
 int FUNC_15 (struct Qdisc*) ;
 int FUNC_16 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_17(struct Qdisc *VAR_10, u32 VAR_11, u32 VAR_12,
       struct nlattr **VAR_13, unsigned long *VAR_14,
       struct netlink_ext_ack *VAR_15)
{
 struct drr_sched *VAR_16 = FUNC_12(VAR_10);
 struct drr_class *VAR_17 = (struct drr_class *)*VAR_14;
 struct nlattr *VAR_18 = VAR_13[VAR_5];
 struct nlattr *VAR_19[VAR_3 + 1];
 u32 VAR_20;
 int VAR_21;

 if (!VAR_18) {
  FUNC_0(VAR_15, "DRR options are required for this operation");
  return -VAR_0;
 }

 VAR_21 = FUNC_5(VAR_19, VAR_3, VAR_18, VAR_7,
       VAR_15);
 if (VAR_21 < 0)
  return VAR_21;

 if (VAR_19[VAR_4]) {
  VAR_20 = FUNC_4(VAR_19[VAR_4]);
  if (VAR_20 == 0) {
   FUNC_0(VAR_15, "Specified DRR quantum cannot be zero");
   return -VAR_0;
  }
 } else
  VAR_20 = FUNC_6(FUNC_10(VAR_10));

 if (VAR_17 != ((void*)0)) {
  if (VAR_13[VAR_6]) {
   VAR_21 = FUNC_1(&VAR_17->bstats, ((void*)0),
          &VAR_17->rate_est,
          ((void*)0),
          FUNC_14(VAR_10),
          VAR_13[VAR_6]);
   if (VAR_21) {
    FUNC_0(VAR_15, "Failed to replace estimator");
    return VAR_21;
   }
  }

  FUNC_15(VAR_10);
  if (VAR_19[VAR_4])
   VAR_17->quantum = VAR_20;
  FUNC_16(VAR_10);

  return 0;
 }

 VAR_17 = FUNC_3(sizeof(struct drr_class), VAR_2);
 if (VAR_17 == ((void*)0))
  return -VAR_1;

 VAR_17->common.classid = VAR_11;
 VAR_17->quantum = VAR_20;
 VAR_17->qdisc = FUNC_9(VAR_10->dev_queue,
            &VAR_9, VAR_11,
            ((void*)0));
 if (VAR_17->qdisc == ((void*)0))
  VAR_17->qdisc = &VAR_8;
 else
  FUNC_11(VAR_17->qdisc, 1);

 if (VAR_13[VAR_6]) {
  VAR_21 = FUNC_1(&VAR_17->bstats, ((void*)0), &VAR_17->rate_est,
         ((void*)0),
         FUNC_14(VAR_10),
         VAR_13[VAR_6]);
  if (VAR_21) {
   FUNC_0(VAR_15, "Failed to replace estimator");
   FUNC_13(VAR_17->qdisc);
   FUNC_2(VAR_17);
   return VAR_21;
  }
 }

 FUNC_15(VAR_10);
 FUNC_8(&VAR_16->clhash, &VAR_17->common);
 FUNC_16(VAR_10);

 FUNC_7(VAR_10, &VAR_16->clhash);

 *VAR_14 = (unsigned long)VAR_17;
 return 0;
}
