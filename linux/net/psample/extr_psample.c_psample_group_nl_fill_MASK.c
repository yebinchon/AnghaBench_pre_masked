
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct psample_group {int seq; int refcount; int group_num; } ;
typedef enum psample_command { ____Placeholder_psample_command } psample_command ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int,int) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5,
     struct psample_group *VAR_6,
     enum psample_command VAR_7, u32 VAR_8, u32 VAR_9,
     int VAR_10)
{
 void *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_5, VAR_8, VAR_9, &VAR_4, VAR_10, VAR_7);
 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_3(VAR_5, VAR_3, VAR_6->group_num);
 if (VAR_12 < 0)
  goto error;

 VAR_12 = FUNC_3(VAR_5, VAR_1, VAR_6->refcount);
 if (VAR_12 < 0)
  goto error;

 VAR_12 = FUNC_3(VAR_5, VAR_2, VAR_6->seq);
 if (VAR_12 < 0)
  goto error;

 FUNC_1(VAR_5, VAR_11);
 return 0;

error:
 FUNC_0(VAR_5, VAR_11);
 return -VAR_0;
}
