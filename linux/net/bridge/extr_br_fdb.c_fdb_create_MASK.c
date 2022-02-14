
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_bridge_port {int dummy; } ;
struct TYPE_3__ {int addr; } ;
struct TYPE_4__ {int vlan_id; TYPE_1__ addr; } ;
struct net_bridge_fdb_entry {unsigned char is_local; unsigned char is_static; int fdb_node; int rhnode; int used; int updated; scalar_t__ is_sticky; scalar_t__ offloaded; scalar_t__ added_by_external_learn; scalar_t__ added_by_user; TYPE_2__ key; struct net_bridge_port* dst; } ;
struct net_bridge {int fdb_list; int fdb_hash_tbl; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int VAR_4 ;
 struct net_bridge_fdb_entry* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct net_bridge_fdb_entry*) ;
 int FUNC_3 (int ,unsigned char const*,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static struct net_bridge_fdb_entry *FUNC_5(struct net_bridge *VAR_5,
            struct net_bridge_port *VAR_6,
            const unsigned char *VAR_7,
            __u16 VAR_8,
            unsigned char VAR_9,
            unsigned char VAR_10)
{
 struct net_bridge_fdb_entry *VAR_11;

 VAR_11 = FUNC_1(VAR_2, VAR_1);
 if (VAR_11) {
  FUNC_3(VAR_11->key.addr.addr, VAR_7, VAR_0);
  VAR_11->dst = VAR_6;
  VAR_11->key.vlan_id = VAR_8;
  VAR_11->is_local = VAR_9;
  VAR_11->is_static = VAR_10;
  VAR_11->added_by_user = 0;
  VAR_11->added_by_external_learn = 0;
  VAR_11->offloaded = 0;
  VAR_11->is_sticky = 0;
  VAR_11->updated = VAR_11->used = VAR_4;
  if (FUNC_4(&VAR_5->fdb_hash_tbl,
        &VAR_11->rhnode,
        VAR_3)) {
   FUNC_2(VAR_2, VAR_11);
   VAR_11 = ((void*)0);
  } else {
   FUNC_0(&VAR_11->fdb_node, &VAR_5->fdb_list);
  }
 }
 return VAR_11;
}
