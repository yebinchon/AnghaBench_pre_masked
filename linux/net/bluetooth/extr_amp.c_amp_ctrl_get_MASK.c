
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amp_ctrl {int kref; } ;


 int FUNC_0 (char*,struct amp_ctrl*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct amp_ctrl *VAR_0)
{
 FUNC_0("ctrl %p orig refcnt %d", VAR_0,
        FUNC_2(&VAR_0->kref));

 FUNC_1(&VAR_0->kref);
}
