
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int dev; } ;
struct kobject {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 int FUNC_0 (int ) ;
 struct net_bridge_port* FUNC_1 (struct kobject*) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct kobject *VAR_0, kuid_t *VAR_1, kgid_t *VAR_2)
{
 struct net_bridge_port *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(FUNC_0(VAR_3->dev), VAR_1, VAR_2);
}
