
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {scalar_t__ subsystem_vendor; scalar_t__ subsystem_device; int dev; int device; } ;
struct TYPE_3__ {scalar_t__ subvendor; scalar_t__ subdevice; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*,...) ;
 struct pci_device_id* FUNC_3 (int ,struct pci_dev*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_4)
{
 int VAR_5;
 const struct pci_device_id *VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6 && VAR_6->driver_data > 0)
  return VAR_6->driver_data;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); ++VAR_5)
  if (VAR_2[VAR_5].subvendor == VAR_4->subsystem_vendor &&
      VAR_2[VAR_5].subdevice == VAR_4->subsystem_device) {
   FUNC_1(&VAR_4->dev,
    "card %#04x-%#04x:%#04x has no audio\n",
        VAR_4->device, VAR_4->subsystem_vendor, VAR_4->subsystem_device);
   return -VAR_0;
  }

 FUNC_2(&VAR_4->dev, "unknown card %#04x-%#04x:%#04x\n",
     VAR_4->device, VAR_4->subsystem_vendor, VAR_4->subsystem_device);
 FUNC_2(&VAR_4->dev, "please mail id, board name, and, "
     "if it works, the correct digital_rate option to "
     "<alsa-devel@alsa-project.org>\n");
 return VAR_1;
}
