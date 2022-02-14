
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct ip_set_net {scalar_t__ ip_set_max; } ;
struct ip_set {scalar_t__ ref; scalar_t__ ref_netlink; int name; } ;
typedef scalar_t__ ip_set_id_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char const*) ;
 struct ip_set* FUNC_1 (struct ip_set_net*,char*) ;
 struct ip_set* FUNC_2 (struct ip_set_net*,scalar_t__) ;
 struct ip_set_net* FUNC_3 (struct net*) ;
 int VAR_7 ;
 char* FUNC_4 (struct nlattr const* const) ;
 scalar_t__ FUNC_5 (struct nlattr const* const*) ;
 int FUNC_6 (int ,char const*,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_8, struct sock *VAR_9,
    struct sk_buff *VAR_10, const struct nlmsghdr *VAR_11,
    const struct nlattr * const VAR_12[],
    struct netlink_ext_ack *VAR_13)
{
 struct ip_set_net *VAR_14 = FUNC_3(VAR_8);
 struct ip_set *VAR_15, *VAR_16;
 const char *VAR_17;
 ip_set_id_t VAR_18;
 int VAR_19 = 0;

 if (FUNC_7(FUNC_5(VAR_12) ||
       !VAR_12[VAR_1] ||
       !VAR_12[VAR_2]))
  return -VAR_4;

 VAR_15 = FUNC_1(VAR_14, FUNC_4(VAR_12[VAR_1]));
 if (!VAR_15)
  return -VAR_0;

 FUNC_8(&VAR_7);
 if (VAR_15->ref != 0 || VAR_15->ref_netlink != 0) {
  VAR_19 = -VAR_5;
  goto out;
 }

 VAR_17 = FUNC_4(VAR_12[VAR_2]);
 for (VAR_18 = 0; VAR_18 < VAR_14->ip_set_max; VAR_18++) {
  VAR_16 = FUNC_2(VAR_14, VAR_18);
  if (VAR_16 && FUNC_0(VAR_16->name, VAR_17)) {
   VAR_19 = -VAR_3;
   goto out;
  }
 }
 FUNC_6(VAR_15->name, VAR_17, VAR_6);

out:
 FUNC_9(&VAR_7);
 return VAR_19;
}
