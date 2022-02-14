
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phylink_link_state {int dummy; } ;
struct net_device {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* phylink_fixed_state ) (struct dsa_switch*,int ,struct phylink_link_state*) ;} ;


 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dsa_switch*,int ,struct phylink_link_state*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
       struct phylink_link_state *VAR_1)
{
 struct dsa_port *VAR_2 = FUNC_0(VAR_0);
 struct dsa_switch *VAR_3 = VAR_2->ds;




 VAR_3->ops->phylink_fixed_state(VAR_3, VAR_2->index, VAR_1);
}
