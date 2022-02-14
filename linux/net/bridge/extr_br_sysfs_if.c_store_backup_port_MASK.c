
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {int dev; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_bridge_port*,struct net_device*) ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct net_bridge_port *VAR_1, char *VAR_2)
{
 struct net_device *VAR_3 = ((void*)0);
 char *VAR_4 = FUNC_3(VAR_2, '\n');

 if (VAR_4)
  *VAR_4 = '\0';

 if (FUNC_4(VAR_2) > 0) {
  VAR_3 = FUNC_0(FUNC_1(VAR_1->dev), VAR_2);
  if (!VAR_3)
   return -VAR_0;
 }

 return FUNC_2(VAR_1, VAR_3);
}
