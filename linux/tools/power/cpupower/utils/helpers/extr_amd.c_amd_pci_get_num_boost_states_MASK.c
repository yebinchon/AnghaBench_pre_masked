
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pci_dev {int dummy; } ;
struct pci_access {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_access*) ;
 int FUNC_1 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_2 (struct pci_access**,int,int) ;

int FUNC_3(int *VAR_1, int *VAR_2)
{
 struct pci_access *VAR_3;
 struct pci_dev *VAR_4;
 uint8_t VAR_5 = 0;

 *VAR_1 = *VAR_2 = 0;

 VAR_4 = FUNC_2(&VAR_3, 0x18, 4);

 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4, 0x15c);
 if (VAR_5 & 3)
  *VAR_1 = 1;
 else
  *VAR_1 = 0;
 *VAR_2 = (VAR_5 >> 2) & 7;

 FUNC_0(VAR_3);
 return 0;
}
