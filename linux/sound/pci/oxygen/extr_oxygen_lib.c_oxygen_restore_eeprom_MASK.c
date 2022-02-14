
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_device_id {int subdevice; int subvendor; } ;
struct oxygen {TYPE_1__* card; int pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct oxygen*,int ,int ) ;
 int FUNC_2 (struct oxygen*,int ) ;
 int FUNC_3 (struct oxygen*,int ,int ) ;
 int FUNC_4 (struct oxygen*,int,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct oxygen *VAR_5,
      const struct pci_device_id *VAR_6)
{
 u16 VAR_7;

 VAR_7 = FUNC_2(VAR_5, 0);
 if (VAR_7 != VAR_0 &&
     (VAR_7 != 0xffff || VAR_6->subdevice != 0x8788)) {
  FUNC_4(VAR_5, 1, VAR_6->subvendor);
  FUNC_4(VAR_5, 0, VAR_0);

  FUNC_3(VAR_5, VAR_1,
     VAR_2);
  FUNC_5(VAR_5->pci, VAR_4,
          VAR_6->subvendor);
  FUNC_5(VAR_5->pci, VAR_3,
          VAR_6->subdevice);
  FUNC_1(VAR_5, VAR_1,
       VAR_2);

  FUNC_0(VAR_5->card->dev, "EEPROM ID restored\n");
 }
}
