
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_host_driver {int edev_list; scalar_t__ ndevs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct usbip_host_driver*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct usbip_host_driver *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->edev_list);

 VAR_0->ndevs = 0;
 FUNC_0(&VAR_0->edev_list);

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  return -1;

 return 0;
}
