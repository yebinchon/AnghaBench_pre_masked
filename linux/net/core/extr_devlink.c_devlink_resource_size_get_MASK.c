
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct devlink_resource {int size_new; int size; } ;
struct devlink {int lock; } ;


 int VAR_0 ;
 struct devlink_resource* FUNC_0 (struct devlink*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct devlink *VAR_1,
         u64 VAR_2,
         u64 *VAR_3)
{
 struct devlink_resource *VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_1->lock);
 VAR_4 = FUNC_0(VAR_1, ((void*)0), VAR_2);
 if (!VAR_4) {
  VAR_5 = -VAR_0;
  goto out;
 }
 *VAR_3 = VAR_4->size_new;
 VAR_4->size = VAR_4->size_new;
out:
 FUNC_2(&VAR_1->lock);
 return VAR_5;
}
