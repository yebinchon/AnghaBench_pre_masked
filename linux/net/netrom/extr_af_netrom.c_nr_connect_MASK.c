
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr_ax25 {scalar_t__ sax25_family; int sax25_call; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct nr_sock {int my_index; int my_id; int state; int dest_addr; struct net_device* device; void* source_addr; void* user_addr; } ;
struct net_device {scalar_t__ dev_addr; } ;
struct full_sockaddr_ax25 {int dummy; } ;
struct TYPE_4__ {void* call; } ;
typedef TYPE_1__ ax25_uid_assoc ;
typedef void* ax25_address ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 () ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct sock*) ;
 struct net_device* FUNC_8 () ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct sock*) ;
 struct nr_sock* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (int ,int *,int ) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 scalar_t__ FUNC_20 (struct sock*,int ) ;
 int FUNC_21 (struct sock*,int ) ;
 int VAR_22 ;

__attribute__((used)) static int FUNC_22(struct socket *VAR_23, struct sockaddr *VAR_24,
 int VAR_25, int VAR_26)
{
 struct sock *VAR_27 = VAR_23->sk;
 struct nr_sock *VAR_28 = FUNC_12(VAR_27);
 struct sockaddr_ax25 *VAR_29 = (struct sockaddr_ax25 *)VAR_24;
 ax25_address *VAR_30 = ((void*)0);
 ax25_uid_assoc *VAR_31;
 struct net_device *VAR_32;
 int VAR_33 = 0;

 FUNC_7(VAR_27);
 if (VAR_27->sk_state == VAR_17 && VAR_23->state == VAR_13) {
  VAR_23->state = VAR_12;
  goto out_release;
 }

 if (VAR_27->sk_state == VAR_16 && VAR_23->state == VAR_13) {
  VAR_23->state = VAR_14;
  VAR_33 = -VAR_2;
  goto out_release;
 }

 if (VAR_27->sk_state == VAR_17) {
  VAR_33 = -VAR_5;
  goto out_release;
 }

 VAR_27->sk_state = VAR_16;
 VAR_23->state = VAR_14;

 if (VAR_25 != sizeof(struct sockaddr_ax25) && VAR_25 != sizeof(struct full_sockaddr_ax25)) {
  VAR_33 = -VAR_4;
  goto out_release;
 }
 if (VAR_29->sax25_family != VAR_0) {
  VAR_33 = -VAR_4;
  goto out_release;
 }
 if (FUNC_20(VAR_27, VAR_11)) {
  FUNC_21(VAR_27, VAR_11);

  if ((VAR_32 = FUNC_8()) == ((void*)0)) {
   VAR_33 = -VAR_6;
   goto out_release;
  }
  VAR_30 = (ax25_address *)VAR_32->dev_addr;

  VAR_31 = FUNC_1(FUNC_4());
  if (VAR_31) {
   VAR_28->user_addr = VAR_31->call;
   FUNC_2(VAR_31);
  } else {
   if (VAR_19 && !FUNC_3(VAR_1)) {
    FUNC_5(VAR_32);
    VAR_33 = -VAR_7;
    goto out_release;
   }
   VAR_28->user_addr = *VAR_30;
  }

  VAR_28->source_addr = *VAR_30;
  VAR_28->device = VAR_32;

  FUNC_5(VAR_32);
  FUNC_11(VAR_27);
 }

 VAR_28->dest_addr = VAR_29->sax25_call;

 FUNC_15(VAR_27);
 VAR_20 = FUNC_10();
 FUNC_7(VAR_27);

 VAR_28->my_index = VAR_20 / 256;
 VAR_28->my_id = VAR_20 % 256;

 VAR_20++;


 VAR_23->state = VAR_13;
 VAR_27->sk_state = VAR_18;

 FUNC_9(VAR_27);

 VAR_28->state = VAR_9;

 FUNC_13(VAR_27);


 if (VAR_27->sk_state != VAR_17 && (VAR_26 & VAR_10)) {
  VAR_33 = -VAR_3;
  goto out_release;
 }





 if (VAR_27->sk_state == VAR_18) {
  FUNC_0(VAR_22);

  for (;;) {
   FUNC_14(FUNC_18(VAR_27), &VAR_22,
     VAR_15);
   if (VAR_27->sk_state != VAR_18)
    break;
   if (!FUNC_17(VAR_21)) {
    FUNC_15(VAR_27);
    FUNC_16();
    FUNC_7(VAR_27);
    continue;
   }
   VAR_33 = -VAR_8;
   break;
  }
  FUNC_6(FUNC_18(VAR_27), &VAR_22);
  if (VAR_33)
   goto out_release;
 }

 if (VAR_27->sk_state != VAR_17) {
  VAR_23->state = VAR_14;
  VAR_33 = FUNC_19(VAR_27);
  goto out_release;
 }

 VAR_23->state = VAR_12;

out_release:
 FUNC_15(VAR_27);

 return VAR_33;
}
