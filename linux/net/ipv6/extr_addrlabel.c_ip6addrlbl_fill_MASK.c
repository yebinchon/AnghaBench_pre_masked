
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct ip6addrlbl_entry {int label; int prefix; int ifindex; int prefixlen; } ;
struct ifaddrlblmsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlmsghdr*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_3,
      struct ip6addrlbl_entry *VAR_4,
      u32 VAR_5,
      u32 VAR_6, u32 VAR_7, int VAR_8,
      unsigned int VAR_9)
{
 struct nlmsghdr *VAR_10 = FUNC_5(VAR_3, VAR_6, VAR_7, VAR_8,
      sizeof(struct ifaddrlblmsg), VAR_9);
 if (!VAR_10)
  return -VAR_0;

 FUNC_0(VAR_10, VAR_4->prefixlen, VAR_4->ifindex, VAR_5);

 if (FUNC_1(VAR_3, VAR_1, &VAR_4->prefix) < 0 ||
     FUNC_2(VAR_3, VAR_2, VAR_4->label) < 0) {
  FUNC_3(VAR_3, VAR_10);
  return -VAR_0;
 }

 FUNC_4(VAR_3, VAR_10);
 return 0;
}
