
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_info {struct devlink** user_ptr; } ;
struct devlink {int dpipe_headers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct genl_info*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2,
         struct genl_info *VAR_3)
{
 struct devlink *VAR_4 = VAR_3->user_ptr[0];

 if (!VAR_4->dpipe_headers)
  return -VAR_1;
 return FUNC_0(VAR_3, VAR_0,
       0, VAR_4->dpipe_headers);
}
