
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kset_uevent_ops {int dummy; } ;
struct kset {int dummy; } ;
struct kobject {int dummy; } ;


 int FUNC_0 (struct kset*) ;
 struct kset* FUNC_1 (char const*,struct kset_uevent_ops const*,struct kobject*) ;
 int FUNC_2 (struct kset*) ;

struct kset *FUNC_3(const char *VAR_0,
     const struct kset_uevent_ops *VAR_1,
     struct kobject *VAR_2)
{
 struct kset *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
