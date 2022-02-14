
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_dpipe_value {int match; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct devlink_dpipe_value*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
      struct devlink_dpipe_value *VAR_3)
{
 if (!VAR_3->match)
  return -VAR_0;
 if (FUNC_0(VAR_2, VAR_3->match))
  return -VAR_1;
 if (FUNC_1(VAR_2, VAR_3))
  return -VAR_1;
 return 0;
}
