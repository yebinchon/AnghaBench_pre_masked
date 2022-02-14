
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int data; } ;
struct cfpkt {int dummy; } ;


 int FUNC_0 (struct cfpkt*,void*,int ) ;
 int FUNC_1 (struct cfpkt*,void*,int ) ;
 int FUNC_2 (void*,int ,int ) ;
 struct sk_buff* FUNC_3 (struct cfpkt*) ;
 int FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct cfpkt *VAR_0, void *VAR_1, u16 VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_3(VAR_0);
 if (FUNC_4(VAR_3) >= VAR_2) {
  FUNC_2(VAR_1, VAR_3->data, VAR_2);
  return 0;
 }
 return !FUNC_1(VAR_0, VAR_1, VAR_2) &&
     !FUNC_0(VAR_0, VAR_1, VAR_2);
}
