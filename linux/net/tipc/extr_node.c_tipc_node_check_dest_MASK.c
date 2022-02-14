
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int namedq; int link; } ;
struct tipc_node {scalar_t__ signature; int link_cnt; scalar_t__ state; int timer; int keepalive_intv; TYPE_1__ bc_entry; int net; int capabilities; struct tipc_link_entry* links; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_link_entry {int maddr; struct tipc_link* link; int inputq; } ;
struct tipc_link {int dummy; } ;
struct tipc_bearer {size_t identity; int window; int priority; int mtu; int net_plane; int tolerance; int name; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 unsigned long VAR_4 ;
 int FUNC_1 (int *,struct tipc_media_addr*,int) ;
 int FUNC_2 (int *,struct tipc_media_addr*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (int ) ;
 char* FUNC_5 (int ,char) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net*,char*,size_t,int ,int ,int ,int ,int ,int ,int ,scalar_t__,int *,int ,int ,int ,int *,int *,struct tipc_link**) ;
 int FUNC_8 (struct tipc_link*,int ) ;
 int FUNC_9 (struct tipc_link*) ;
 scalar_t__ FUNC_10 (struct tipc_link*) ;
 int FUNC_11 (struct tipc_link*) ;
 int FUNC_12 (struct tipc_node*,struct tipc_link*) ;
 struct tipc_node* FUNC_13 (struct net*,scalar_t__,int *,int ) ;
 int FUNC_14 (struct tipc_node*) ;
 int FUNC_15 (struct tipc_node*,size_t,int) ;
 int FUNC_16 (struct tipc_node*) ;
 int FUNC_17 (struct tipc_node*) ;
 int FUNC_18 (struct tipc_node*) ;
 int FUNC_19 (struct net*) ;
 int FUNC_20 (struct tipc_link*,int ,char*) ;

void FUNC_21(struct net *VAR_5, u32 VAR_6,
     u8 *VAR_7, struct tipc_bearer *VAR_8,
     u16 VAR_9, u32 VAR_10,
     struct tipc_media_addr *VAR_11,
     bool *VAR_12, bool *VAR_13)
{
 struct tipc_node *VAR_14;
 struct tipc_link *VAR_15;
 struct tipc_link_entry *VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 bool VAR_21 = 1;
 char *VAR_22;
 unsigned long VAR_23;
 u16 VAR_24;

 *VAR_13 = 0;
 *VAR_12 = 0;

 VAR_14 = FUNC_13(VAR_5, VAR_6, VAR_7, VAR_9);
 if (!VAR_14)
  return;

 FUNC_17(VAR_14);

 VAR_16 = &VAR_14->links[VAR_8->identity];


 VAR_15 = VAR_16->link;
 VAR_19 = VAR_15 && FUNC_10(VAR_15);
 VAR_17 = VAR_15 && !FUNC_1(&VAR_16->maddr, VAR_11, sizeof(*VAR_11));
 VAR_18 = (VAR_10 == VAR_14->signature);



 if (VAR_18 && VAR_17 && VAR_19) {

  VAR_21 = 0;
 } else if (VAR_18 && VAR_17 && !VAR_19) {

  *VAR_12 = 1;
 } else if (VAR_18 && !VAR_17 && VAR_19) {
  *VAR_13 = 1;
 } else if (VAR_18 && !VAR_17 && !VAR_19) {





  VAR_20 = 1;
  *VAR_12 = 1;
 } else if (!VAR_18 && VAR_17 && VAR_19) {
  VAR_14->signature = VAR_10;
 } else if (!VAR_18 && VAR_17 && !VAR_19) {



  VAR_14->signature = VAR_10;
  *VAR_12 = 1;
 } else if (!VAR_18 && !VAR_17 && VAR_19) {



  *VAR_13 = 1;
 } else if (!VAR_18 && !VAR_17 && !VAR_19) {



  VAR_14->signature = VAR_10;
  VAR_20 = 1;
  *VAR_12 = 1;
 }

 if (!VAR_20)
  goto exit;


 if (!VAR_15) {
  if (VAR_14->link_cnt == 2)
   goto exit;

  VAR_22 = FUNC_5(VAR_8->name, ':') + 1;
  FUNC_0(&VAR_24, sizeof(u16));
  if (!FUNC_7(VAR_5, VAR_22, VAR_8->identity, VAR_8->tolerance,
          VAR_8->net_plane, VAR_8->mtu, VAR_8->priority,
          VAR_8->window, VAR_24,
          FUNC_19(VAR_5), VAR_6, VAR_7,
          VAR_14->capabilities,
          FUNC_6(VAR_14->net), VAR_14->bc_entry.link,
          &VAR_16->inputq,
          &VAR_14->bc_entry.namedq, &VAR_15)) {
   *VAR_12 = 0;
   goto exit;
  }
  FUNC_20(VAR_15, VAR_3, "link created!");
  FUNC_11(VAR_15);
  FUNC_8(VAR_15, VAR_1);
  if (VAR_14->state == VAR_2)
   FUNC_8(VAR_15, VAR_0);
  VAR_16->link = VAR_15;
  VAR_14->link_cnt++;
  FUNC_12(VAR_14, VAR_15);
  if (VAR_14->link_cnt == 1) {
   VAR_23 = VAR_4 + FUNC_4(VAR_14->keepalive_intv);
   if (!FUNC_3(&VAR_14->timer, VAR_23))
    FUNC_14(VAR_14);
  }
 }
 FUNC_2(&VAR_16->maddr, VAR_11, sizeof(*VAR_11));
exit:
 FUNC_18(VAR_14);
 if (VAR_21 && VAR_15 && !FUNC_9(VAR_15))
  FUNC_15(VAR_14, VAR_8->identity, 0);
 FUNC_16(VAR_14);
}
