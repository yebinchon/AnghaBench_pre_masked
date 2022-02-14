
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int this_device; } ;
struct kmod_test_device {int dev; int list; TYPE_1__ misc_dev; } ;


 scalar_t__ VAR_0 ;
 struct kmod_test_device* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct kmod_test_device*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct kmod_test_device *FUNC_8(void)
{
 struct kmod_test_device *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_5(&VAR_2);


 if (VAR_1 + 1 == VAR_0) {
  FUNC_7("reached limit of number of test devices\n");
  goto out;
 }

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  goto out;

 VAR_5 = FUNC_4(&VAR_4->misc_dev);
 if (VAR_5) {
  FUNC_7("could not register misc device: %d\n", VAR_5);
  FUNC_2(VAR_4);
  goto out;
 }

 VAR_4->dev = VAR_4->misc_dev.this_device;
 FUNC_3(&VAR_4->list, &VAR_3);
 FUNC_1(VAR_4->dev, "interface ready\n");

 VAR_1++;

out:
 FUNC_6(&VAR_2);

 return VAR_4;

}
