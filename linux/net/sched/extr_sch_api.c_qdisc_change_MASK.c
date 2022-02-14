
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qdisc_size_table {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int flags; int rate_est; int cpu_bstats; int bstats; int stab; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* change ) (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qdisc_size_table*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct qdisc_size_table*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ,int *,int *,int ,struct nlattr*) ;
 struct qdisc_size_table* FUNC_4 (struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_5 (struct qdisc_size_table*) ;
 int FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (int ,struct qdisc_size_table*) ;
 struct qdisc_size_table* FUNC_8 (int ) ;
 int FUNC_9 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_10(struct Qdisc *VAR_8, struct nlattr **VAR_9,
   struct netlink_ext_ack *VAR_10)
{
 struct qdisc_size_table *VAR_11, *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 if (VAR_9[VAR_4]) {
  if (!VAR_8->ops->change) {
   FUNC_1(VAR_10, "Change operation not supported by specified qdisc");
   return -VAR_0;
  }
  if (VAR_9[VAR_3] || VAR_9[VAR_2]) {
   FUNC_1(VAR_10, "Change of blocks is not supported");
   return -VAR_1;
  }
  VAR_13 = VAR_8->ops->change(VAR_8, VAR_9[VAR_4], VAR_10);
  if (VAR_13)
   return VAR_13;
 }

 if (VAR_9[VAR_6]) {
  VAR_12 = FUNC_4(VAR_9[VAR_6], VAR_10);
  if (FUNC_0(VAR_12))
   return FUNC_2(VAR_12);
 }

 VAR_11 = FUNC_8(VAR_8->stab);
 FUNC_7(VAR_8->stab, VAR_12);
 FUNC_5(VAR_11);

 if (VAR_9[VAR_5]) {


  if (VAR_8->flags & VAR_7)
   goto out;
  FUNC_3(&VAR_8->bstats,
          VAR_8->cpu_bstats,
          &VAR_8->rate_est,
          ((void*)0),
          FUNC_6(VAR_8),
          VAR_9[VAR_5]);
 }
out:
 return 0;
}
