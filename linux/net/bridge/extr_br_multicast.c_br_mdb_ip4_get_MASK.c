
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_mdb_entry {int dummy; } ;
struct net_bridge {int dummy; } ;
struct TYPE_2__ {int ip4; } ;
struct br_ip {int vid; int proto; TYPE_1__ u; } ;
typedef int br_dst ;
typedef int __u16 ;
typedef int __be32 ;


 int VAR_0 ;
 struct net_bridge_mdb_entry* FUNC_0 (struct net_bridge*,struct br_ip*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct br_ip*,int ,int) ;

__attribute__((used)) static struct net_bridge_mdb_entry *FUNC_3(struct net_bridge *VAR_1,
         __be32 VAR_2, __u16 VAR_3)
{
 struct br_ip VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.u.ip4 = VAR_2;
 VAR_4.proto = FUNC_1(VAR_0);
 VAR_4.vid = VAR_3;

 return FUNC_0(VAR_1, &VAR_4);
}
