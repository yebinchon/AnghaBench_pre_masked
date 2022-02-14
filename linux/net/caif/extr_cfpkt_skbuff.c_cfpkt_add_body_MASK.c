
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct cfpkt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct cfpkt*) ;
 scalar_t__ FUNC_2 (void const*) ;
 int FUNC_3 (int *,void const*,scalar_t__) ;
 struct sk_buff* FUNC_4 (struct cfpkt*) ;
 int * FUNC_5 (struct sk_buff*,struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,scalar_t__,struct sk_buff**) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int) ;

int FUNC_11(struct cfpkt *VAR_2, const void *VAR_3, u16 VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_4(VAR_2);
 struct sk_buff *VAR_6;
 u8 *VAR_7;
 u16 VAR_8 = 0;


 if (FUNC_10(FUNC_1(VAR_2)))
  return -VAR_0;

 VAR_6 = VAR_5;


 if (FUNC_10(FUNC_9(VAR_5) < VAR_4)) {
  if (FUNC_2(VAR_4 < VAR_1))
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_4;
 }


 if (FUNC_10((VAR_8 > 0) || FUNC_6(VAR_5) || FUNC_8(VAR_5))) {


  if (FUNC_10(FUNC_7(VAR_5, VAR_8, &VAR_6) < 0)) {
   FUNC_0(VAR_2, "cow failed\n");
   return -VAR_0;
  }
 }


 VAR_7 = FUNC_5(VAR_5, VAR_6, VAR_4);
 if (FUNC_2(VAR_3))
  FUNC_3(VAR_7, VAR_3, VAR_4);
 return 0;
}
