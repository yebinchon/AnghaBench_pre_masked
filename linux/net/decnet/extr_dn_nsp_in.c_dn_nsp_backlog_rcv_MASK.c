
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct sk_buff {int dummy; } ;
struct dn_skb_cb {int rt_flags; int nsp_flags; } ;
struct dn_scp {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dn_scp* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sock*,struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*,struct sk_buff*) ;
 int FUNC_10 (struct sock*,struct sk_buff*,int) ;
 int FUNC_11 (struct sock*,struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sock*,int ) ;
 int FUNC_14 (struct sock*) ;

int FUNC_15(struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct dn_scp *VAR_8 = FUNC_0(VAR_6);
 struct dn_skb_cb *VAR_9 = FUNC_1(VAR_7);

 if (VAR_9->rt_flags & VAR_1) {
  if (VAR_9->nsp_flags == 0x18 || VAR_9->nsp_flags == 0x68)
   FUNC_11(VAR_6, VAR_7);
  else
   FUNC_12(VAR_7);
  return VAR_3;
 }




 if ((VAR_9->nsp_flags & 0x0c) == 0x08) {
  switch (VAR_9->nsp_flags & 0x70) {
  case 0x10:
  case 0x60:
   FUNC_4(VAR_6, VAR_7);
   break;
  case 0x20:
   FUNC_3(VAR_6, VAR_7);
   break;
  case 0x30:
   FUNC_7(VAR_6, VAR_7);
   break;
  case 0x40:
   FUNC_6(VAR_6, VAR_7);
   break;
  }

 } else if (VAR_9->nsp_flags == 0x24) {




  FUNC_2(VAR_6, VAR_7);
 } else {
  int VAR_10 = 1;


  if ((VAR_8->state == VAR_0) && !FUNC_13(VAR_6, VAR_4)) {
   VAR_8->state = VAR_2;
   VAR_6->sk_state = VAR_5;
   VAR_6->sk_state_change(VAR_6);
  }

  if ((VAR_9->nsp_flags & 0x1c) == 0)
   VAR_10 = 0;
  if (VAR_9->nsp_flags == 0x04)
   VAR_10 = 0;






  FUNC_10(VAR_6, VAR_7, VAR_10);






  if ((VAR_9->nsp_flags & 0x0c) == 0) {

   if (VAR_8->state != VAR_2)
    goto free_out;

   switch (VAR_9->nsp_flags) {
   case 0x10:
    FUNC_8(VAR_6, VAR_7);
    break;
   case 0x30:
    FUNC_9(VAR_6, VAR_7);
    break;
   default:
    FUNC_5(VAR_6, VAR_7);
   }

  } else {
free_out:
   FUNC_12(VAR_7);
  }
 }

 return VAR_3;
}
