
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
typedef int modalias ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 char VAR_3[32];

 FUNC_2(FUNC_1(VAR_1), VAR_3,
    sizeof(VAR_3));
 if (FUNC_0(VAR_2, "MODALIAS=%s", VAR_3))
  return -VAR_0;
 return 0;
}
