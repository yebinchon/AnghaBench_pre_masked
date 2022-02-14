
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_service {int rcu_head; int port; int addr; int af; int fwmark; int refcnt; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ip_vs_service*) ;
 int VAR_0 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ip_vs_service *VAR_1, bool VAR_2)
{
 if (FUNC_2(&VAR_1->refcnt)) {
  FUNC_1(3, "Removing service %u/%s:%u\n",
         VAR_1->fwmark,
         FUNC_0(VAR_1->af, &VAR_1->addr),
         FUNC_5(VAR_1->port));
  if (VAR_2)
   FUNC_3(&VAR_1->rcu_head, VAR_0);
  else
   FUNC_4(VAR_1);
 }
}
