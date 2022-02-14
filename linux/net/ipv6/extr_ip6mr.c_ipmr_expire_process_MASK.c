
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mr_table {int mfc_unres_queue; int ipmr_expire_timer; } ;


 struct mr_table* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct mr_table*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,scalar_t__) ;
 struct mr_table* VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 struct mr_table *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_0);

 if (!FUNC_4(&VAR_2)) {
  FUNC_3(&VAR_5->ipmr_expire_timer, VAR_1 + 1);
  return;
 }

 if (!FUNC_2(&VAR_5->mfc_unres_queue))
  FUNC_1(VAR_5);

 FUNC_5(&VAR_2);
}
