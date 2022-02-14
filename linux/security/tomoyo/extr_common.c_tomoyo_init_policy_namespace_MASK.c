
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_policy_namespace {int profile_version; int namespace_list; int * policy_list; int * group_list; int * acl_group; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(struct tomoyo_policy_namespace *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  FUNC_0(&VAR_5->acl_group[VAR_6]);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  FUNC_0(&VAR_5->group_list[VAR_6]);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_0(&VAR_5->policy_list[VAR_6]);
 VAR_5->profile_version = 20150505;
 VAR_3 = !FUNC_2(&VAR_4);
 FUNC_1(&VAR_5->namespace_list, &VAR_4);
}
