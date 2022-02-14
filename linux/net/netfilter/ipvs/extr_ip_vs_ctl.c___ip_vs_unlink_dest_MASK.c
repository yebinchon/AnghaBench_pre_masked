
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_service {scalar_t__ af; int scheduler; TYPE_1__* ipvs; int num_dests; } ;
struct ip_vs_scheduler {int (* del_dest ) (struct ip_vs_service*,struct ip_vs_dest*) ;} ;
struct ip_vs_dest {scalar_t__ af; int n_list; int flags; } ;
struct TYPE_2__ {int mixed_address_family_dests; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ip_vs_scheduler* FUNC_1 (int ,int) ;
 int FUNC_2 (struct ip_vs_service*,struct ip_vs_dest*) ;

__attribute__((used)) static void FUNC_3(struct ip_vs_service *VAR_1,
    struct ip_vs_dest *VAR_2,
    int VAR_3)
{
 VAR_2->flags &= ~VAR_0;




 FUNC_0(&VAR_2->n_list);
 VAR_1->num_dests--;

 if (VAR_2->af != VAR_1->af)
  VAR_1->ipvs->mixed_address_family_dests--;

 if (VAR_3) {
  struct ip_vs_scheduler *VAR_4;

  VAR_4 = FUNC_1(VAR_1->scheduler, 1);
  if (VAR_4 && VAR_4->del_dest)
   VAR_4->del_dest(VAR_1, VAR_2);
 }
}
