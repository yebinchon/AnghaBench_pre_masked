
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct list_head {int dummy; } ;
struct devlink_resource_size_params {int dummy; } ;
struct devlink_resource {char const* name; int size_valid; int list; struct list_head resource_list; int size_params; scalar_t__ id; scalar_t__ size_new; scalar_t__ size; struct devlink_resource* parent; } ;
struct devlink {int lock; struct list_head resource_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct list_head*) ;
 struct devlink_resource* FUNC_1 (struct devlink*,int *,scalar_t__) ;
 int FUNC_2 (struct devlink_resource*) ;
 struct devlink_resource* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *,struct devlink_resource_size_params const*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct devlink *VAR_4,
         const char *VAR_5,
         u64 VAR_6,
         u64 VAR_7,
         u64 VAR_8,
         const struct devlink_resource_size_params *VAR_9)
{
 struct devlink_resource *VAR_10;
 struct list_head *VAR_11;
 bool VAR_12;
 int VAR_13 = 0;

 VAR_12 = VAR_8 == VAR_0;

 FUNC_6(&VAR_4->lock);
 VAR_10 = FUNC_1(VAR_4, ((void*)0), VAR_7);
 if (VAR_10) {
  VAR_13 = -VAR_1;
  goto out;
 }

 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_3);
 if (!VAR_10) {
  VAR_13 = -VAR_2;
  goto out;
 }

 if (VAR_12) {
  VAR_11 = &VAR_4->resource_list;
 } else {
  struct devlink_resource *VAR_14;

  VAR_14 = FUNC_1(VAR_4, ((void*)0),
       VAR_8);
  if (VAR_14) {
   VAR_11 = &VAR_14->resource_list;
   VAR_10->parent = VAR_14;
  } else {
   FUNC_2(VAR_10);
   VAR_13 = -VAR_1;
   goto out;
  }
 }

 VAR_10->name = VAR_5;
 VAR_10->size = VAR_6;
 VAR_10->size_new = VAR_6;
 VAR_10->id = VAR_7;
 VAR_10->size_valid = 1;
 FUNC_5(&VAR_10->size_params, VAR_9,
        sizeof(VAR_10->size_params));
 FUNC_0(&VAR_10->resource_list);
 FUNC_4(&VAR_10->list, VAR_11);
out:
 FUNC_7(&VAR_4->lock);
 return VAR_13;
}
