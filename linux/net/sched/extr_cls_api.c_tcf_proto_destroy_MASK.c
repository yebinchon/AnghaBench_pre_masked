
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_proto {TYPE_1__* ops; int chain; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int owner; int (* destroy ) (struct tcf_proto*,int,struct netlink_ext_ack*) ;} ;


 int FUNC_0 (struct tcf_proto*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct tcf_proto*,int,struct netlink_ext_ack*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct tcf_proto*) ;

__attribute__((used)) static void FUNC_5(struct tcf_proto *VAR_1, bool VAR_2,
         bool VAR_3, struct netlink_ext_ack *VAR_4)
{
 VAR_1->ops->destroy(VAR_1, VAR_2, VAR_4);
 if (VAR_3)
  FUNC_4(VAR_1->chain, VAR_1);
 FUNC_3(VAR_1->chain);
 FUNC_1(VAR_1->ops->owner);
 FUNC_0(VAR_1, VAR_0);
}
