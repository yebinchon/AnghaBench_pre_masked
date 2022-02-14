
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct tc_service_curve {scalar_t__ m1; scalar_t__ m2; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_10__ {scalar_t__ classid; } ;
struct hfsc_class {int cl_flags; scalar_t__ level; TYPE_2__* qdisc; int children; int siblings; TYPE_6__ cl_common; void* cf_tree; void* vt_tree; struct hfsc_class* cl_parent; struct hfsc_sched* sched; int block; int rate_est; int bstats; int filter_list; } ;
struct hfsc_sched {int clhash; struct hfsc_class root; } ;
struct Qdisc {scalar_t__ handle; int dev_queue; } ;
struct TYPE_8__ {scalar_t__ qlen; } ;
struct TYPE_9__ {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 void* VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int *,int *,int *,int *,int ,struct nlattr*) ;
 int FUNC_3 (int *,int *,int *,int *,int ,struct nlattr*) ;
 int FUNC_4 (struct hfsc_class*) ;
 int FUNC_5 (struct hfsc_class*,struct tc_service_curve*) ;
 int FUNC_6 (struct hfsc_class*,struct tc_service_curve*,int ) ;
 int FUNC_7 (struct hfsc_class*,struct tc_service_curve*,int ) ;
 struct hfsc_class* FUNC_8 (scalar_t__,struct Qdisc*) ;
 int VAR_15 ;
 int FUNC_9 (struct hfsc_class*,int) ;
 int FUNC_10 (struct hfsc_class*,int) ;
 int FUNC_11 (struct hfsc_class*) ;
 struct hfsc_class* FUNC_12 (int,int ) ;
 int FUNC_13 (int *,int *) ;
 struct tc_service_curve* FUNC_14 (struct nlattr*) ;
 int FUNC_15 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 TYPE_2__ VAR_16 ;
 int VAR_17 ;
 int FUNC_16 () ;
 int FUNC_17 (struct Qdisc*,int *) ;
 int FUNC_18 (int *,TYPE_6__*) ;
 TYPE_2__* FUNC_19 (int ,int *,scalar_t__,int *) ;
 int FUNC_20 (TYPE_2__*,int) ;
 int FUNC_21 (TYPE_2__*) ;
 struct hfsc_sched* FUNC_22 (struct Qdisc*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (struct Qdisc*) ;
 int FUNC_25 (struct Qdisc*) ;
 int FUNC_26 (struct Qdisc*) ;
 int FUNC_27 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct hfsc_class*,int) ;
 int FUNC_30 (struct hfsc_class*,int ,int ) ;

__attribute__((used)) static int
FUNC_31(struct Qdisc *VAR_18, u32 VAR_19, u32 VAR_20,
    struct nlattr **VAR_21, unsigned long *VAR_22,
    struct netlink_ext_ack *VAR_23)
{
 struct hfsc_sched *VAR_24 = FUNC_22(VAR_18);
 struct hfsc_class *VAR_25 = (struct hfsc_class *)*VAR_22;
 struct hfsc_class *VAR_26 = ((void*)0);
 struct nlattr *VAR_27 = VAR_21[VAR_12];
 struct nlattr *VAR_28[VAR_9 + 1];
 struct tc_service_curve *VAR_29 = ((void*)0), *VAR_30 = ((void*)0), *VAR_31 = ((void*)0);
 u64 VAR_32;
 int VAR_33;

 if (VAR_27 == ((void*)0))
  return -VAR_1;

 VAR_33 = FUNC_15(VAR_28, VAR_9, VAR_27, VAR_15,
       ((void*)0));
 if (VAR_33 < 0)
  return VAR_33;

 if (VAR_28[VAR_10]) {
  VAR_29 = FUNC_14(VAR_28[VAR_10]);
  if (VAR_29->m1 == 0 && VAR_29->m2 == 0)
   VAR_29 = ((void*)0);
 }

 if (VAR_28[VAR_8]) {
  VAR_30 = FUNC_14(VAR_28[VAR_8]);
  if (VAR_30->m1 == 0 && VAR_30->m2 == 0)
   VAR_30 = ((void*)0);
 }

 if (VAR_28[VAR_11]) {
  VAR_31 = FUNC_14(VAR_28[VAR_11]);
  if (VAR_31->m1 == 0 && VAR_31->m2 == 0)
   VAR_31 = ((void*)0);
 }

 if (VAR_25 != ((void*)0)) {
  int VAR_34;

  if (VAR_20) {
   if (VAR_25->cl_parent &&
       VAR_25->cl_parent->cl_common.classid != VAR_20)
    return -VAR_1;
   if (VAR_25->cl_parent == ((void*)0) && VAR_20 != VAR_14)
    return -VAR_1;
  }
  VAR_32 = FUNC_16();

  if (VAR_21[VAR_13]) {
   VAR_33 = FUNC_3(&VAR_25->bstats, ((void*)0),
          &VAR_25->rate_est,
          ((void*)0),
          FUNC_24(VAR_18),
          VAR_21[VAR_13]);
   if (VAR_33)
    return VAR_33;
  }

  FUNC_25(VAR_18);
  VAR_34 = VAR_25->cl_flags;

  if (VAR_29 != ((void*)0))
   FUNC_6(VAR_25, VAR_29, VAR_32);
  if (VAR_30 != ((void*)0))
   FUNC_5(VAR_25, VAR_30);
  if (VAR_31 != ((void*)0))
   FUNC_7(VAR_25, VAR_31, VAR_32);

  if (VAR_25->qdisc->q.qlen != 0) {
   int VAR_35 = FUNC_21(VAR_25->qdisc);

   if (VAR_25->cl_flags & VAR_6) {
    if (VAR_34 & VAR_6)
     FUNC_29(VAR_25, VAR_35);
    else
     FUNC_9(VAR_25, VAR_35);
   }

   if (VAR_25->cl_flags & VAR_5) {
    if (VAR_34 & VAR_5)
     FUNC_30(VAR_25, 0, VAR_32);
    else
     FUNC_10(VAR_25, VAR_35);
   }
  }
  FUNC_26(VAR_18);

  return 0;
 }

 if (VAR_20 == VAR_14)
  return -VAR_0;

 VAR_26 = &VAR_24->root;
 if (VAR_20) {
  VAR_26 = FUNC_8(VAR_20, VAR_18);
  if (VAR_26 == ((void*)0))
   return -VAR_3;
 }

 if (VAR_19 == 0 || FUNC_1(VAR_19 ^ VAR_18->handle) != 0)
  return -VAR_1;
 if (FUNC_8(VAR_19, VAR_18))
  return -VAR_0;

 if (VAR_29 == ((void*)0) && VAR_30 == ((void*)0))
  return -VAR_1;

 VAR_25 = FUNC_12(sizeof(struct hfsc_class), VAR_4);
 if (VAR_25 == ((void*)0))
  return -VAR_2;

 VAR_33 = FUNC_27(&VAR_25->block, &VAR_25->filter_list, VAR_18, VAR_23);
 if (VAR_33) {
  FUNC_11(VAR_25);
  return VAR_33;
 }

 if (VAR_21[VAR_13]) {
  VAR_33 = FUNC_2(&VAR_25->bstats, ((void*)0), &VAR_25->rate_est,
     ((void*)0),
     FUNC_24(VAR_18),
     VAR_21[VAR_13]);
  if (VAR_33) {
   FUNC_28(VAR_25->block);
   FUNC_11(VAR_25);
   return VAR_33;
  }
 }

 if (VAR_29 != ((void*)0))
  FUNC_6(VAR_25, VAR_29, 0);
 if (VAR_30 != ((void*)0))
  FUNC_5(VAR_25, VAR_30);
 if (VAR_31 != ((void*)0))
  FUNC_7(VAR_25, VAR_31, 0);

 VAR_25->cl_common.classid = VAR_19;
 VAR_25->sched = VAR_24;
 VAR_25->cl_parent = VAR_26;
 VAR_25->qdisc = FUNC_19(VAR_18->dev_queue, &VAR_17,
          VAR_19, ((void*)0));
 if (VAR_25->qdisc == ((void*)0))
  VAR_25->qdisc = &VAR_16;
 else
  FUNC_20(VAR_25->qdisc, 1);
 FUNC_0(&VAR_25->children);
 VAR_25->vt_tree = VAR_7;
 VAR_25->cf_tree = VAR_7;

 FUNC_25(VAR_18);
 FUNC_18(&VAR_24->clhash, &VAR_25->cl_common);
 FUNC_13(&VAR_25->siblings, &VAR_26->children);
 if (VAR_26->level == 0)
  FUNC_23(VAR_26->qdisc);
 FUNC_4(VAR_26);
 FUNC_26(VAR_18);

 FUNC_17(VAR_18, &VAR_24->clhash);

 *VAR_22 = (unsigned long)VAR_25;
 return 0;
}
