
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* open ) (struct usbip_host_driver*) ;} ;
struct usbip_host_driver {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbip_host_driver*) ;

__attribute__((used)) static inline int FUNC_1(struct usbip_host_driver *VAR_1)
{
 if (!VAR_1->ops.open)
  return -VAR_0;
 return VAR_1->ops.open(VAR_1);
}
