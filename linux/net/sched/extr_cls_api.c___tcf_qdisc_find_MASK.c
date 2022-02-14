
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {struct Qdisc* qdisc; } ;
struct net {int dummy; } ;
struct Qdisc_class_ops {int tcf_block; } ;
struct Qdisc {TYPE_1__* ops; scalar_t__ handle; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 struct net_device* FUNC_2 (struct net*,int) ;
 struct Qdisc* FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (struct Qdisc*) ;
 struct Qdisc* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct net *VAR_4, struct Qdisc **VAR_5,
       u32 *VAR_6, int VAR_7, bool VAR_8,
       struct netlink_ext_ack *VAR_9)
{
 const struct Qdisc_class_ops *VAR_10;
 struct net_device *VAR_11;
 int VAR_12 = 0;

 if (VAR_7 == VAR_3)
  return 0;

 FUNC_7();


 VAR_11 = FUNC_2(VAR_4, VAR_7);
 if (!VAR_11) {
  FUNC_8();
  return -VAR_1;
 }


 if (!*VAR_6) {
  *VAR_5 = VAR_11->qdisc;
  *VAR_6 = (*VAR_5)->handle;
 } else {
  *VAR_5 = FUNC_3(VAR_11, FUNC_1(*VAR_6));
  if (!*VAR_5) {
   FUNC_0(VAR_9, "Parent Qdisc doesn't exists");
   VAR_12 = -VAR_0;
   goto errout_rcu;
  }
 }

 *VAR_5 = FUNC_6(*VAR_5);
 if (!*VAR_5) {
  FUNC_0(VAR_9, "Parent Qdisc doesn't exists");
  VAR_12 = -VAR_0;
  goto errout_rcu;
 }


 VAR_10 = (*VAR_5)->ops->cl_ops;
 if (!VAR_10) {
  FUNC_0(VAR_9, "Qdisc not classful");
  VAR_12 = -VAR_0;
  goto errout_qdisc;
 }

 if (!VAR_10->tcf_block) {
  FUNC_0(VAR_9, "Class doesn't support blocks");
  VAR_12 = -VAR_2;
  goto errout_qdisc;
 }

errout_rcu:





 FUNC_8();
 return VAR_12;

errout_qdisc:
 FUNC_8();

 if (VAR_8)
  FUNC_4(*VAR_5);
 else
  FUNC_5(*VAR_5);
 *VAR_5 = ((void*)0);

 return VAR_12;
}
