
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int dev; } ;
struct pt_regs {int dummy; } ;
struct net_device {int name; } ;
typedef int fmt ;
typedef int devname ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pt_regs*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;
 int FUNC_3 (char*,int,struct sk_buff*,int) ;

int FUNC_4(struct pt_regs *VAR_1)
{



 char VAR_2[VAR_0];
 struct net_device *VAR_3;
 struct sk_buff *VAR_4;
 int VAR_5;


 VAR_4 = (struct sk_buff *) FUNC_0(VAR_1);
 VAR_3 = FUNC_1(VAR_4->dev);
 VAR_5 = FUNC_1(VAR_4->len);

 FUNC_2(VAR_2, sizeof(VAR_2), VAR_3->name);

 if (VAR_2[0] == 'l' && VAR_2[1] == 'o') {
  char VAR_6[] = "skb %p len %d\n";

  FUNC_3(VAR_6, sizeof(VAR_6), VAR_4, VAR_5);
 }

 return 0;
}
