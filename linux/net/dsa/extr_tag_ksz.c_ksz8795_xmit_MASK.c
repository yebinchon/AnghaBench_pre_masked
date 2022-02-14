
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_port {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,struct net_device*,int ) ;
 int* FUNC_3 (struct sk_buff*) ;
 int* FUNC_4 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_0(VAR_3);
 struct sk_buff *VAR_5;
 u8 *VAR_6;
 u8 *VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);


 VAR_6 = FUNC_4(VAR_5, VAR_0);
 VAR_7 = FUNC_3(VAR_5);

 *VAR_6 = 1 << VAR_4->index;
 if (FUNC_1(VAR_7))
  *VAR_6 |= VAR_1;

 return VAR_5;
}
