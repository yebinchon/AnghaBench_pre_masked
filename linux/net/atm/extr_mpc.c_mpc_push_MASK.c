
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tag ;
struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {char* data; int protocol; int truesize; struct net_device* dev; } ;
struct net_device {int name; } ;
struct mpoa_client {TYPE_2__* eg_ops; } ;
struct llc_snap_hdr {int dummy; } ;
struct atm_vcc {scalar_t__ proto_data; } ;
struct atm_skb_data {int dummy; } ;
struct TYPE_8__ {int DH_length; int DLL_header; } ;
struct TYPE_10__ {int packets_rcvd; int latest_ip_addr; TYPE_1__ ctrl_info; struct atm_vcc* shortcut; } ;
typedef TYPE_3__ eg_cache_entry ;
typedef int __be32 ;
struct TYPE_11__ {int saddr; } ;
struct TYPE_9__ {int (* put ) (TYPE_3__*) ;TYPE_3__* (* get_by_tag ) (int ,struct mpoa_client*) ;} ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct atm_vcc*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 struct mpoa_client* FUNC_6 (struct net_device*) ;
 TYPE_7__* FUNC_7 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (char*,int *,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct atm_vcc*,struct net_device*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (struct atm_vcc*,int *) ;
 struct sock* FUNC_14 (struct atm_vcc*) ;
 int FUNC_15 (struct sk_buff*,int ,int ) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 int FUNC_18 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_19 (struct sk_buff*,int ) ;
 int FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sock*) ;
 TYPE_3__* FUNC_22 (int ,struct mpoa_client*) ;
 int FUNC_23 (TYPE_3__*) ;
 int FUNC_24 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_25(struct atm_vcc *VAR_3, struct sk_buff *VAR_4)
{
 struct net_device *VAR_5 = (struct net_device *)VAR_3->proto_data;
 struct sk_buff *VAR_6;
 eg_cache_entry *VAR_7;
 struct mpoa_client *VAR_8;
 __be32 VAR_9;
 char *VAR_10;

 FUNC_2("(%s)\n", VAR_5->name);
 if (VAR_4 == ((void*)0)) {
  FUNC_4("(%s) null skb, closing VCC\n", VAR_5->name);
  FUNC_10(VAR_3, VAR_5);
  return;
 }

 VAR_4->dev = VAR_5;
 if (FUNC_8(VAR_4->data, &VAR_0,
     sizeof(struct llc_snap_hdr)) == 0) {
  struct sock *VAR_11 = FUNC_14(VAR_3);

  FUNC_4("(%s) control packet arrived\n", VAR_5->name);

  FUNC_18(&VAR_11->sk_receive_queue, VAR_4);
  VAR_11->sk_data_ready(VAR_11);
  return;
 }


 FUNC_1(VAR_3, VAR_4->truesize);

 VAR_8 = FUNC_6(VAR_5);
 if (VAR_8 == ((void*)0)) {
  FUNC_12("(%s) unknown MPC\n", VAR_5->name);
  return;
 }

 if (FUNC_8(VAR_4->data, &VAR_2,
     sizeof(struct llc_snap_hdr)) == 0) {
  FUNC_2("(%s) tagged data packet arrived\n", VAR_5->name);

 } else if (FUNC_8(VAR_4->data, &VAR_1,
     sizeof(struct llc_snap_hdr)) == 0) {
  FUNC_12("(%s) Unsupported non-tagged data packet arrived.  Purging\n",
   VAR_5->name);
  FUNC_3(VAR_4);
  return;
 } else {
  FUNC_12("(%s) garbage arrived, purging\n", VAR_5->name);
  FUNC_3(VAR_4);
  return;
 }

 VAR_10 = VAR_4->data + sizeof(struct llc_snap_hdr);
 VAR_9 = *(__be32 *)VAR_10;

 VAR_7 = VAR_8->eg_ops->get_by_tag(VAR_9, VAR_8);
 if (VAR_7 == ((void*)0)) {
  FUNC_12("mpoa: (%s) Didn't find egress cache entry, tag = %u\n",
   VAR_5->name, VAR_9);
  FUNC_13(VAR_3, ((void*)0));
  FUNC_3(VAR_4);
  return;
 }





 if (VAR_7->shortcut == ((void*)0)) {
  VAR_7->shortcut = VAR_3;
  FUNC_12("(%s) egress SVC in use\n", VAR_5->name);
 }

 FUNC_16(VAR_4, sizeof(struct llc_snap_hdr) + sizeof(VAR_9));

 VAR_6 = FUNC_19(VAR_4, VAR_7->ctrl_info.DH_length);

 FUNC_3(VAR_4);
 if (VAR_6 == ((void*)0)) {
  VAR_8->eg_ops->put(VAR_7);
  return;
 }
 FUNC_17(VAR_6, VAR_7->ctrl_info.DH_length);
 FUNC_15(VAR_6, VAR_7->ctrl_info.DLL_header,
    VAR_7->ctrl_info.DH_length);
 VAR_6->protocol = FUNC_5(VAR_6, VAR_5);
 FUNC_20(VAR_6);

 VAR_7->latest_ip_addr = FUNC_7(VAR_6)->saddr;
 VAR_7->packets_rcvd++;
 VAR_8->eg_ops->put(VAR_7);

 FUNC_9(FUNC_0(VAR_6), 0, sizeof(struct atm_skb_data));
 FUNC_11(VAR_6);
}
