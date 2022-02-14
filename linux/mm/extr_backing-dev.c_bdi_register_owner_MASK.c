
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int devt; } ;
struct backing_dev_info {struct device* owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct backing_dev_info*,char*,int ,int ) ;
 int FUNC_4 (struct device*) ;

int FUNC_5(struct backing_dev_info *VAR_0, struct device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0, "%u:%u", FUNC_0(VAR_1->devt), FUNC_1(VAR_1->devt));
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0->owner);
 VAR_0->owner = VAR_1;
 FUNC_4(VAR_1);
 return 0;
}
