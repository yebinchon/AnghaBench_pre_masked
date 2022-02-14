
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int rate; } ;
struct qdisc_rate_table {TYPE_1__ rate; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_8__ {int classid; } ;
struct cbq_class {int minidle; scalar_t__ ewma_log; scalar_t__ maxidle; scalar_t__ avpkt; struct cbq_class* tparent; struct cbq_class* share; struct cbq_class* borrow; struct qdisc_rate_table* R_tab; int weight; int allot; int quantum; struct Qdisc* qdisc; TYPE_2__ common; TYPE_4__* q; int block; int rate_est; int bstats; int filter_list; int * next_alive; } ;
struct cbq_sched_data {int hgenerator; int clhash; struct cbq_class link; } ;
struct Qdisc {int handle; int dev_queue; } ;
struct TYPE_9__ {scalar_t__ qlen; } ;
struct TYPE_10__ {TYPE_3__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_15 ;
 int FUNC_3 (struct cbq_class*) ;
 int FUNC_4 (struct cbq_class*) ;
 struct cbq_class* FUNC_5 (struct cbq_sched_data*,int) ;
 int FUNC_6 (struct cbq_class*) ;
 int FUNC_7 (struct cbq_class*) ;
 int FUNC_8 (struct nlattr**,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_9 (struct cbq_sched_data*,struct cbq_class*) ;
 int FUNC_10 (struct cbq_class*,int ) ;
 int FUNC_11 (struct cbq_class*,int ) ;
 int FUNC_12 (struct cbq_class*,int ) ;
 int FUNC_13 (int *,int *,int *,int *,int ,struct nlattr*) ;
 int FUNC_14 (int *,int *,int *,int *,int ,struct nlattr*) ;
 int FUNC_15 (struct cbq_class*) ;
 struct cbq_class* FUNC_16 (int,int ) ;
 int FUNC_17 (struct nlattr*) ;
 TYPE_4__ VAR_16 ;
 int VAR_17 ;
 int FUNC_18 (struct Qdisc*,int *) ;
 TYPE_4__* FUNC_19 (int ,int *,int,int *) ;
 struct qdisc_rate_table* FUNC_20 (int ,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_21 (TYPE_4__*,int) ;
 struct cbq_sched_data* FUNC_22 (struct Qdisc*) ;
 int FUNC_23 (struct qdisc_rate_table*) ;
 int FUNC_24 (struct Qdisc*) ;
 int FUNC_25 (struct Qdisc*) ;
 int FUNC_26 (struct Qdisc*) ;
 int FUNC_27 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;
 int FUNC_28 (int ) ;

__attribute__((used)) static int
FUNC_29(struct Qdisc *VAR_18, u32 VAR_19, u32 VAR_20, struct nlattr **VAR_21,
   unsigned long *VAR_22, struct netlink_ext_ack *VAR_23)
{
 int VAR_24;
 struct cbq_sched_data *VAR_25 = FUNC_22(VAR_18);
 struct cbq_class *VAR_26 = (struct cbq_class *)*VAR_22;
 struct nlattr *VAR_27 = VAR_21[VAR_13];
 struct nlattr *VAR_28[VAR_7 + 1];
 struct cbq_class *VAR_29;
 struct qdisc_rate_table *VAR_30 = ((void*)0);

 VAR_24 = FUNC_8(VAR_28, VAR_27, VAR_23);
 if (VAR_24 < 0)
  return VAR_24;

 if (VAR_28[VAR_8] || VAR_28[VAR_9]) {
  FUNC_0(VAR_23, "Neither overlimit strategy nor policing attributes can be used for changing class params");
  return -VAR_3;
 }

 if (VAR_26) {

  if (VAR_20) {
   if (VAR_26->tparent &&
       VAR_26->tparent->common.classid != VAR_20) {
    FUNC_0(VAR_23, "Invalid parent id");
    return -VAR_0;
   }
   if (!VAR_26->tparent && VAR_20 != VAR_15) {
    FUNC_0(VAR_23, "Parent must be root");
    return -VAR_0;
   }
  }

  if (VAR_28[VAR_10]) {
   VAR_30 = FUNC_20(FUNC_17(VAR_28[VAR_10]),
           VAR_28[VAR_11], VAR_23);
   if (VAR_30 == ((void*)0))
    return -VAR_0;
  }

  if (VAR_21[VAR_14]) {
   VAR_24 = FUNC_14(&VAR_26->bstats, ((void*)0),
          &VAR_26->rate_est,
          ((void*)0),
          FUNC_24(VAR_18),
          VAR_21[VAR_14]);
   if (VAR_24) {
    FUNC_0(VAR_23, "Failed to replace specified rate estimator");
    FUNC_23(VAR_30);
    return VAR_24;
   }
  }


  FUNC_25(VAR_18);

  if (VAR_26->next_alive != ((void*)0))
   FUNC_6(VAR_26);

  if (VAR_30) {
   FUNC_23(VAR_26->R_tab);
   VAR_26->R_tab = VAR_30;
  }

  if (VAR_28[VAR_6])
   FUNC_11(VAR_26, FUNC_17(VAR_28[VAR_6]));

  if (VAR_28[VAR_12]) {
   FUNC_9(VAR_25, VAR_26);
   FUNC_12(VAR_26, FUNC_17(VAR_28[VAR_12]));
  }

  if (VAR_28[VAR_5])
   FUNC_10(VAR_26, FUNC_17(VAR_28[VAR_5]));

  if (VAR_26->q->q.qlen)
   FUNC_3(VAR_26);

  FUNC_26(VAR_18);

  return 0;
 }

 if (VAR_20 == VAR_15)
  return -VAR_0;

 if (!VAR_28[VAR_12] || !VAR_28[VAR_10] || !VAR_28[VAR_6]) {
  FUNC_0(VAR_23, "One of the following attributes MUST be specified: WRR, rate or link sharing");
  return -VAR_0;
 }

 VAR_30 = FUNC_20(FUNC_17(VAR_28[VAR_10]), VAR_28[VAR_11],
         VAR_23);
 if (VAR_30 == ((void*)0))
  return -VAR_0;

 if (VAR_19) {
  VAR_24 = -VAR_0;
  if (FUNC_1(VAR_19 ^ VAR_18->handle) ||
      FUNC_5(VAR_25, VAR_19)) {
   FUNC_0(VAR_23, "Specified class not found");
   goto failure;
  }
 } else {
  int VAR_31;
  VAR_19 = FUNC_2(VAR_18->handle, 0x8000);

  for (VAR_31 = 0; VAR_31 < 0x8000; VAR_31++) {
   if (++VAR_25->hgenerator >= 0x8000)
    VAR_25->hgenerator = 1;
   if (FUNC_5(VAR_25, VAR_19|VAR_25->hgenerator) == ((void*)0))
    break;
  }
  VAR_24 = -VAR_2;
  if (VAR_31 >= 0x8000) {
   FUNC_0(VAR_23, "Unable to generate classid");
   goto failure;
  }
  VAR_19 = VAR_19|VAR_25->hgenerator;
 }

 VAR_29 = &VAR_25->link;
 if (VAR_20) {
  VAR_29 = FUNC_5(VAR_25, VAR_20);
  VAR_24 = -VAR_0;
  if (!VAR_29) {
   FUNC_0(VAR_23, "Failed to find parentid");
   goto failure;
  }
 }

 VAR_24 = -VAR_1;
 VAR_26 = FUNC_16(sizeof(*VAR_26), VAR_4);
 if (VAR_26 == ((void*)0))
  goto failure;

 VAR_24 = FUNC_27(&VAR_26->block, &VAR_26->filter_list, VAR_18, VAR_23);
 if (VAR_24) {
  FUNC_15(VAR_26);
  return VAR_24;
 }

 if (VAR_21[VAR_14]) {
  VAR_24 = FUNC_13(&VAR_26->bstats, ((void*)0), &VAR_26->rate_est,
     ((void*)0),
     FUNC_24(VAR_18),
     VAR_21[VAR_14]);
  if (VAR_24) {
   FUNC_0(VAR_23, "Couldn't create new estimator");
   FUNC_28(VAR_26->block);
   FUNC_15(VAR_26);
   goto failure;
  }
 }

 VAR_26->R_tab = VAR_30;
 VAR_30 = ((void*)0);
 VAR_26->q = FUNC_19(VAR_18->dev_queue, &VAR_17, VAR_19,
      ((void*)0));
 if (!VAR_26->q)
  VAR_26->q = &VAR_16;
 else
  FUNC_21(VAR_26->q, 1);

 VAR_26->common.classid = VAR_19;
 VAR_26->tparent = VAR_29;
 VAR_26->qdisc = VAR_18;
 VAR_26->allot = VAR_29->allot;
 VAR_26->quantum = VAR_26->allot;
 VAR_26->weight = VAR_26->R_tab->rate.rate;

 FUNC_25(VAR_18);
 FUNC_7(VAR_26);
 VAR_26->borrow = VAR_26->tparent;
 if (VAR_26->tparent != &VAR_25->link)
  VAR_26->share = VAR_26->tparent;
 FUNC_4(VAR_29);
 VAR_26->minidle = -0x7FFFFFFF;
 FUNC_11(VAR_26, FUNC_17(VAR_28[VAR_6]));
 FUNC_12(VAR_26, FUNC_17(VAR_28[VAR_12]));
 if (VAR_26->ewma_log == 0)
  VAR_26->ewma_log = VAR_25->link.ewma_log;
 if (VAR_26->maxidle == 0)
  VAR_26->maxidle = VAR_25->link.maxidle;
 if (VAR_26->avpkt == 0)
  VAR_26->avpkt = VAR_25->link.avpkt;
 if (VAR_28[VAR_5])
  FUNC_10(VAR_26, FUNC_17(VAR_28[VAR_5]));
 FUNC_26(VAR_18);

 FUNC_18(VAR_18, &VAR_25->clhash);

 *VAR_22 = (unsigned long)VAR_26;
 return 0;

failure:
 FUNC_23(VAR_30);
 return VAR_24;
}
