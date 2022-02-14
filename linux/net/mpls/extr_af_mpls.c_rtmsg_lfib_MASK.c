
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net {int dummy; } ;
struct mpls_route {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct mpls_route*) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int,int ,struct mpls_route*,unsigned int) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net*,int ,int ,struct nlmsghdr*,int ) ;
 int FUNC_6 (struct net*,int ,int) ;

__attribute__((used)) static void FUNC_7(int VAR_4, u32 VAR_5, struct mpls_route *VAR_6,
         struct nlmsghdr *VAR_7, struct net *VAR_8, u32 VAR_9,
         unsigned int VAR_10)
{
 struct sk_buff *VAR_11;
 u32 VAR_12 = VAR_7 ? VAR_7->nlmsg_seq : 0;
 int VAR_13 = -VAR_1;

 VAR_11 = FUNC_4(FUNC_2(VAR_6), VAR_2);
 if (VAR_11 == ((void*)0))
  goto errout;

 VAR_13 = FUNC_3(VAR_11, VAR_9, VAR_12, VAR_4, VAR_5, VAR_6, VAR_10);
 if (VAR_13 < 0) {

  FUNC_0(VAR_13 == -VAR_0);
  FUNC_1(VAR_11);
  goto errout;
 }
 FUNC_5(VAR_11, VAR_8, VAR_9, VAR_3, VAR_7, VAR_2);

 return;
errout:
 if (VAR_13 < 0)
  FUNC_6(VAR_8, VAR_3, VAR_13);
}
