
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int sk; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int priv_flags; } ;
struct net {int dummy; } ;
struct br_port_msg {scalar_t__ ifindex; } ;
struct br_mdb_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct net_device* FUNC_0 (struct net*,scalar_t__) ;
 int FUNC_1 (struct br_mdb_entry*) ;
 struct br_mdb_entry* FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 struct br_port_msg* FUNC_4 (struct nlmsghdr*) ;
 int FUNC_5 (struct nlmsghdr*,int,struct nlattr**,int ,int *,int *) ;
 int FUNC_6 (char*) ;
 struct net* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_6, struct nlmsghdr *VAR_7,
   struct net_device **VAR_8, struct br_mdb_entry **VAR_9)
{
 struct net *VAR_10 = FUNC_7(VAR_6->sk);
 struct br_mdb_entry *VAR_11;
 struct br_port_msg *VAR_12;
 struct nlattr *VAR_13[VAR_5+1];
 struct net_device *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_5(VAR_7, sizeof(*VAR_12), VAR_13,
         VAR_5, ((void*)0), ((void*)0));
 if (VAR_15 < 0)
  return VAR_15;

 VAR_12 = FUNC_4(VAR_7);
 if (VAR_12->ifindex == 0) {
  FUNC_6("PF_BRIDGE: br_mdb_parse() with invalid ifindex\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_0(VAR_10, VAR_12->ifindex);
 if (VAR_14 == ((void*)0)) {
  FUNC_6("PF_BRIDGE: br_mdb_parse() with unknown ifindex\n");
  return -VAR_1;
 }

 if (!(VAR_14->priv_flags & VAR_3)) {
  FUNC_6("PF_BRIDGE: br_mdb_parse() with non-bridge\n");
  return -VAR_2;
 }

 *VAR_8 = VAR_14;

 if (!VAR_13[VAR_4] ||
     FUNC_3(VAR_13[VAR_4]) != sizeof(struct br_mdb_entry)) {
  FUNC_6("PF_BRIDGE: br_mdb_parse() with invalid attr\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_13[VAR_4]);
 if (!FUNC_1(VAR_11)) {
  FUNC_6("PF_BRIDGE: br_mdb_parse() with invalid entry\n");
  return -VAR_0;
 }

 *VAR_9 = VAR_11;
 return 0;
}
