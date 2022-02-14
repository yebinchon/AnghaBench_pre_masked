
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct atmdev_ops {int dummy; } ;
struct atm_dev {int number; unsigned long flags; unsigned long stats; int dev_list; int refcnt; struct atmdev_ops const* ops; } ;


 struct atm_dev* FUNC_0 (char const*) ;
 struct atm_dev* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct atm_dev*) ;
 int VAR_1 ;
 int FUNC_3 (struct atm_dev*) ;
 scalar_t__ FUNC_4 (struct atm_dev*) ;
 scalar_t__ FUNC_5 (struct atm_dev*,struct device*) ;
 int FUNC_6 (struct atm_dev*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (unsigned long*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char const*) ;
 int FUNC_12 (int *,int) ;

struct atm_dev *FUNC_13(const char *VAR_2, struct device *VAR_3,
     const struct atmdev_ops *VAR_4, int VAR_5,
     unsigned long *VAR_6)
{
 struct atm_dev *VAR_7, *VAR_8;

 VAR_7 = FUNC_0(VAR_2);
 if (!VAR_7) {
  FUNC_11("no space for dev %s\n", VAR_2);
  return ((void*)0);
 }
 FUNC_9(&VAR_0);
 if (VAR_5 != -1) {
  VAR_8 = FUNC_1(VAR_5);
  if (VAR_8) {
   FUNC_2(VAR_8);
   FUNC_10(&VAR_0);
   FUNC_6(VAR_7);
   return ((void*)0);
  }
  VAR_7->number = VAR_5;
 } else {
  VAR_7->number = 0;
  while ((VAR_8 = FUNC_1(VAR_7->number))) {
   FUNC_2(VAR_8);
   VAR_7->number++;
  }
 }

 VAR_7->ops = VAR_4;
 if (VAR_6)
  VAR_7->flags = *VAR_6;
 else
  FUNC_8(&VAR_7->flags, 0, sizeof(VAR_7->flags));
 FUNC_8(&VAR_7->stats, 0, sizeof(VAR_7->stats));
 FUNC_12(&VAR_7->refcnt, 1);

 if (FUNC_4(VAR_7) < 0) {
  FUNC_11("atm_proc_dev_register failed for dev %s\n", VAR_2);
  goto out_fail;
 }

 if (FUNC_5(VAR_7, VAR_3) < 0) {
  FUNC_11("atm_register_sysfs failed for dev %s\n", VAR_2);
  FUNC_3(VAR_7);
  goto out_fail;
 }

 FUNC_7(&VAR_7->dev_list, &VAR_1);

out:
 FUNC_10(&VAR_0);
 return VAR_7;

out_fail:
 FUNC_6(VAR_7);
 VAR_7 = ((void*)0);
 goto out;
}
