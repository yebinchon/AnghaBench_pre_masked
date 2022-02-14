
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 unsigned char* FUNC_3 (struct sk_buff*,int) ;

void FUNC_4(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 unsigned char *VAR_2;

 VAR_0->protocol = FUNC_1(VAR_0, FUNC_0(VAR_1));

 VAR_2 = FUNC_3(VAR_0, 1);
 *VAR_2 = 0x00;

 FUNC_2(VAR_0);
}
