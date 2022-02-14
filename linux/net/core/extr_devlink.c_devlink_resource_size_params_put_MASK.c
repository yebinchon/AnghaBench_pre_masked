
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_resource_size_params {int unit; int size_min; int size_max; int size_granularity; } ;
struct devlink_resource {struct devlink_resource_size_params size_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct devlink_resource *VAR_6,
     struct sk_buff *VAR_7)
{
 struct devlink_resource_size_params *VAR_8;

 VAR_8 = &VAR_6->size_params;
 if (FUNC_0(VAR_7, VAR_1,
         VAR_8->size_granularity, VAR_0) ||
     FUNC_0(VAR_7, VAR_2,
         VAR_8->size_max, VAR_0) ||
     FUNC_0(VAR_7, VAR_3,
         VAR_8->size_min, VAR_0) ||
     FUNC_1(VAR_7, VAR_4, VAR_8->unit))
  return -VAR_5;
 return 0;
}
