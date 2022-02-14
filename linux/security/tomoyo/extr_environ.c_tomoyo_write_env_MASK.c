
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct tomoyo_env_acl {int env; TYPE_1__ head; } ;
struct tomoyo_acl_param {int dummy; } ;
typedef int e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (struct tomoyo_acl_param*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int,struct tomoyo_acl_param*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct tomoyo_acl_param *VAR_4)
{
 struct tomoyo_env_acl VAR_5 = { .head.type = VAR_2 };
 int VAR_6 = -VAR_1;
 const char *VAR_7 = FUNC_4(VAR_4);

 if (!FUNC_1(VAR_7) || FUNC_0(VAR_7, '='))
  return -VAR_0;
 VAR_5.env = FUNC_2(VAR_7);
 if (!VAR_5.env)
  return VAR_6;
 VAR_6 = FUNC_5(&VAR_5.head, sizeof(VAR_5), VAR_4,
      VAR_3, ((void*)0));
 FUNC_3(VAR_5.env);
 return VAR_6;
}
