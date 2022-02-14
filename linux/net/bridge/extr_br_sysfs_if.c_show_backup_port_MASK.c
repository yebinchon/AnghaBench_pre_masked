
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {TYPE_1__* dev; int backup_port; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 struct net_bridge_port* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct net_bridge_port *VAR_0, char *VAR_1)
{
 struct net_bridge_port *VAR_2;
 int VAR_3 = 0;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0->backup_port);
 if (VAR_2)
  VAR_3 = FUNC_3(VAR_1, "%s\n", VAR_2->dev->name);
 FUNC_2();

 return VAR_3;
}
