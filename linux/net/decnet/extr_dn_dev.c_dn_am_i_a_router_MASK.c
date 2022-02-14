
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_neigh {scalar_t__ priority; int addr; } ;
struct dn_ifaddr {int ifa_local; } ;
struct TYPE_2__ {scalar_t__ priority; } ;
struct dn_dev {TYPE_1__ parms; int router; scalar_t__ uptime; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct dn_neigh *VAR_2, struct dn_dev *VAR_3, struct dn_ifaddr *VAR_4)
{

 if (FUNC_1(VAR_1, VAR_3->uptime + VAR_0))
  return 0;


 if (!VAR_3->router)
  return 1;


 if (VAR_2->priority < VAR_3->parms.priority)
  return 1;


 if (VAR_2->priority != VAR_3->parms.priority)
  return 0;

 if (FUNC_0(VAR_2->addr) < FUNC_0(VAR_4->ifa_local))
  return 1;

 return 0;
}
