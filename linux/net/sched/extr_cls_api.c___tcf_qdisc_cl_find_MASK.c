
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc_class_ops {unsigned long (* find ) (struct Qdisc*,int ) ;} ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long FUNC_2 (struct Qdisc*,int ) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_2, u32 VAR_3, unsigned long *VAR_4,
          int VAR_5, struct netlink_ext_ack *VAR_6)
{
 if (VAR_5 == VAR_1)
  return 0;


 if (FUNC_1(VAR_3)) {
  const struct Qdisc_class_ops *VAR_7 = VAR_2->ops->cl_ops;

  *VAR_4 = VAR_7->find(VAR_2, VAR_3);
  if (*VAR_4 == 0) {
   FUNC_0(VAR_6, "Specified class doesn't exist");
   return -VAR_0;
  }
 }

 return 0;
}
