
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_snapshot {int id; } ;
struct devlink_region {int size; int name; struct devlink* devlink; } ;
struct devlink {int dummy; } ;
typedef enum devlink_command { ____Placeholder_devlink_command } devlink_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink*) ;
 int VAR_9 ;
 int FUNC_2 (struct sk_buff*,struct devlink*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,void*) ;
 int FUNC_5 (int *,int ,struct sk_buff*,int ,int ,int ) ;
 void* FUNC_6 (struct sk_buff*,int ,int ,int *,int ,int) ;
 int FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 int FUNC_9 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 struct sk_buff* FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(struct devlink_region *VAR_10,
         struct devlink_snapshot *VAR_11,
         enum devlink_command VAR_12)
{
 struct devlink *VAR_13 = VAR_10->devlink;
 struct sk_buff *VAR_14;
 void *VAR_15;
 int VAR_16;

 FUNC_0(VAR_12 != VAR_5 && VAR_12 != VAR_4);

 VAR_14 = FUNC_11(VAR_8, VAR_7);
 if (!VAR_14)
  return;

 VAR_15 = FUNC_6(VAR_14, 0, 0, &VAR_9, 0, VAR_12);
 if (!VAR_15)
  goto out_free_msg;

 VAR_16 = FUNC_2(VAR_14, VAR_13);
 if (VAR_16)
  goto out_cancel_msg;

 VAR_16 = FUNC_7(VAR_14, VAR_1,
        VAR_10->name);
 if (VAR_16)
  goto out_cancel_msg;

 if (VAR_11) {
  VAR_16 = FUNC_8(VAR_14, VAR_3,
      VAR_11->id);
  if (VAR_16)
   goto out_cancel_msg;
 } else {
  VAR_16 = FUNC_9(VAR_14, VAR_2,
     VAR_10->size, VAR_0);
  if (VAR_16)
   goto out_cancel_msg;
 }
 FUNC_4(VAR_14, VAR_15);

 FUNC_5(&VAR_9, FUNC_1(VAR_13),
    VAR_14, 0, VAR_6, VAR_7);

 return;

out_cancel_msg:
 FUNC_3(VAR_14, VAR_15);
out_free_msg:
 FUNC_10(VAR_14);
}
