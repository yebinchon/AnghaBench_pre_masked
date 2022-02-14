
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int lock; int mc_dad_timer; int mc_ifc_timer; scalar_t__ mc_ifc_count; int * mc_tomb; int mc_gq_timer; scalar_t__ mc_gq_running; int mc_lock; } ;


 int FUNC_0 (struct inet6_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct inet6_dev *VAR_3)
{
 FUNC_3(&VAR_3->lock);
 FUNC_1(&VAR_3->mc_lock);
 VAR_3->mc_gq_running = 0;
 FUNC_2(&VAR_3->mc_gq_timer, VAR_1, 0);
 VAR_3->mc_tomb = ((void*)0);
 VAR_3->mc_ifc_count = 0;
 FUNC_2(&VAR_3->mc_ifc_timer, VAR_2, 0);
 FUNC_2(&VAR_3->mc_dad_timer, VAR_0, 0);
 FUNC_0(VAR_3);
 FUNC_4(&VAR_3->lock);
}
