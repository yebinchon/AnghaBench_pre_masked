
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ tail; scalar_t__ end; int data; } ;
struct cfpkt {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct cfpkt* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct cfpkt*) ;
 scalar_t__ FUNC_2 (struct cfpkt*) ;
 struct sk_buff* FUNC_3 (struct cfpkt*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 struct cfpkt* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

struct cfpkt *FUNC_8(struct cfpkt *VAR_2,
      struct cfpkt *VAR_3,
      u16 VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_3(VAR_2);
 struct sk_buff *VAR_6 = FUNC_3(VAR_3);
 u16 VAR_7 = FUNC_4(VAR_6);
 u16 VAR_8;
 struct sk_buff *VAR_9;
 u16 VAR_10;
 u16 VAR_11;
 if (FUNC_7(FUNC_2(VAR_2) || FUNC_2(VAR_3))) {
  return VAR_2;
 }
 if (VAR_4 > VAR_7)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_7;

 if (VAR_5->tail + VAR_8 > VAR_5->end) {

  struct cfpkt *VAR_12;
  VAR_10 = FUNC_4(VAR_5);
  VAR_11 = VAR_10 + VAR_8;
  VAR_12 = FUNC_0(VAR_11 + VAR_1 + VAR_0);
  if (VAR_12 == ((void*)0))
   return ((void*)0);
  VAR_9 = FUNC_3(VAR_12);
  FUNC_5(VAR_9, VAR_5->data, VAR_10);
  FUNC_1(VAR_2);
  VAR_5 = VAR_9;
 }
 FUNC_5(VAR_5, VAR_6->data, FUNC_4(VAR_6));
 FUNC_1(VAR_3);
 return FUNC_6(VAR_5);
}
