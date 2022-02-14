
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int refcnt; } ;
struct netlink_ext_ack {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct tcf_proto*,int,int,struct netlink_ext_ack*) ;

__attribute__((used)) static void FUNC_2(struct tcf_proto *VAR_0, bool VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 if (FUNC_0(&VAR_0->refcnt))
  FUNC_1(VAR_0, VAR_1, 1, VAR_2);
}
