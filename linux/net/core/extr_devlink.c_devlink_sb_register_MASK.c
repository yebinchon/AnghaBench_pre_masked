
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef void* u16 ;
struct devlink_sb {unsigned int index; int list; void* egress_tc_count; void* ingress_tc_count; void* egress_pools_count; void* ingress_pools_count; int size; } ;
struct devlink {int lock; int sb_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct devlink*,unsigned int) ;
 struct devlink_sb* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct devlink *VAR_3, unsigned int VAR_4,
   u32 VAR_5, u16 VAR_6,
   u16 VAR_7, u16 VAR_8,
   u16 VAR_9)
{
 struct devlink_sb *VAR_10;
 int VAR_11 = 0;

 FUNC_3(&VAR_3->lock);
 if (FUNC_0(VAR_3, VAR_4)) {
  VAR_11 = -VAR_0;
  goto unlock;
 }

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  VAR_11 = -VAR_1;
  goto unlock;
 }
 VAR_10->index = VAR_4;
 VAR_10->size = VAR_5;
 VAR_10->ingress_pools_count = VAR_6;
 VAR_10->egress_pools_count = VAR_7;
 VAR_10->ingress_tc_count = VAR_8;
 VAR_10->egress_tc_count = VAR_9;
 FUNC_2(&VAR_10->list, &VAR_3->sb_list);
unlock:
 FUNC_4(&VAR_3->lock);
 return VAR_11;
}
