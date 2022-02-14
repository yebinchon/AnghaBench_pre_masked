
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* close ) (struct usbip_host_driver*) ;} ;
struct usbip_host_driver {TYPE_1__ ops; } ;


 int FUNC_0 (struct usbip_host_driver*) ;

__attribute__((used)) static inline void FUNC_1(struct usbip_host_driver *VAR_0)
{
 if (!VAR_0->ops.close)
  return;
 VAR_0->ops.close(VAR_0);
}
