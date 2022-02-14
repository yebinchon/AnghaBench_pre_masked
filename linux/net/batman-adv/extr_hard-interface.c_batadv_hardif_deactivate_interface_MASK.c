
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct batadv_hard_iface {scalar_t__ if_status; int soft_iface; TYPE_1__* net_dev; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct batadv_hard_iface *VAR_3)
{
 if (VAR_3->if_status != VAR_0 &&
     VAR_3->if_status != VAR_2)
  return;

 VAR_3->if_status = VAR_1;

 FUNC_0(VAR_3->soft_iface, "Interface deactivated: %s\n",
      VAR_3->net_dev->name);

 FUNC_1(VAR_3->soft_iface);
}
