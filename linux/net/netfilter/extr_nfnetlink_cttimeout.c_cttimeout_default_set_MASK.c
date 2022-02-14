
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_l4proto {scalar_t__ l4proto; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
typedef scalar_t__ __u8 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct nf_conntrack_l4proto const*,struct net*,struct nlattr const* const) ;
 struct nf_conntrack_l4proto* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct nlattr const* const) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_5, struct sock *VAR_6,
     struct sk_buff *VAR_7,
     const struct nlmsghdr *VAR_8,
     const struct nlattr * const VAR_9[],
     struct netlink_ext_ack *VAR_10)
{
 const struct nf_conntrack_l4proto *VAR_11;
 __u8 VAR_12;
 int VAR_13;

 if (!VAR_9[VAR_1] ||
     !VAR_9[VAR_2] ||
     !VAR_9[VAR_0])
  return -VAR_3;

 VAR_12 = FUNC_2(VAR_9[VAR_2]);
 VAR_11 = FUNC_1(VAR_12);


 if (VAR_11->l4proto != VAR_12) {
  VAR_13 = -VAR_4;
  goto err;
 }

 VAR_13 = FUNC_0(((void*)0), VAR_11, VAR_5,
     VAR_9[VAR_0]);
 if (VAR_13 < 0)
  goto err;

 return 0;
err:
 return VAR_13;
}
