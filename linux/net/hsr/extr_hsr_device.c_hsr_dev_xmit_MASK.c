
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; } ;
struct net_device {int dummy; } ;
struct hsr_priv {int dummy; } ;
struct hsr_port {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct hsr_port*) ;
 struct hsr_port* FUNC_1 (struct hsr_priv*,int ) ;
 struct hsr_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct hsr_priv *VAR_4 = FUNC_2(VAR_3);
 struct hsr_port *VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_0);
 VAR_2->dev = VAR_5->dev;
 FUNC_0(VAR_2, VAR_5);
 return VAR_1;
}
