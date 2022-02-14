
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef scalar_t__ u8 ;
struct xfrm_address_filter {int dplen; int splen; int family; int daddr; int saddr; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_filter {int sadb_x_filter_dplen; int sadb_x_filter_splen; int sadb_x_filter_family; int sadb_x_filter_daddr; int sadb_x_filter_saddr; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_version; int sadb_msg_satype; } ;
struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ u; int done; int * dump; int msg_portid; int msg_version; } ;
struct pfkey_sock {int dump_lock; TYPE_2__ dump; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct xfrm_address_filter* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pfkey_sock*) ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 struct pfkey_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (int *,scalar_t__,struct xfrm_address_filter*) ;

__attribute__((used)) static int FUNC_8(struct sock *VAR_7, struct sk_buff *VAR_8, const struct sadb_msg *VAR_9, void * const *VAR_10)
{
 u8 VAR_11;
 struct xfrm_address_filter *VAR_12 = ((void*)0);
 struct pfkey_sock *VAR_13 = FUNC_6(VAR_7);

 FUNC_2(&VAR_13->dump_lock);
 if (VAR_13->dump.dump != ((void*)0)) {
  FUNC_3(&VAR_13->dump_lock);
  return -VAR_0;
 }

 VAR_11 = FUNC_5(VAR_9->sadb_msg_satype);
 if (VAR_11 == 0) {
  FUNC_3(&VAR_13->dump_lock);
  return -VAR_1;
 }

 if (VAR_10[VAR_4 - 1]) {
  struct sadb_x_filter *VAR_14 = VAR_10[VAR_4 - 1];

  VAR_12 = FUNC_0(sizeof(*VAR_12), VAR_3);
  if (VAR_12 == ((void*)0)) {
   FUNC_3(&VAR_13->dump_lock);
   return -VAR_2;
  }

  FUNC_1(&VAR_12->saddr, &VAR_14->sadb_x_filter_saddr,
         sizeof(xfrm_address_t));
  FUNC_1(&VAR_12->daddr, &VAR_14->sadb_x_filter_daddr,
         sizeof(xfrm_address_t));
  VAR_12->family = VAR_14->sadb_x_filter_family;
  VAR_12->splen = VAR_14->sadb_x_filter_splen;
  VAR_12->dplen = VAR_14->sadb_x_filter_dplen;
 }

 VAR_13->dump.msg_version = VAR_9->sadb_msg_version;
 VAR_13->dump.msg_portid = VAR_9->sadb_msg_pid;
 VAR_13->dump.dump = VAR_5;
 VAR_13->dump.done = VAR_6;
 FUNC_7(&VAR_13->dump.u.state, VAR_11, VAR_12);
 FUNC_3(&VAR_13->dump_lock);

 return FUNC_4(VAR_13);
}
