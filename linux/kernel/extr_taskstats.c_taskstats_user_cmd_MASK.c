
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct genl_info*) ;
 int FUNC_2 (struct genl_info*) ;
 int FUNC_3 (struct genl_info*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5, struct genl_info *VAR_6)
{
 if (VAR_6->attrs[VAR_3])
  return FUNC_2(VAR_6);
 else if (VAR_6->attrs[VAR_1])
  return FUNC_0(VAR_6);
 else if (VAR_6->attrs[VAR_2])
  return FUNC_1(VAR_6);
 else if (VAR_6->attrs[VAR_4])
  return FUNC_3(VAR_6);
 else
  return -VAR_0;
}
