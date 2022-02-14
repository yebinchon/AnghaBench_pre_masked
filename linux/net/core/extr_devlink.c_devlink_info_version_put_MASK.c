
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct devlink_info_req {int msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct nlattr*) ;
 int FUNC_1 (int ,struct nlattr*) ;
 struct nlattr* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,char const*) ;

__attribute__((used)) static int FUNC_4(struct devlink_info_req *VAR_3, int VAR_4,
        const char *VAR_5,
        const char *VAR_6)
{
 struct nlattr *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_3->msg, VAR_4);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_3(VAR_3->msg, VAR_0,
        VAR_5);
 if (VAR_8)
  goto nla_put_failure;

 VAR_8 = FUNC_3(VAR_3->msg, VAR_1,
        VAR_6);
 if (VAR_8)
  goto nla_put_failure;

 FUNC_1(VAR_3->msg, VAR_7);

 return 0;

nla_put_failure:
 FUNC_0(VAR_3->msg, VAR_7);
 return VAR_8;
}
