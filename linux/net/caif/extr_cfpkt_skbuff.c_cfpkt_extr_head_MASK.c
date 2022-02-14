
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; } ;
struct cfpkt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*,char*) ;
 int FUNC_1 (struct cfpkt*) ;
 int FUNC_2 (void*,int *,scalar_t__) ;
 struct sk_buff* FUNC_3 (struct cfpkt*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int * FUNC_6 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct cfpkt *VAR_1, void *VAR_2, u16 VAR_3)
{
 struct sk_buff *VAR_4 = FUNC_3(VAR_1);
 u8 *VAR_5;
 if (FUNC_7(FUNC_1(VAR_1)))
  return -VAR_0;

 if (FUNC_7(VAR_3 > VAR_4->len)) {
  FUNC_0(VAR_1, "read beyond end of packet\n");
  return -VAR_0;
 }

 if (FUNC_7(VAR_3 > FUNC_4(VAR_4))) {
  if (FUNC_7(FUNC_5(VAR_4) != 0)) {
   FUNC_0(VAR_1, "linearize failed\n");
   return -VAR_0;
  }
 }
 VAR_5 = FUNC_6(VAR_4, VAR_3);
 VAR_5 -= VAR_3;
 if (VAR_2)
  FUNC_2(VAR_2, VAR_5, VAR_3);
 return 0;
}
