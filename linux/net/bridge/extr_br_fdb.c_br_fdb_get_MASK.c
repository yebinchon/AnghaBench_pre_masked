
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge_fdb_entry {int dummy; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 struct net_bridge_fdb_entry* FUNC_1 (struct net_bridge*,unsigned char const*,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_bridge*,struct net_bridge_fdb_entry*,int ,int ,int ,int ) ;
 struct net_bridge* FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct sk_buff *VAR_2,
        struct nlattr *VAR_3[],
        struct net_device *VAR_4,
        const unsigned char *VAR_5,
        u16 VAR_6, u32 VAR_7, u32 VAR_8,
        struct netlink_ext_ack *VAR_9)
{
 struct net_bridge *VAR_10 = FUNC_3(VAR_4);
 struct net_bridge_fdb_entry *VAR_11;
 int VAR_12 = 0;

 FUNC_4();
 VAR_11 = FUNC_1(VAR_10, VAR_5, VAR_6);
 if (!VAR_11) {
  FUNC_0(VAR_9, "Fdb entry not found");
  VAR_12 = -VAR_0;
  goto errout;
 }

 VAR_12 = FUNC_2(VAR_2, VAR_10, VAR_11, VAR_7, VAR_8,
       VAR_1, 0);
errout:
 FUNC_5();
 return VAR_12;
}
