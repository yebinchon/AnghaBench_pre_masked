
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int data; int len; } ;
struct cfpkt {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfpkt*,char*) ;
 int FUNC_1 (struct cfpkt*) ;
 int FUNC_2 (int *,int *,int ) ;
 struct sk_buff* FUNC_3 (struct cfpkt*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct cfpkt *VAR_1, void *VAR_2, u16 VAR_3)
{
 struct sk_buff *VAR_4 = FUNC_3(VAR_1);
 u8 *VAR_5 = VAR_2;
 u8 *VAR_6;
 if (FUNC_7(FUNC_1(VAR_1)))
  return -VAR_0;

 if (FUNC_7(FUNC_4(VAR_4) != 0)) {
  FUNC_0(VAR_1, "linearize failed\n");
  return -VAR_0;
 }
 if (FUNC_7(VAR_4->data + VAR_3 > FUNC_5(VAR_4))) {
  FUNC_0(VAR_1, "read beyond end of packet\n");
  return -VAR_0;
 }
 VAR_6 = FUNC_5(VAR_4) - VAR_3;
 FUNC_6(VAR_4, VAR_4->len - VAR_3);
 FUNC_2(VAR_5, VAR_6, VAR_3);
 return 0;
}
