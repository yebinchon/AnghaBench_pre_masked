
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct devlink_dpipe_value {int mapping_value; scalar_t__ mapping_valid; scalar_t__ mask; int value_size; scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4,
       struct devlink_dpipe_value *VAR_5)
{
 if (FUNC_0(VAR_4, VAR_0,
      VAR_5->value_size, VAR_5->value))
  return -VAR_3;
 if (VAR_5->mask)
  if (FUNC_0(VAR_4, VAR_2,
       VAR_5->value_size, VAR_5->mask))
   return -VAR_3;
 if (VAR_5->mapping_valid)
  if (FUNC_1(VAR_4, VAR_1,
    VAR_5->mapping_value))
   return -VAR_3;
 return 0;
}
