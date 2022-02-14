
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net {int dummy; } ;
struct l2tp_tunnel_cfg {int encap; int debug; } ;
struct l2tp_tunnel {int version; int tunnel_id; int peer_tunnel_id; int acpt_newsess; int encap; int fd; int list; int del_work; int ref_count; int debug; int hlist_lock; int * name; int magic; } ;
typedef enum l2tp_encap_type { ____Placeholder_l2tp_encap_type } l2tp_encap_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct l2tp_tunnel* FUNC_2 (int,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;

int FUNC_6(struct net *VAR_6, int VAR_7, int VAR_8, u32 VAR_9, u32 VAR_10, struct l2tp_tunnel_cfg *VAR_11, struct l2tp_tunnel **VAR_12)
{
 struct l2tp_tunnel *VAR_13 = ((void*)0);
 int VAR_14;
 enum l2tp_encap_type VAR_15 = VAR_3;

 if (VAR_11 != ((void*)0))
  VAR_15 = VAR_11->encap;

 VAR_13 = FUNC_2(sizeof(struct l2tp_tunnel), VAR_1);
 if (VAR_13 == ((void*)0)) {
  VAR_14 = -VAR_0;
  goto err;
 }

 VAR_13->version = VAR_8;
 VAR_13->tunnel_id = VAR_9;
 VAR_13->peer_tunnel_id = VAR_10;
 VAR_13->debug = VAR_2;

 VAR_13->magic = VAR_4;
 FUNC_5(&VAR_13->name[0], "tunl %u", VAR_9);
 FUNC_4(&VAR_13->hlist_lock);
 VAR_13->acpt_newsess = 1;

 if (VAR_11 != ((void*)0))
  VAR_13->debug = VAR_11->debug;

 VAR_13->encap = VAR_15;

 FUNC_3(&VAR_13->ref_count, 1);
 VAR_13->fd = VAR_7;


 FUNC_1(&VAR_13->del_work, VAR_5);

 FUNC_0(&VAR_13->list);

 VAR_14 = 0;
err:
 if (VAR_12)
  *VAR_12 = VAR_13;

 return VAR_14;
}
