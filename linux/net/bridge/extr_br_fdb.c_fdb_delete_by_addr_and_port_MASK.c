
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_bridge_port {int dummy; } ;
struct net_bridge_fdb_entry {struct net_bridge_port const* dst; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 struct net_bridge_fdb_entry* FUNC_0 (struct net_bridge*,int const*,int ) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_fdb_entry*,int) ;

__attribute__((used)) static int FUNC_2(struct net_bridge *VAR_1,
           const struct net_bridge_port *VAR_2,
           const u8 *VAR_3, u16 VAR_4)
{
 struct net_bridge_fdb_entry *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_3, VAR_4);
 if (!VAR_5 || VAR_5->dst != VAR_2)
  return -VAR_0;

 FUNC_1(VAR_1, VAR_5, 1);

 return 0;
}
