
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct hsr_priv {int dummy; } ;
struct hsr_port {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hsr_priv*) ;
 struct hsr_port* FUNC_1 (struct hsr_priv*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct hsr_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, int VAR_4)
{
 struct hsr_priv *VAR_5;
 struct hsr_port *VAR_6;

 VAR_5 = FUNC_3(VAR_3);
 VAR_6 = FUNC_1(VAR_5, VAR_2);

 if (VAR_4 > FUNC_0(VAR_5)) {
  FUNC_2(VAR_6->dev, "A HSR master's MTU cannot be greater than the smallest MTU of its slaves minus the HSR Tag length (%d octets).\n",
       VAR_1);
  return -VAR_0;
 }

 VAR_3->mtu = VAR_4;

 return 0;
}
