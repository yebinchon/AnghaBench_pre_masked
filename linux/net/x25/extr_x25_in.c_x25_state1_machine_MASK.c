
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cause; int diagnostic; } ;
struct TYPE_3__ {int cudlength; int cuddata; } ;
struct x25_sock {int condition; int state; TYPE_2__ causediag; TYPE_1__ calluserdata; int vc_facil_mask; int dte_facilities; int facilities; int vl; int vr; int va; int vs; } ;
struct x25_address {int dummy; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct sk_buff {int* data; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int const VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ,int,int) ;
 int FUNC_6 (struct sk_buff*,struct x25_address*,struct x25_address*) ;
 int FUNC_7 (struct sk_buff*,int *,int *,int *) ;
 struct x25_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*,int const) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_9, struct sk_buff *VAR_10, int VAR_11)
{
 struct x25_address VAR_12, VAR_13;
 int VAR_14;
 struct x25_sock *VAR_15 = FUNC_8(VAR_9);

 switch (VAR_11) {
 case 130: {

  FUNC_10(VAR_9);
  VAR_15->condition = 0x00;
  VAR_15->vs = 0;
  VAR_15->va = 0;
  VAR_15->vr = 0;
  VAR_15->vl = 0;
  VAR_15->state = VAR_7;
  VAR_9->sk_state = VAR_3;



  if (!FUNC_0(VAR_10, VAR_8))
   goto out_clear;
  FUNC_2(VAR_10, VAR_8);

  VAR_14 = FUNC_6(VAR_10, &VAR_12,
           &VAR_13);
  if (VAR_14 > 0)
   FUNC_2(VAR_10, VAR_14);
  else if (VAR_14 < 0)
   goto out_clear;

  VAR_14 = FUNC_7(VAR_10, &VAR_15->facilities,
        &VAR_15->dte_facilities,
        &VAR_15->vc_facil_mask);
  if (VAR_14 > 0)
   FUNC_2(VAR_10, VAR_14);
  else if (VAR_14 < 0)
   goto out_clear;



  if (VAR_10->len > 0) {
   if (VAR_10->len > VAR_5)
    goto out_clear;

   FUNC_1(VAR_10, 0, VAR_15->calluserdata.cuddata,
    VAR_10->len);
   VAR_15->calluserdata.cudlength = VAR_10->len;
  }
  if (!FUNC_3(VAR_9, VAR_2))
   VAR_9->sk_state_change(VAR_9);
  break;
 }
 case 129:

  VAR_15->causediag.cause = 0x01;
  VAR_15->causediag.diagnostic = 0x48;

  FUNC_11(VAR_9, 128);
  FUNC_5(VAR_9, VAR_1, 0x01, 0x48);
  break;

 case 128:
  if (!FUNC_0(VAR_10, VAR_8 + 2))
   goto out_clear;

  FUNC_11(VAR_9, VAR_4);
  FUNC_5(VAR_9, VAR_0, VAR_10->data[3], VAR_10->data[4]);
  break;

 default:
  break;
 }

 return 0;

out_clear:
 FUNC_11(VAR_9, 128);
 VAR_15->state = VAR_6;
 FUNC_9(VAR_9);
 return 0;
}
