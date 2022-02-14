
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {scalar_t__* attrs; struct devlink_port** user_ptr; } ;
struct devlink_port {struct devlink* devlink; } ;
struct devlink {int dummy; } ;
typedef enum devlink_port_type { ____Placeholder_devlink_port_type } devlink_port_type ;


 size_t VAR_0 ;
 int FUNC_0 (struct devlink*,struct devlink_port*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1,
     struct genl_info *VAR_2)
{
 struct devlink_port *VAR_3 = VAR_2->user_ptr[0];
 struct devlink *VAR_4 = VAR_3->devlink;
 int VAR_5;

 if (VAR_2->attrs[VAR_0]) {
  enum devlink_port_type VAR_6;

  VAR_6 = FUNC_1(VAR_2->attrs[VAR_0]);
  VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_6);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
