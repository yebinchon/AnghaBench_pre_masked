
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct sk_buff*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,struct sk_buff*,int) ;

bool FUNC_3(struct net_device *VAR_1,
         struct sk_buff *VAR_2, bool VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_1, VAR_2, VAR_3);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0);
 FUNC_1(VAR_4 == 0);
 return VAR_4 == 0;
}
