
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_port {int index; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct dsa_port* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,struct net_device*,int ) ;
 int * FUNC_5 (struct sk_buff*) ;
 int * FUNC_6 (struct sk_buff*,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sk_buff *VAR_2,
        struct net_device *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_2(VAR_3);
 struct sk_buff *VAR_5;
 u16 *VAR_6;
 u8 *VAR_7;

 VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);


 VAR_6 = FUNC_6(VAR_5, VAR_0);
 VAR_7 = FUNC_5(VAR_5);

 *VAR_6 = FUNC_0(VAR_4->index);

 if (FUNC_3(VAR_7))
  *VAR_6 |= VAR_1;

 *VAR_6 = FUNC_1(*VAR_6);

 return VAR_5;
}
