
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_acl_param {int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (struct tomoyo_acl_param*) ;

int FUNC_2(struct tomoyo_acl_param *VAR_1)
{
 if (FUNC_0(&VAR_1->data, "env "))
  return FUNC_1(VAR_1);
 return -VAR_0;
}
