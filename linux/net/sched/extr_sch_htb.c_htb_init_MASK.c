
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_htb_glob {scalar_t__ version; int rate2quantum; int defcls; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct htb_sched {int rate2quantum; int defcls; int direct_qlen; int direct_queue; int clhash; int filter_list; int block; int work; int watchdog; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {int tx_queue_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct tc_htb_glob* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct Qdisc*) ;
 struct htb_sched* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,struct Qdisc*) ;
 int FUNC_9 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_10(struct Qdisc *VAR_7, struct nlattr *VAR_8,
      struct netlink_ext_ack *VAR_9)
{
 struct htb_sched *VAR_10 = FUNC_6(VAR_7);
 struct nlattr *VAR_11[VAR_4 + 1];
 struct tc_htb_glob *VAR_12;
 int VAR_13;

 FUNC_8(&VAR_10->watchdog, VAR_7);
 FUNC_0(&VAR_10->work, VAR_6);

 if (!VAR_8)
  return -VAR_0;

 VAR_13 = FUNC_9(&VAR_10->block, &VAR_10->filter_list, VAR_7, VAR_9);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_3(VAR_11, VAR_4, VAR_8, VAR_5,
       ((void*)0));
 if (VAR_13 < 0)
  return VAR_13;

 if (!VAR_11[VAR_3])
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_11[VAR_3]);
 if (VAR_12->version != VAR_1 >> 16)
  return -VAR_0;

 VAR_13 = FUNC_4(&VAR_10->clhash);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_7(&VAR_10->direct_queue);

 if (VAR_11[VAR_2])
  VAR_10->direct_qlen = FUNC_2(VAR_11[VAR_2]);
 else
  VAR_10->direct_qlen = FUNC_5(VAR_7)->tx_queue_len;

 if ((VAR_10->rate2quantum = VAR_12->rate2quantum) < 1)
  VAR_10->rate2quantum = 1;
 VAR_10->defcls = VAR_12->defcls;

 return 0;
}
