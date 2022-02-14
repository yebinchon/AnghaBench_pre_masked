
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tc_multiq_qopt {int bands; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct multiq_sched_data {int max_bands; int bands; struct Qdisc** queues; } ;
struct Qdisc {int handle; int dev_queue; } ;
struct TYPE_3__ {int real_num_tx_queues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct Qdisc**) ;
 struct Qdisc** FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 struct tc_multiq_qopt* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr*) ;
 struct Qdisc VAR_4 ;
 int VAR_5 ;
 struct Qdisc* FUNC_6 (int ,int *,int ,struct netlink_ext_ack*) ;
 TYPE_1__* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*,int) ;
 struct multiq_sched_data* FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_14(struct Qdisc *VAR_6, struct nlattr *VAR_7,
         struct netlink_ext_ack *VAR_8)
{
 struct multiq_sched_data *VAR_9 = FUNC_9(VAR_6);
 struct tc_multiq_qopt *VAR_10;
 struct Qdisc **VAR_11;
 int VAR_12, VAR_13 = 0;

 if (!FUNC_3(FUNC_7(VAR_6)))
  return -VAR_2;
 if (FUNC_5(VAR_7) < sizeof(*VAR_10))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_7);

 VAR_10->bands = FUNC_7(VAR_6)->real_num_tx_queues;

 VAR_11 = FUNC_2(sizeof(*VAR_11) * (VAR_9->max_bands - VAR_9->bands),
     VAR_3);
 if (!VAR_11)
  return -VAR_1;

 FUNC_12(VAR_6);
 VAR_9->bands = VAR_10->bands;
 for (VAR_12 = VAR_9->bands; VAR_12 < VAR_9->max_bands; VAR_12++) {
  if (VAR_9->queues[VAR_12] != &VAR_4) {
   struct Qdisc *VAR_14 = VAR_9->queues[VAR_12];

   VAR_9->queues[VAR_12] = &VAR_4;
   FUNC_10(VAR_14);
   VAR_11[VAR_13++] = VAR_14;
  }
 }

 FUNC_13(VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  FUNC_11(VAR_11[VAR_12]);
 FUNC_1(VAR_11);

 for (VAR_12 = 0; VAR_12 < VAR_9->bands; VAR_12++) {
  if (VAR_9->queues[VAR_12] == &VAR_4) {
   struct Qdisc *VAR_15, *VAR_16;
   VAR_15 = FUNC_6(VAR_6->dev_queue,
        &VAR_5,
        FUNC_0(VAR_6->handle,
           VAR_12 + 1), VAR_8);
   if (VAR_15) {
    FUNC_12(VAR_6);
    VAR_16 = VAR_9->queues[VAR_12];
    VAR_9->queues[VAR_12] = VAR_15;
    if (VAR_15 != &VAR_4)
     FUNC_8(VAR_15, 1);

    if (VAR_16 != &VAR_4)
     FUNC_10(VAR_16);
    FUNC_13(VAR_6);
    FUNC_11(VAR_16);
   }
  }
 }
 return 0;
}
