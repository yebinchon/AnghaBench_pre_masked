
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_bridge_port {TYPE_1__* dev; } ;
struct net_bridge_fdb_entry {scalar_t__ is_local; } ;
struct net_bridge {TYPE_2__* dev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_bridge_fdb_entry* FUNC_0 (struct net_bridge*,unsigned char const*,int ) ;
 int FUNC_1 (struct net_bridge*,char*,int ,unsigned char const*,int ) ;
 int FUNC_2 (struct net_bridge*,unsigned char const*) ;
 struct net_bridge_fdb_entry* FUNC_3 (struct net_bridge*,struct net_bridge_port*,unsigned char const*,int ,int,int) ;
 int FUNC_4 (struct net_bridge*,struct net_bridge_fdb_entry*,int) ;
 int FUNC_5 (struct net_bridge*,struct net_bridge_fdb_entry*,int ,int) ;
 int FUNC_6 (unsigned char const*) ;

__attribute__((used)) static int FUNC_7(struct net_bridge *VAR_3, struct net_bridge_port *VAR_4,
    const unsigned char *VAR_5, u16 VAR_6)
{
 struct net_bridge_fdb_entry *VAR_7;

 if (!FUNC_6(VAR_5))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6);
 if (VAR_7) {



  if (VAR_7->is_local)
   return 0;
  FUNC_1(VAR_3, "adding interface %s with same address as a received packet (addr:%pM, vlan:%u)\n",
         VAR_4 ? VAR_4->dev->name : VAR_3->dev->name, VAR_5, VAR_6);
  FUNC_4(VAR_3, VAR_7, 1);
 }

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, 1, 1);
 if (!VAR_7)
  return -VAR_1;

 FUNC_2(VAR_3, VAR_5);
 FUNC_5(VAR_3, VAR_7, VAR_2, 1);
 return 0;
}
