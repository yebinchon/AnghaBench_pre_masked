
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_chain {int dummy; } ;
struct tcf_block {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
struct Qdisc {int dummy; } ;


 struct tcf_proto* FUNC_0 (struct tcf_chain*,struct tcf_proto*,int) ;
 int FUNC_1 (struct net*,struct sk_buff*,struct nlmsghdr*,struct tcf_proto*,struct tcf_block*,struct Qdisc*,int ,int *,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct net *VAR_0, struct sk_buff *VAR_1,
     struct tcf_block *VAR_2, struct Qdisc *VAR_3,
     u32 VAR_4, struct nlmsghdr *VAR_5,
     struct tcf_chain *VAR_6, int VAR_7,
     bool VAR_8)
{
 struct tcf_proto *VAR_9;

 for (VAR_9 = FUNC_0(VAR_6, ((void*)0), VAR_8);
      VAR_9; VAR_9 = FUNC_0(VAR_6, VAR_9, VAR_8))
  FUNC_1(VAR_0, VAR_1, VAR_5, VAR_9, VAR_2,
          VAR_3, VAR_4, ((void*)0), VAR_7, 0, VAR_8);
}
