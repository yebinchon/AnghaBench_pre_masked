
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct devlink_snapshot {int list; int * data_destructor; int * data; struct devlink_region* region; int id; } ;
struct devlink_region {scalar_t__ cur_snapshots; scalar_t__ max_snapshots; int snapshot_list; struct devlink* devlink; } ;
struct devlink {int lock; } ;
typedef int devlink_snapshot_data_dest_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct devlink_region*,struct devlink_snapshot*,int ) ;
 scalar_t__ FUNC_1 (struct devlink_region*,int ) ;
 struct devlink_snapshot* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct devlink_region *VAR_4,
       u8 *VAR_5, u32 VAR_6,
       devlink_snapshot_data_dest_t *VAR_7)
{
 struct devlink *VAR_8 = VAR_4->devlink;
 struct devlink_snapshot *VAR_9;
 int VAR_10;

 FUNC_4(&VAR_8->lock);


 if (VAR_4->cur_snapshots == VAR_4->max_snapshots) {
  VAR_10 = -VAR_2;
  goto unlock;
 }

 if (FUNC_1(VAR_4, VAR_6)) {
  VAR_10 = -VAR_1;
  goto unlock;
 }

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_3);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto unlock;
 }

 VAR_9->id = VAR_6;
 VAR_9->region = VAR_4;
 VAR_9->data = VAR_5;
 VAR_9->data_destructor = VAR_7;

 FUNC_3(&VAR_9->list, &VAR_4->snapshot_list);

 VAR_4->cur_snapshots++;

 FUNC_0(VAR_4, VAR_9, VAR_0);
 FUNC_5(&VAR_8->lock);
 return 0;

unlock:
 FUNC_5(&VAR_8->lock);
 return VAR_10;
}
