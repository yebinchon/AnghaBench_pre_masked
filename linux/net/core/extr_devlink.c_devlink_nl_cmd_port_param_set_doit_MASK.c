
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {struct devlink_port** user_ptr; } ;
struct devlink_port {int param_list; int index; int devlink; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,struct genl_info*,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_1,
           struct genl_info *VAR_2)
{
 struct devlink_port *VAR_3 = VAR_2->user_ptr[0];

 return FUNC_0(VAR_3->devlink,
            VAR_3->index,
            &VAR_3->param_list, VAR_2,
            VAR_0);
}
