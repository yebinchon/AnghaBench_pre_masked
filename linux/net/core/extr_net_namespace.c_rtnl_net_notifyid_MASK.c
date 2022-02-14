
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net_fill_args {int cmd; int nsid; int seq; int portid; } ;
struct net {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_fill_args*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,struct nlmsghdr*,int ) ;
 int FUNC_5 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net *VAR_2, int VAR_3, int VAR_4, u32 VAR_5,
         struct nlmsghdr *VAR_6, gfp_t VAR_7)
{
 struct net_fill_args VAR_8 = {
  .portid = VAR_5,
  .seq = VAR_6 ? VAR_6->nlmsg_seq : 0,
  .cmd = VAR_3,
  .nsid = VAR_4,
 };
 struct sk_buff *VAR_9;
 int VAR_10 = -VAR_0;

 VAR_9 = FUNC_1(FUNC_3(), VAR_7);
 if (!VAR_9)
  goto out;

 VAR_10 = FUNC_2(VAR_9, &VAR_8);
 if (VAR_10 < 0)
  goto err_out;

 FUNC_4(VAR_9, VAR_2, VAR_5, VAR_1, VAR_6, VAR_7);
 return;

err_out:
 FUNC_0(VAR_9);
out:
 FUNC_5(VAR_2, VAR_1, VAR_10);
}
