
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {char* data; int truesize; } ;
struct pppoatm_vcc {int flags; int encaps; int blocked; struct atm_vcc* atmvcc; } ;
struct ppp_channel {int dummy; } ;
struct atm_vcc {scalar_t__ (* send ) (struct atm_vcc*,struct sk_buff*) ;int dev; int flags; } ;
struct TYPE_2__ {struct atm_vcc* vcc; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct pppoatm_vcc* FUNC_4 (struct ppp_channel*) ;
 int FUNC_5 (struct sk_buff*) ;



 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_7 ;
 int FUNC_8 (struct pppoatm_vcc*,int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct atm_vcc*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_14 (struct sk_buff*,int) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct atm_vcc*,struct sk_buff*) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static int FUNC_19(struct ppp_channel *VAR_8, struct sk_buff *VAR_9)
{
 struct pppoatm_vcc *VAR_10 = FUNC_4(VAR_8);
 struct atm_vcc *VAR_11;
 int VAR_12;

 FUNC_0(VAR_9)->vcc = VAR_10->atmvcc;
 FUNC_9("(skb=0x%p, vcc=0x%p)\n", VAR_9, VAR_10->atmvcc);
 if (VAR_9->data[0] == '\0' && (VAR_10->flags & VAR_6))
  (void) FUNC_12(VAR_9, 1);

 VAR_11 = FUNC_0(VAR_9)->vcc;
 FUNC_2(FUNC_10(VAR_11));
 if (FUNC_15(FUNC_10(VAR_11))) {





  FUNC_17(VAR_3, &VAR_10->blocked);
  goto nospace;
 }
 if (FUNC_18(VAR_2, &VAR_11->flags) ||
     FUNC_18(VAR_0, &VAR_11->flags) ||
     !FUNC_18(VAR_1, &VAR_11->flags)) {
  FUNC_3(FUNC_10(VAR_11));
  FUNC_6(VAR_9);
  return VAR_4;
 }

 switch (VAR_10->encaps) {
 case 129:
  if (FUNC_11(VAR_9) < VAR_5) {
   struct sk_buff *VAR_13;
   VAR_13 = FUNC_14(VAR_9, VAR_5);
   if (VAR_13 != ((void*)0) &&
       !FUNC_8(VAR_10, VAR_13->truesize)) {
    FUNC_6(VAR_13);
    goto nospace;
   }
   FUNC_5(VAR_9);
   VAR_9 = VAR_13;
   if (VAR_9 == ((void*)0)) {
    FUNC_3(FUNC_10(VAR_11));
    return VAR_4;
   }
  } else if (!FUNC_8(VAR_10, VAR_9->truesize))
   goto nospace;
  FUNC_7(FUNC_13(VAR_9, VAR_5), VAR_7, VAR_5);
  break;
 case 128:
  if (!FUNC_8(VAR_10, VAR_9->truesize))
   goto nospace;
  break;
 case 130:
  FUNC_3(FUNC_10(VAR_11));
  FUNC_9("Trying to send without setting encaps!\n");
  FUNC_6(VAR_9);
  return 1;
 }

 FUNC_1(VAR_11, VAR_9);
 FUNC_9("atm_skb(%p)->vcc(%p)->dev(%p)\n",
   VAR_9, FUNC_0(VAR_9)->vcc, FUNC_0(VAR_9)->vcc->dev);
 VAR_12 = FUNC_0(VAR_9)->vcc->send(FUNC_0(VAR_9)->vcc, VAR_9)
     ? VAR_4 : 1;
 FUNC_3(FUNC_10(VAR_11));
 return VAR_12;
nospace:
 FUNC_3(FUNC_10(VAR_11));




 if ((VAR_10->flags & VAR_6) && FUNC_11(VAR_9) > 0 &&
     VAR_9->data[-1] == '\0')
  (void) FUNC_13(VAR_9, 1);
 return 0;
}
