
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device_id {int dummy; } ;
struct xenbus_device {int dev; } ;
struct xen_snd_front_info {struct xenbus_device* xb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct xen_snd_front_info*) ;
 struct xen_snd_front_info* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct xenbus_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct xenbus_device *VAR_3,
    const struct xenbus_device_id *VAR_4)
{
 struct xen_snd_front_info *VAR_5;

 VAR_5 = FUNC_1(&VAR_3->dev,
      sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->xb_dev = VAR_3;
 FUNC_0(&VAR_3->dev, VAR_5);

 return FUNC_2(VAR_3, VAR_2);
}
