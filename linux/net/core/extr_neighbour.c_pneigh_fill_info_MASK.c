
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct pneigh_entry {int flags; scalar_t__ protocol; int key; TYPE_1__* dev; } ;
struct nlmsghdr {int dummy; } ;
struct neigh_table {int key_len; int family; } ;
struct ndmsg {int ndm_flags; int ndm_state; int ndm_ifindex; int ndm_type; scalar_t__ ndm_pad2; scalar_t__ ndm_pad1; int ndm_family; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct ndmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int,int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6, struct pneigh_entry *VAR_7,
       u32 VAR_8, u32 VAR_9, int VAR_10, unsigned int VAR_11,
       struct neigh_table *VAR_12)
{
 struct nlmsghdr *VAR_13;
 struct ndmsg *VAR_14;

 VAR_13 = FUNC_5(VAR_6, VAR_8, VAR_9, VAR_10, sizeof(*VAR_14), VAR_11);
 if (VAR_13 == ((void*)0))
  return -VAR_0;

 VAR_14 = FUNC_3(VAR_13);
 VAR_14->ndm_family = VAR_12->family;
 VAR_14->ndm_pad1 = 0;
 VAR_14->ndm_pad2 = 0;
 VAR_14->ndm_flags = VAR_7->flags | VAR_3;
 VAR_14->ndm_type = VAR_5;
 VAR_14->ndm_ifindex = VAR_7->dev ? VAR_7->dev->ifindex : 0;
 VAR_14->ndm_state = VAR_4;

 if (FUNC_0(VAR_6, VAR_1, VAR_12->key_len, VAR_7->key))
  goto nla_put_failure;

 if (VAR_7->protocol && FUNC_1(VAR_6, VAR_2, VAR_7->protocol))
  goto nla_put_failure;

 FUNC_4(VAR_6, VAR_13);
 return 0;

nla_put_failure:
 FUNC_2(VAR_6, VAR_13);
 return -VAR_0;
}
