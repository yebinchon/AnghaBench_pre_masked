
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int winsize_in; } ;
struct x25_sock {int condition; int vr; int vl; void* state; int interrupt_in_queue; int flags; TYPE_2__ facilities; int va; int vs; TYPE_1__* neighbour; } ;
struct sock {int sk_rcvbuf; int sk_rmem_alloc; } ;
struct sk_buff {int * data; } ;
struct TYPE_3__ {scalar_t__ extended; } ;


 int VAR_0 ;
 int const VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int const VAR_7 ;



 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*,struct sk_buff*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,int ,int ,int ) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*,int) ;
 int FUNC_13 (struct sock*,struct sk_buff*,int) ;
 int FUNC_14 (struct sock*) ;
 struct x25_sock* FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sock*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*,int) ;
 int FUNC_21 (struct sock*,int const) ;

__attribute__((used)) static int FUNC_22(struct sock *VAR_12, struct sk_buff *VAR_13, int VAR_14, int VAR_15, int VAR_16, int VAR_17, int VAR_18, int VAR_19)
{
 int VAR_20 = 0;
 int VAR_21;
 struct x25_sock *VAR_22 = FUNC_15(VAR_12);

 VAR_21 = (VAR_22->neighbour->extended) ? VAR_5 : VAR_8;

 switch (VAR_14) {

  case 130:
   FUNC_21(VAR_12, VAR_7);
   FUNC_19(VAR_12);
   VAR_22->condition = 0x00;
   VAR_22->vs = 0;
   VAR_22->vr = 0;
   VAR_22->va = 0;
   VAR_22->vl = 0;
   FUNC_14(VAR_12);
   break;

  case 134:
   if (!FUNC_3(VAR_13, VAR_11 + 2))
    goto out_clear;

   FUNC_21(VAR_12, VAR_1);
   FUNC_10(VAR_12, 0, VAR_13->data[3], VAR_13->data[4]);
   break;

  case 128:
  case 129:
   if (!FUNC_20(VAR_12, VAR_16)) {
    FUNC_9(VAR_12);
    FUNC_21(VAR_12, 130);
    FUNC_16(VAR_12);
    VAR_22->condition = 0x00;
    VAR_22->vs = 0;
    VAR_22->vr = 0;
    VAR_22->va = 0;
    VAR_22->vl = 0;
    VAR_22->state = VAR_10;
   } else {
    FUNC_12(VAR_12, VAR_16);
    if (VAR_14 == 129) {
     VAR_22->condition |= VAR_4;
    } else {
     VAR_22->condition &= ~VAR_4;
    }
   }
   break;

  case 133:
   VAR_22->condition &= ~VAR_4;
   if ((VAR_15 != VAR_22->vr) || !FUNC_20(VAR_12, VAR_16)) {
    FUNC_9(VAR_12);
    FUNC_21(VAR_12, 130);
    FUNC_16(VAR_12);
    VAR_22->condition = 0x00;
    VAR_22->vs = 0;
    VAR_22->vr = 0;
    VAR_22->va = 0;
    VAR_22->vl = 0;
    VAR_22->state = VAR_10;
    break;
   }
   FUNC_12(VAR_12, VAR_16);
   if (VAR_15 == VAR_22->vr) {
    if (FUNC_13(VAR_12, VAR_13, VAR_19) == 0) {
     VAR_22->vr = (VAR_22->vr + 1) % VAR_21;
     VAR_20 = 1;
    } else {

     FUNC_9(VAR_12);
     FUNC_21(VAR_12, 130);
     FUNC_16(VAR_12);
     VAR_22->condition = 0x00;
     VAR_22->vs = 0;
     VAR_22->vr = 0;
     VAR_22->va = 0;
     VAR_22->vl = 0;
     VAR_22->state = VAR_10;
     break;
    }
    if (FUNC_0(&VAR_12->sk_rmem_alloc) >
        (VAR_12->sk_rcvbuf >> 1))
     VAR_22->condition |= VAR_3;
   }




   if (((VAR_22->vl + VAR_22->facilities.winsize_in) % VAR_21) == VAR_22->vr) {
    VAR_22->condition &= ~VAR_2;
    FUNC_19(VAR_12);
    FUNC_11(VAR_12);
   } else {
    VAR_22->condition |= VAR_2;
    FUNC_18(VAR_12);
   }
   break;

  case 131:
   FUNC_1(VAR_6, &VAR_22->flags);
   break;

  case 132:
   if (FUNC_7(VAR_12, VAR_0))
    VAR_20 = !FUNC_8(VAR_12, VAR_13);
   else {
    FUNC_6(VAR_13, VAR_12);
    FUNC_5(&VAR_22->interrupt_in_queue, VAR_13);
    VAR_20 = 1;
   }
   FUNC_4(VAR_12);
   FUNC_21(VAR_12, 131);
   break;

  default:
   FUNC_2("unknown %02X in state 3\n", VAR_14);
   break;
 }

 return VAR_20;

out_clear:
 FUNC_21(VAR_12, 134);
 VAR_22->state = VAR_9;
 FUNC_17(VAR_12);
 return 0;
}
