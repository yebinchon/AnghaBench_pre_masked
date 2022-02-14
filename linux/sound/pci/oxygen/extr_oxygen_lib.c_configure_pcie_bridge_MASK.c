
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_device_id {int driver_data; int member_0; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const,int) ;


 struct pci_device_id* FUNC_2 (struct pci_device_id const*,struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_0)
{
 enum { PEX811X, PI7C9X110, XIO2001 };
 static const struct pci_device_id VAR_1[] = {
  { FUNC_1(129, 0x8111), .driver_data = PEX811X },
  { FUNC_1(129, 0x8112), .driver_data = PEX811X },
  { FUNC_0(0x12d8, 0xe110), .driver_data = PI7C9X110 },
  { FUNC_1(128, 0x8240), .driver_data = XIO2001 },
  { }
 };
 struct pci_dev *VAR_2;
 const struct pci_device_id *VAR_3;
 u32 VAR_4;

 if (!VAR_0->bus || !VAR_0->bus->self)
  return;
 VAR_2 = VAR_0->bus->self;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return;

 switch (VAR_3->driver_data) {
 case PEX811X:
  FUNC_3(VAR_2, 0x48, &VAR_4);
  VAR_4 |= 1;
  VAR_4 |= 1 << 11;
  FUNC_4(VAR_2, 0x48, VAR_4);

  FUNC_4(VAR_2, 0x84, 0x0c);
  FUNC_3(VAR_2, 0x88, &VAR_4);
  VAR_4 &= ~(7 << 27);
  VAR_4 |= 2 << 27;
  FUNC_4(VAR_2, 0x88, VAR_4);
  break;

 case PI7C9X110:
  FUNC_3(VAR_2, 0x40, &VAR_4);
  VAR_4 |= 1;
  FUNC_4(VAR_2, 0x40, VAR_4);
  break;

 case XIO2001:
  FUNC_3(VAR_2, 0xe8, &VAR_4);
  VAR_4 &= ~0xf;
  VAR_4 &= ~(0xf << 8);
  VAR_4 |= 1 << 8;
  FUNC_4(VAR_2, 0xe8, VAR_4);
  break;
 }
}
