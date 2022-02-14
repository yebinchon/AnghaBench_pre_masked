
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr_rose {scalar_t__ srose_family; int srose_ndigis; int srose_digi; int srose_call; int srose_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct rose_sock {unsigned int source_ndigis; unsigned int dest_ndigis; TYPE_2__* neighbour; int state; int * dest_digis; scalar_t__ lci; scalar_t__ rand; int dest_call; int dest_addr; struct net_device* device; int source_call; int source_addr; } ;
struct net_device {int dev_addr; } ;
struct full_sockaddr_rose {int * srose_digis; } ;
struct TYPE_6__ {int call; } ;
typedef TYPE_1__ ax25_uid_assoc ;
struct TYPE_7__ {int use; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_20 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ,int *,int ) ;
 int FUNC_8 (struct sock*) ;
 struct net_device* FUNC_9 () ;
 TYPE_2__* FUNC_10 (int *,unsigned char*,unsigned char*,int ) ;
 int FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 struct rose_sock* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 scalar_t__ FUNC_21 (struct sock*,int ) ;
 int FUNC_22 (struct sock*,int ) ;
 int VAR_21 ;

__attribute__((used)) static int FUNC_23(struct socket *VAR_22, struct sockaddr *VAR_23, int VAR_24, int VAR_25)
{
 struct sock *VAR_26 = VAR_22->sk;
 struct rose_sock *VAR_27 = FUNC_13(VAR_26);
 struct sockaddr_rose *VAR_28 = (struct sockaddr_rose *)VAR_23;
 unsigned char VAR_29, VAR_30;
 struct net_device *VAR_31;
 ax25_uid_assoc *VAR_32;
 int VAR_33, VAR_34 = 0;

 if (VAR_24 != sizeof(struct sockaddr_rose) && VAR_24 != sizeof(struct full_sockaddr_rose))
  return -VAR_3;

 if (VAR_28->srose_family != VAR_0)
  return -VAR_3;

 if (VAR_24 == sizeof(struct sockaddr_rose) && VAR_28->srose_ndigis > 1)
  return -VAR_3;

 if ((unsigned int) VAR_28->srose_ndigis > VAR_10)
  return -VAR_3;


 if ((VAR_27->source_ndigis + VAR_28->srose_ndigis) > VAR_10)
  return -VAR_3;

 FUNC_5(VAR_26);

 if (VAR_26->sk_state == VAR_18 && VAR_22->state == VAR_14) {

  VAR_22->state = VAR_13;
  goto out_release;
 }

 if (VAR_26->sk_state == VAR_17 && VAR_22->state == VAR_14) {
  VAR_22->state = VAR_15;
  VAR_34 = -VAR_1;
  goto out_release;
 }

 if (VAR_26->sk_state == VAR_18) {

  VAR_34 = -VAR_4;
  goto out_release;
 }

 VAR_26->sk_state = VAR_17;
 VAR_22->state = VAR_15;

 VAR_27->neighbour = FUNC_10(&VAR_28->srose_addr, &VAR_29,
      &VAR_30, 0);
 if (!VAR_27->neighbour) {
  VAR_34 = -VAR_5;
  goto out_release;
 }

 VAR_27->lci = FUNC_12(VAR_27->neighbour);
 if (!VAR_27->lci) {
  VAR_34 = -VAR_5;
  goto out_release;
 }

 if (FUNC_21(VAR_26, VAR_12)) {
  FUNC_22(VAR_26, VAR_12);

  if ((VAR_31 = FUNC_9()) == ((void*)0)) {
   VAR_34 = -VAR_5;
   goto out_release;
  }

  VAR_32 = FUNC_1(FUNC_3());
  if (!VAR_32) {
   VAR_34 = -VAR_3;
   goto out_release;
  }

  FUNC_6(&VAR_27->source_addr, VAR_31->dev_addr, VAR_8);
  VAR_27->source_call = VAR_32->call;
  VAR_27->device = VAR_31;
  FUNC_2(VAR_32);

  FUNC_11(VAR_26);
 }
 VAR_27->dest_addr = VAR_28->srose_addr;
 VAR_27->dest_call = VAR_28->srose_call;
 VAR_27->rand = ((long)VAR_27 & 0xFFFF) + VAR_27->lci;
 VAR_27->dest_ndigis = VAR_28->srose_ndigis;

 if (VAR_24 == sizeof(struct full_sockaddr_rose)) {
  struct full_sockaddr_rose *VAR_35 = (struct full_sockaddr_rose *)VAR_23;
  for (VAR_33 = 0 ; VAR_33 < VAR_28->srose_ndigis ; VAR_33++)
   VAR_27->dest_digis[VAR_33] = VAR_35->srose_digis[VAR_33];
 } else {
  if (VAR_27->dest_ndigis == 1) {
   VAR_27->dest_digis[0] = VAR_28->srose_digi;
  }
 }


 VAR_22->state = VAR_14;
 VAR_26->sk_state = VAR_19;

 VAR_27->state = VAR_11;

 VAR_27->neighbour->use++;

 FUNC_16(VAR_26, VAR_9);
 FUNC_14(VAR_26);
 FUNC_15(VAR_26);


 if (VAR_26->sk_state != VAR_18 && (VAR_25 & VAR_7)) {
  VAR_34 = -VAR_2;
  goto out_release;
 }





 if (VAR_26->sk_state == VAR_19) {
  FUNC_0(VAR_21);

  for (;;) {
   FUNC_7(FUNC_19(VAR_26), &VAR_21,
     VAR_16);
   if (VAR_26->sk_state != VAR_19)
    break;
   if (!FUNC_18(VAR_20)) {
    FUNC_8(VAR_26);
    FUNC_17();
    FUNC_5(VAR_26);
    continue;
   }
   VAR_34 = -VAR_6;
   break;
  }
  FUNC_4(FUNC_19(VAR_26), &VAR_21);

  if (VAR_34)
   goto out_release;
 }

 if (VAR_26->sk_state != VAR_18) {
  VAR_22->state = VAR_15;
  VAR_34 = FUNC_20(VAR_26);
  goto out_release;
 }

 VAR_22->state = VAR_13;

out_release:
 FUNC_8(VAR_26);

 return VAR_34;
}
