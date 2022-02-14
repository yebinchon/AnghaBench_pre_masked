
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {int ifindex; } ;
struct ndmsg {unsigned int ndm_flags; scalar_t__ ndm_state; int ndm_ifindex; scalar_t__ ndm_type; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; int ndm_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,scalar_t__*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct ndmsg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5,
       struct net_device *VAR_6,
       u8 *VAR_7, u16 VAR_8, u32 VAR_9, u32 VAR_10,
       int VAR_11, unsigned int VAR_12,
       int VAR_13, u16 VAR_14)
{
 struct nlmsghdr *VAR_15;
 struct ndmsg *VAR_16;

 VAR_15 = FUNC_4(VAR_5, VAR_9, VAR_10, VAR_11, sizeof(*VAR_16), VAR_13);
 if (!VAR_15)
  return -VAR_1;

 VAR_16 = FUNC_2(VAR_15);
 VAR_16->ndm_family = VAR_0;
 VAR_16->ndm_pad1 = 0;
 VAR_16->ndm_pad2 = 0;
 VAR_16->ndm_flags = VAR_12;
 VAR_16->ndm_type = 0;
 VAR_16->ndm_ifindex = VAR_6->ifindex;
 VAR_16->ndm_state = VAR_14;

 if (FUNC_0(VAR_5, VAR_3, VAR_2, VAR_7))
  goto nla_put_failure;
 if (VAR_8)
  if (FUNC_0(VAR_5, VAR_4, sizeof(u16), &VAR_8))
   goto nla_put_failure;

 FUNC_3(VAR_5, VAR_15);
 return 0;

nla_put_failure:
 FUNC_1(VAR_5, VAR_15);
 return -VAR_1;
}
