
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amp_ctrl {int kref; } ;


 int FUNC_0 (char*,struct amp_ctrl*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct amp_ctrl *VAR_1)
{
 FUNC_0("ctrl %p orig refcnt %d", VAR_1,
        FUNC_2(&VAR_1->kref));

 return FUNC_1(&VAR_1->kref, &VAR_0);
}
