
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* egress_block_set ) (struct Qdisc*,scalar_t__) ;int (* ingress_block_set ) (struct Qdisc*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct Qdisc*,scalar_t__) ;
 int FUNC_3 (struct Qdisc*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_4, struct nlattr **VAR_5,
       struct netlink_ext_ack *VAR_6)
{
 u32 VAR_7;

 if (VAR_5[VAR_3]) {
  VAR_7 = FUNC_1(VAR_5[VAR_3]);

  if (!VAR_7) {
   FUNC_0(VAR_6, "Ingress block index cannot be 0");
   return -VAR_0;
  }
  if (!VAR_4->ops->ingress_block_set) {
   FUNC_0(VAR_6, "Ingress block sharing is not supported");
   return -VAR_1;
  }
  VAR_4->ops->ingress_block_set(VAR_4, VAR_7);
 }
 if (VAR_5[VAR_2]) {
  VAR_7 = FUNC_1(VAR_5[VAR_2]);

  if (!VAR_7) {
   FUNC_0(VAR_6, "Egress block index cannot be 0");
   return -VAR_0;
  }
  if (!VAR_4->ops->egress_block_set) {
   FUNC_0(VAR_6, "Egress block sharing is not supported");
   return -VAR_1;
  }
  VAR_4->ops->egress_block_set(VAR_4, VAR_7);
 }
 return 0;
}
