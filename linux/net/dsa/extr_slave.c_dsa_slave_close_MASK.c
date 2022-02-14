
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int dev_addr; } ;
struct dsa_port {int pl; int xmit_queue; int xmit_work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,struct net_device*) ;
 int FUNC_6 (struct dsa_port*) ;
 struct net_device* FUNC_7 (struct net_device*) ;
 struct dsa_port* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_7(VAR_2);
 struct dsa_port *VAR_4 = FUNC_8(VAR_2);

 FUNC_0(&VAR_4->xmit_work);
 FUNC_11(&VAR_4->xmit_queue);

 FUNC_10(VAR_4->pl);

 FUNC_6(VAR_4);

 FUNC_1(VAR_3, VAR_2);
 FUNC_5(VAR_3, VAR_2);
 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_3, -1);
 if (VAR_2->flags & VAR_1)
  FUNC_3(VAR_3, -1);

 if (!FUNC_9(VAR_2->dev_addr, VAR_3->dev_addr))
  FUNC_4(VAR_3, VAR_2->dev_addr);

 return 0;
}
