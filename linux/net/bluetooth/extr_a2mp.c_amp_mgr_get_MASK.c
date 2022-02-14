
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amp_mgr {int kref; } ;


 int FUNC_0 (char*,struct amp_mgr*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct amp_mgr *FUNC_3(struct amp_mgr *VAR_0)
{
 FUNC_0("mgr %p orig refcnt %d", VAR_0, FUNC_2(&VAR_0->kref));

 FUNC_1(&VAR_0->kref);

 return VAR_0;
}
