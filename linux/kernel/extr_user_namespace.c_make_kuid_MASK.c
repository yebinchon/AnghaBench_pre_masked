
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct user_namespace {int uid_map; } ;
typedef int kuid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

kuid_t FUNC_2(struct user_namespace *VAR_0, uid_t VAR_1)
{

 return FUNC_0(FUNC_1(&VAR_0->uid_map, VAR_1));
}
