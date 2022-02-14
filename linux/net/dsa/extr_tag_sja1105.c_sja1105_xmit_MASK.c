
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_switch {int dummy; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsa_switch*,int ) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,struct net_device*,int ,int) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_3 (struct dsa_port*) ;
 struct dsa_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static struct sk_buff *FUNC_9(struct sk_buff *VAR_2,
        struct net_device *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_4(VAR_3);
 struct dsa_switch *VAR_5 = VAR_4->ds;
 u16 VAR_6 = FUNC_0(VAR_5, VAR_4->index);
 u16 VAR_7 = FUNC_7(VAR_2);
 u8 VAR_8 = FUNC_5(VAR_3, VAR_7);





 if (FUNC_8(FUNC_6(VAR_2)))
  return FUNC_2(VAR_2, VAR_3);






 if (FUNC_3(VAR_4))
  return VAR_2;

 return FUNC_1(VAR_2, VAR_3, VAR_0,
        ((VAR_8 << VAR_1) | VAR_6));
}
