
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct Qdisc_ops {int dummy; } ;
struct Qdisc {int handle; int dev_queue; } ;


 int VAR_0 ;
 struct Qdisc* FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct Qdisc*,unsigned int) ;
 struct Qdisc* FUNC_3 (int ,struct Qdisc_ops*,int ,struct netlink_ext_ack*) ;
 int FUNC_4 (struct Qdisc*) ;

struct Qdisc *FUNC_5(struct Qdisc *VAR_1, struct Qdisc_ops *VAR_2,
          unsigned int VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct Qdisc *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_3(VAR_1->dev_queue, VAR_2, FUNC_1(VAR_1->handle, 1),
         VAR_4);
 if (VAR_5) {
  VAR_6 = FUNC_2(VAR_5, VAR_3);
  if (VAR_6 < 0) {
   FUNC_4(VAR_5);
   VAR_5 = ((void*)0);
  }
 }

 return VAR_5 ? : FUNC_0(VAR_6);
}
