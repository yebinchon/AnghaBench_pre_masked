
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {struct media_ctl* media_ctl; } ;
struct media_device {int devnode; } ;
struct media_ctl {int media_entity; int intf_devnode; struct media_device* media_dev; } ;


 int FUNC_0 (struct media_ctl*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct snd_usb_substream *VAR_0)
{
 struct media_ctl *VAR_1 = VAR_0->media_ctl;

 if (VAR_1) {
  struct media_device *VAR_2;

  VAR_2 = VAR_1->media_dev;
  if (VAR_2 && FUNC_2(VAR_2->devnode)) {
   FUNC_3(VAR_1->intf_devnode);
   FUNC_1(&VAR_1->media_entity);
   FUNC_4(&VAR_1->media_entity);
  }
  FUNC_0(VAR_1);
  VAR_0->media_ctl = ((void*)0);
 }
}
