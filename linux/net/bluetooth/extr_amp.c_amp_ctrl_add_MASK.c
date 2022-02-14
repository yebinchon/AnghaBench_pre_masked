
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct amp_mgr {int amp_ctrls_lock; int amp_ctrls; } ;
struct amp_ctrl {int list; int id; int kref; } ;


 int FUNC_0 (char*,struct amp_mgr*,struct amp_ctrl*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct amp_ctrl* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct amp_ctrl *FUNC_6(struct amp_mgr *VAR_1, u8 VAR_2)
{
 struct amp_ctrl *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_1(&VAR_3->kref);
 VAR_3->id = VAR_2;

 FUNC_4(&VAR_1->amp_ctrls_lock);
 FUNC_3(&VAR_3->list, &VAR_1->amp_ctrls);
 FUNC_5(&VAR_1->amp_ctrls_lock);

 FUNC_0("mgr %p ctrl %p", VAR_1, VAR_3);

 return VAR_3;
}
