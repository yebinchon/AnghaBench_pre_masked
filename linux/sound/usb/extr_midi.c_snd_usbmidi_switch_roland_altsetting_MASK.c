
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface_descriptor {int bNumEndpoints; int bAlternateSetting; int bInterfaceNumber; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct snd_usb_midi {int * roland_load_ctl; int card; TYPE_1__* dev; struct usb_interface* iface; } ;
struct TYPE_4__ {int bmAttributes; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 TYPE_2__* FUNC_1 (struct usb_host_interface*,int) ;
 struct usb_interface_descriptor* FUNC_2 (struct usb_host_interface*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int * FUNC_4 (int *,struct snd_usb_midi*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_usb_midi *VAR_3)
{
 struct usb_interface *VAR_4;
 struct usb_host_interface *VAR_5;
 struct usb_interface_descriptor *VAR_6;

 VAR_4 = VAR_3->iface;
 if (!VAR_4 || VAR_4->num_altsetting != 2)
  return;

 VAR_5 = &VAR_4->altsetting[1];
 VAR_6 = FUNC_2(VAR_5);



 if (VAR_6->bNumEndpoints != 2 ||
     !((FUNC_1(VAR_5, 0)->bmAttributes &
        VAR_0) == VAR_1 ||
       (FUNC_1(VAR_5, 1)->bmAttributes &
        VAR_0) == VAR_1))
  return;

 FUNC_0(&VAR_3->dev->dev, "switching to altsetting %d with int ep\n",
      VAR_6->bAlternateSetting);
 FUNC_5(VAR_3->dev, VAR_6->bInterfaceNumber,
     VAR_6->bAlternateSetting);

 VAR_3->roland_load_ctl = FUNC_4(&VAR_2, VAR_3);
 if (FUNC_3(VAR_3->card, VAR_3->roland_load_ctl) < 0)
  VAR_3->roland_load_ctl = ((void*)0);
}
