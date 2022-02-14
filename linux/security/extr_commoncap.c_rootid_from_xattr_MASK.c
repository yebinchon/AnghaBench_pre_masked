
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct vfs_ns_cap_data {int rootid; } ;
struct user_namespace {int dummy; } ;
typedef int kuid_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct user_namespace*,int ) ;

__attribute__((used)) static kuid_t FUNC_2(const void *VAR_1, size_t VAR_2,
    struct user_namespace *VAR_3)
{
 const struct vfs_ns_cap_data *VAR_4 = VAR_1;
 uid_t VAR_5 = 0;

 if (VAR_2 == VAR_0)
  VAR_5 = FUNC_0(VAR_4->rootid);

 return FUNC_1(VAR_3, VAR_5);
}
