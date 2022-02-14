
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udev_monitor {int dummy; } ;
struct udev_device {int dummy; } ;
struct udev {int dummy; } ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_5 (struct udev_device*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (struct udev_monitor*) ;
 int FUNC_7 (struct udev_monitor*,char*,int *) ;
 int FUNC_8 (struct udev_monitor*) ;
 struct udev_monitor* FUNC_9 (struct udev*,char*) ;
 struct udev_device* FUNC_10 (struct udev_monitor*) ;
 int FUNC_11 (struct udev_monitor*) ;
 struct udev* FUNC_12 () ;
 int FUNC_13 (struct udev_device*) ;
 int FUNC_14 (struct udev*) ;

__attribute__((used)) static void *FUNC_15(void *VAR_2)
{
 FUNC_2(VAR_2);

 int VAR_3;
 fd_set VAR_4;
 struct timeval VAR_5;
 struct udev *VAR_6;
 struct udev_monitor *VAR_7;
 struct udev_device *VAR_8;


 VAR_6 = FUNC_12();
 VAR_7 = FUNC_9(VAR_6, "udev");
 FUNC_7(VAR_7, "video4linux",
       ((void*)0));
 if (FUNC_6(VAR_7) < 0)
  return ((void*)0);


 VAR_3 = FUNC_8(VAR_7);

 while (FUNC_3(VAR_1) == VAR_0) {
  FUNC_1(&VAR_4);
  FUNC_0(VAR_3, &VAR_4);
  VAR_5.tv_sec = 1;
  VAR_5.tv_usec = 0;

  if (FUNC_4(VAR_3 + 1, &VAR_4, ((void*)0), ((void*)0), &VAR_5) <= 0)
   continue;

  VAR_8 = FUNC_10(VAR_7);
  if (!VAR_8)
   continue;

  FUNC_13(VAR_8);

  FUNC_5(VAR_8);
 }

 FUNC_11(VAR_7);
 FUNC_14(VAR_6);

 return ((void*)0);
}
