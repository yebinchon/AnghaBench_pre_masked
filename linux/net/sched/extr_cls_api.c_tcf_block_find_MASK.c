
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 () ;
 struct tcf_block* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct tcf_block*) ;
 int FUNC_3 (struct tcf_block*) ;
 struct tcf_block* FUNC_4 (struct net*,struct Qdisc*,unsigned long,int,int ,struct netlink_ext_ack*) ;
 int FUNC_5 (struct Qdisc*,int ,unsigned long*,int,struct netlink_ext_ack*) ;
 int FUNC_6 (struct net*,struct Qdisc**,int *,int,int,struct netlink_ext_ack*) ;
 int FUNC_7 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_block *FUNC_8(struct net *VAR_0, struct Qdisc **VAR_1,
     u32 *VAR_2, unsigned long *VAR_3,
     int VAR_4, u32 VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 struct tcf_block *VAR_7;
 int VAR_8 = 0;

 FUNC_0();

 VAR_8 = FUNC_6(VAR_0, VAR_1, VAR_2, VAR_4, 1, VAR_6);
 if (VAR_8)
  goto errout;

 VAR_8 = FUNC_5(*VAR_1, *VAR_2, VAR_3, VAR_4, VAR_6);
 if (VAR_8)
  goto errout_qdisc;

 VAR_7 = FUNC_4(VAR_0, *VAR_1, *VAR_3, VAR_4, VAR_5, VAR_6);
 if (FUNC_2(VAR_7)) {
  VAR_8 = FUNC_3(VAR_7);
  goto errout_qdisc;
 }

 return VAR_7;

errout_qdisc:
 if (*VAR_1)
  FUNC_7(*VAR_1);
errout:
 *VAR_1 = ((void*)0);
 return FUNC_1(VAR_8);
}
