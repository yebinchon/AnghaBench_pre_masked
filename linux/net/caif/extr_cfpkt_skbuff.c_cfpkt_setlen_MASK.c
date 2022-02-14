
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int data_len; } ;
struct cfpkt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*,char*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;
 int FUNC_2 (struct cfpkt*) ;
 int FUNC_3 (struct cfpkt*,scalar_t__) ;
 int FUNC_4 (struct cfpkt*) ;
 scalar_t__ FUNC_5 (int) ;
 struct sk_buff* FUNC_6 (struct cfpkt*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct cfpkt *VAR_1, u16 VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_6(VAR_1);


 if (FUNC_8(FUNC_4(VAR_1)))
  return -VAR_0;

 if (FUNC_5(VAR_2 <= VAR_3->len)) {
  if (FUNC_8(VAR_3->data_len))
   FUNC_1(VAR_3, VAR_2);
  else
   FUNC_7(VAR_3, VAR_2);

  return FUNC_2(VAR_1);
 }


 if (FUNC_8(!FUNC_3(VAR_1, VAR_2 - VAR_3->len)))
  FUNC_0(VAR_1, "skb_pad_trail failed\n");

 return FUNC_2(VAR_1);
}
