
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int ifindex; } ;
struct br_port_msg {int ifindex; int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct br_port_msg*,int ,int) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct br_port_msg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4,
       struct net_device *VAR_5,
       int VAR_6, u32 VAR_7,
       u32 VAR_8, int VAR_9, unsigned int VAR_10)
{
 struct br_port_msg *VAR_11;
 struct nlmsghdr *VAR_12;
 struct nlattr *VAR_13;

 VAR_12 = FUNC_7(VAR_4, VAR_7, VAR_8, VAR_9, sizeof(*VAR_11), 0);
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_12);
 FUNC_0(VAR_11, 0, sizeof(*VAR_11));
 VAR_11->family = VAR_0;
 VAR_11->ifindex = VAR_5->ifindex;
 VAR_13 = FUNC_2(VAR_4, VAR_2);
 if (!VAR_13)
  goto cancel;

 if (FUNC_3(VAR_4, VAR_3, VAR_6))
  goto end;

 FUNC_1(VAR_4, VAR_13);
 FUNC_6(VAR_4, VAR_12);
 return 0;

end:
 FUNC_1(VAR_4, VAR_13);
cancel:
 FUNC_4(VAR_4, VAR_12);
 return -VAR_1;
}
