
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_state_change ) (struct sock*) ;TYPE_1__* sk_socket; int sk_shutdown; int sk_state; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct dn_scp {int state; int persist; int persist_fxn; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ state; } ;




 void* VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 struct dn_scp* FUNC_0 (struct sock*) ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned short FUNC_3 (int ) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_12, struct sk_buff *VAR_13)
{
 struct dn_scp *VAR_14 = FUNC_0(VAR_12);
 unsigned short VAR_15;

 if (VAR_13->len != 2)
  goto out;

 VAR_15 = FUNC_3(*(__le16 *)VAR_13->data);

 VAR_12->sk_state = VAR_10;

 switch (VAR_14->state) {
 case 131:
  VAR_14->state = VAR_3;
  break;
 case 129:
  if (VAR_15 == VAR_4)
   VAR_14->state = VAR_2;
  if (VAR_15 == VAR_5)
   VAR_14->state = VAR_0;
  break;
 case 130:
  VAR_14->state = VAR_1;
  break;
 case 128:
  VAR_12->sk_shutdown |= VAR_6;

 case 132:
  VAR_14->state = VAR_0;
 }

 if (!FUNC_4(VAR_12, VAR_7)) {
  if (VAR_12->sk_socket->state != VAR_9)
   VAR_12->sk_socket->state = VAR_8;
  VAR_12->sk_state_change(VAR_12);
 }

 VAR_14->persist_fxn = VAR_11;
 VAR_14->persist = FUNC_1(VAR_12);

out:
 FUNC_2(VAR_13);
}
