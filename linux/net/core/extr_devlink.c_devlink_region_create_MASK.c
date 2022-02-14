
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct devlink_region {char const* name; int list; int snapshot_list; int size; int max_snapshots; struct devlink* devlink; } ;
struct devlink {int lock; int region_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct devlink_region* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct devlink_region*,int *,int ) ;
 scalar_t__ FUNC_3 (struct devlink*,char const*) ;
 struct devlink_region* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct devlink_region *FUNC_8(struct devlink *VAR_4,
          const char *VAR_5,
          u32 VAR_6,
          u64 VAR_7)
{
 struct devlink_region *VAR_8;
 int VAR_9 = 0;

 FUNC_6(&VAR_4->lock);

 if (FUNC_3(VAR_4, VAR_5)) {
  VAR_9 = -VAR_1;
  goto unlock;
 }

 VAR_8 = FUNC_4(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto unlock;
 }

 VAR_8->devlink = VAR_4;
 VAR_8->max_snapshots = VAR_6;
 VAR_8->name = VAR_5;
 VAR_8->size = VAR_7;
 FUNC_1(&VAR_8->snapshot_list);
 FUNC_5(&VAR_8->list, &VAR_4->region_list);
 FUNC_2(VAR_8, ((void*)0), VAR_0);

 FUNC_7(&VAR_4->lock);
 return VAR_8;

unlock:
 FUNC_7(&VAR_4->lock);
 return FUNC_0(VAR_9);
}
