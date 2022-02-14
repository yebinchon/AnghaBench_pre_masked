
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct sk_buff {int len; unsigned char* data; } ;
struct dn_skb_cb {int services; int segsize; int info; int src_port; } ;
struct TYPE_2__ {int opt_data; int opt_optl; } ;
struct dn_scp {scalar_t__ state; int services_rem; TYPE_1__ conndata_in; int max_window; int segsize_rem; int info_rem; int addrrem; scalar_t__ persist; } ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 (struct sock*,int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int,int ,int) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_9, struct sk_buff *VAR_10)
{
 struct dn_skb_cb *VAR_11 = FUNC_1(VAR_10);
 struct dn_scp *VAR_12 = FUNC_0(VAR_9);
 unsigned char *VAR_13;

 if (VAR_10->len < 4)
  goto out;

 VAR_13 = VAR_10->data;
 VAR_11->services = *VAR_13++;
 VAR_11->info = *VAR_13++;
 VAR_11->segsize = FUNC_5(*(__le16 *)VAR_13);

 if ((VAR_12->state == VAR_1) || (VAR_12->state == VAR_0)) {
  VAR_12->persist = 0;
  VAR_12->addrrem = VAR_11->src_port;
  VAR_9->sk_state = VAR_7;
  VAR_12->state = VAR_3;
  VAR_12->services_rem = VAR_11->services;
  VAR_12->info_rem = VAR_11->info;
  VAR_12->segsize_rem = VAR_11->segsize;

  if ((VAR_12->services_rem & VAR_4) == VAR_5)
   VAR_12->max_window = VAR_8;

  if (VAR_10->len > 0) {
   u16 VAR_14 = *VAR_10->data;
   if ((VAR_14 <= 16) && (VAR_14 <= VAR_10->len)) {
    VAR_12->conndata_in.opt_optl = FUNC_2(VAR_14);
    FUNC_6(VAR_10, 1,
           VAR_12->conndata_in.opt_data, VAR_14);
   }
  }
  FUNC_3(VAR_9, VAR_2, 0);
  if (!FUNC_7(VAR_9, VAR_6))
   VAR_9->sk_state_change(VAR_9);
 }

out:
 FUNC_4(VAR_10);
}
