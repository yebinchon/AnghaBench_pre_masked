
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
struct atm_dev {int number; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kobj_uevent_env*,char*,int ,int ) ;
 struct atm_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, struct kobj_uevent_env *VAR_3)
{
 struct atm_dev *VAR_4;

 if (!VAR_2)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 if (FUNC_0(VAR_3, "NAME=%s%d", VAR_4->type, VAR_4->number))
  return -VAR_1;

 return 0;
}
