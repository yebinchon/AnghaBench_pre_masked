
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lec_vcc_priv {int old_pop; scalar_t__ xoff; } ;
struct lec_priv {int lec_arp_lock; struct atm_vcc* mcast_vcc; } ;
struct lec_arp_table {int old_push; struct atm_vcc* vcc; int flags; int status; int atm_addr; } ;
struct TYPE_3__ {int prv; } ;
struct TYPE_4__ {TYPE_1__ sas_addr; } ;
struct atm_vcc {int push; TYPE_2__ remote; int pop; struct lec_vcc_priv* user_back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lec_vcc_priv*) ;
 struct lec_vcc_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (struct lec_priv*,struct lec_arp_table*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct lec_arp_table* FUNC_3 (struct lec_priv*,unsigned char*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct lec_priv *VAR_7, struct atm_vcc *VAR_8)
{
 unsigned long VAR_9;
 unsigned char VAR_10[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
 };
 struct lec_arp_table *VAR_11;
 struct lec_vcc_priv *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_1(sizeof(struct lec_vcc_priv), VAR_3);
 if (!VAR_12)
  return -VAR_1;
 VAR_12->xoff = 0;
 VAR_12->old_pop = VAR_8->pop;
 VAR_8->user_back = VAR_12;
 VAR_8->pop = VAR_5;
 FUNC_5(&VAR_7->lec_arp_lock, VAR_9);
 VAR_11 = FUNC_3(VAR_7, VAR_10);
 if (!VAR_11) {
  VAR_8->pop = VAR_12->old_pop;
  FUNC_0(VAR_12);
  VAR_13 = -VAR_1;
  goto out;
 }
 FUNC_4(VAR_11->atm_addr, VAR_8->remote.sas_addr.prv, VAR_0);
 VAR_11->status = VAR_2;
 VAR_11->flags |= VAR_4;
 VAR_11->vcc = VAR_8;
 VAR_11->old_push = VAR_8->push;
 VAR_8->push = VAR_6;
 VAR_7->mcast_vcc = VAR_8;
 FUNC_2(VAR_7, VAR_11);
out:
 FUNC_6(&VAR_7->lec_arp_lock, VAR_9);
 return VAR_13;
}
