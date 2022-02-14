
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ type; int * sk; } ;
struct sockaddr_atmsvc {int dummy; } ;
struct sock {int sk_destruct; int sk_rmem_alloc; int sk_wmem_alloc; int sk_write_space; int sk_state_change; } ;
struct net {int dummy; } ;
struct TYPE_3__ {int max_sdu; } ;
struct TYPE_4__ {TYPE_1__ txtp; } ;
struct atm_vcc {scalar_t__ aal_options; scalar_t__ atm_options; scalar_t__ vci; scalar_t__ vpi; int * release_cb; int * push_oam; int * owner; int * pop; int * push; TYPE_2__ qos; int remote; int local; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct atm_vcc* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int) ;
 struct sock* FUNC_4 (struct net*,int,int ,int *,int) ;
 int FUNC_5 (struct socket*,struct sock*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_6(struct net *VAR_8, struct socket *VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct sock *VAR_13;
 struct atm_vcc *VAR_14;

 VAR_9->sk = ((void*)0);
 if (VAR_9->type == VAR_3)
  return -VAR_0;
 VAR_13 = FUNC_4(VAR_8, VAR_11, VAR_2, &VAR_5, VAR_12);
 if (!VAR_13)
  return -VAR_1;
 FUNC_5(VAR_9, VAR_13);
 VAR_13->sk_state_change = VAR_4;
 VAR_13->sk_write_space = VAR_7;

 VAR_14 = FUNC_0(VAR_13);
 VAR_14->dev = ((void*)0);
 FUNC_2(&VAR_14->local, 0, sizeof(struct sockaddr_atmsvc));
 FUNC_2(&VAR_14->remote, 0, sizeof(struct sockaddr_atmsvc));
 VAR_14->qos.txtp.max_sdu = 1 << 16;
 FUNC_3(&VAR_13->sk_wmem_alloc, 1);
 FUNC_1(&VAR_13->sk_rmem_alloc, 0);
 VAR_14->push = ((void*)0);
 VAR_14->pop = ((void*)0);
 VAR_14->owner = ((void*)0);
 VAR_14->push_oam = ((void*)0);
 VAR_14->release_cb = ((void*)0);
 VAR_14->vpi = VAR_14->vci = 0;
 VAR_14->atm_options = VAR_14->aal_options = 0;
 VAR_13->sk_destruct = VAR_6;
 return 0;
}
