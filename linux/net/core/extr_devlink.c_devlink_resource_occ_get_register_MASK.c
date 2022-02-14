
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct devlink_resource {int occ_get; void* occ_get_priv; } ;
struct devlink {int lock; } ;
typedef int devlink_resource_occ_get_t ;


 scalar_t__ FUNC_0 (int) ;
 struct devlink_resource* FUNC_1 (struct devlink*,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct devlink *VAR_0,
           u64 VAR_1,
           devlink_resource_occ_get_t *VAR_2,
           void *VAR_3)
{
 struct devlink_resource *VAR_4;

 FUNC_2(&VAR_0->lock);
 VAR_4 = FUNC_1(VAR_0, ((void*)0), VAR_1);
 if (FUNC_0(!VAR_4))
  goto out;
 FUNC_0(VAR_4->occ_get);

 VAR_4->occ_get = *VAR_2;
 VAR_4->occ_get_priv = VAR_3;
out:
 FUNC_3(&VAR_0->lock);
}
