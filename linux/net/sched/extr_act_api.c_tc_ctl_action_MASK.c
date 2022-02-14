
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcamsg {int dummy; } ;
struct sk_buff {int sk; } ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int portid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;



 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct nlmsghdr*,int,struct nlattr**,int ,int *,struct netlink_ext_ack*) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct net*,struct nlattr*,struct nlmsghdr*,int ,int const,struct netlink_ext_ack*) ;
 int FUNC_7 (struct net*,struct nlattr*,struct nlmsghdr*,int ,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7,
    struct netlink_ext_ack *VAR_8)
{
 struct net *VAR_9 = FUNC_5(VAR_6->sk);
 struct nlattr *VAR_10[VAR_5 + 1];
 u32 VAR_11 = VAR_6 ? FUNC_1(VAR_6).portid : 0;
 int VAR_12 = 0, VAR_13 = 0;

 if ((VAR_7->nlmsg_type != 129) &&
     !FUNC_3(VAR_6, VAR_0))
  return -VAR_2;

 VAR_12 = FUNC_4(VAR_7, sizeof(struct tcamsg), VAR_10,
         VAR_5, ((void*)0), VAR_8);
 if (VAR_12 < 0)
  return VAR_12;

 if (VAR_10[VAR_4] == ((void*)0)) {
  FUNC_2(VAR_8, "Netlink action attributes missing");
  return -VAR_1;
 }


 switch (VAR_7->nlmsg_type) {
 case 128:






  if (VAR_7->nlmsg_flags & VAR_3)
   VAR_13 = 1;
  VAR_12 = FUNC_7(VAR_9, VAR_10[VAR_4], VAR_7, VAR_11, VAR_13,
         VAR_8);
  break;
 case 130:
  VAR_12 = FUNC_6(VAR_9, VAR_10[VAR_4], VAR_7,
        VAR_11, 130, VAR_8);
  break;
 case 129:
  VAR_12 = FUNC_6(VAR_9, VAR_10[VAR_4], VAR_7,
        VAR_11, 129, VAR_8);
  break;
 default:
  FUNC_0();
 }

 return VAR_12;
}
