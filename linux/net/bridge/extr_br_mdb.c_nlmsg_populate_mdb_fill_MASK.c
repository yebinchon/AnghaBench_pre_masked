
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
struct br_mdb_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct br_port_msg*,int ,int) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct br_mdb_entry*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct br_port_msg* FUNC_5 (struct nlmsghdr*) ;
 int FUNC_6 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_7 (struct sk_buff*,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_5,
       struct net_device *VAR_6,
       struct br_mdb_entry *VAR_7, u32 VAR_8,
       u32 VAR_9, int VAR_10, unsigned int VAR_11)
{
 struct nlmsghdr *VAR_12;
 struct br_port_msg *VAR_13;
 struct nlattr *VAR_14, *VAR_15;

 VAR_12 = FUNC_7(VAR_5, VAR_8, VAR_9, VAR_10, sizeof(*VAR_13), 0);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_5(VAR_12);
 FUNC_0(VAR_13, 0, sizeof(*VAR_13));
 VAR_13->family = VAR_0;
 VAR_13->ifindex = VAR_6->ifindex;
 VAR_14 = FUNC_2(VAR_5, VAR_2);
 if (VAR_14 == ((void*)0))
  goto cancel;
 VAR_15 = FUNC_2(VAR_5, VAR_3);
 if (VAR_15 == ((void*)0))
  goto end;

 if (FUNC_3(VAR_5, VAR_4, sizeof(*VAR_7), VAR_7))
  goto end;

 FUNC_1(VAR_5, VAR_15);
 FUNC_1(VAR_5, VAR_14);
 FUNC_6(VAR_5, VAR_12);
 return 0;

end:
 FUNC_1(VAR_5, VAR_14);
cancel:
 FUNC_4(VAR_5, VAR_12);
 return -VAR_1;
}
