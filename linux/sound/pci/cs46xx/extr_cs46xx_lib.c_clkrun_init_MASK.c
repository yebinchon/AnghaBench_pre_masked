
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_cs46xx {int acpi_port; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*) ;
 struct pci_dev* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;

__attribute__((used)) static void FUNC_3(struct snd_cs46xx *VAR_2)
{
 struct pci_dev *VAR_3;
 u8 VAR_4;

 VAR_2->acpi_port = 0;

 VAR_3 = FUNC_1(VAR_1,
  VAR_0, ((void*)0));
 if (VAR_3 == ((void*)0))
  return;


 FUNC_2(VAR_3, 0x41, &VAR_4);
 VAR_2->acpi_port = VAR_4 << 8;
 FUNC_0(VAR_3);
}
