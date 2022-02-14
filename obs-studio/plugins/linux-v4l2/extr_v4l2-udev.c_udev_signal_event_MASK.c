
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_device {int dummy; } ;
struct calldata {int dummy; } ;
typedef enum udev_action { ____Placeholder_udev_action } udev_action ;




 int FUNC_0 (struct calldata*) ;
 int FUNC_1 (struct calldata*) ;
 int FUNC_2 (struct calldata*,char*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,struct calldata*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct udev_device*) ;
 char* FUNC_8 (struct udev_device*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_9(struct udev_device *VAR_2)
{
 const char *VAR_3;
 enum udev_action VAR_4;
 struct calldata VAR_5;

 FUNC_3(&VAR_0);

 VAR_3 = FUNC_8(VAR_2);
 VAR_4 = FUNC_6(FUNC_7(VAR_2));

 FUNC_1(&VAR_5);

 FUNC_2(&VAR_5, "device", VAR_3);

 switch (VAR_4) {
 case 129:
  FUNC_5(VAR_1, "device_added",
          &VAR_5);
  break;
 case 128:
  FUNC_5(VAR_1, "device_removed",
          &VAR_5);
  break;
 default:
  break;
 }

 FUNC_0(&VAR_5);

 FUNC_4(&VAR_0);
}
