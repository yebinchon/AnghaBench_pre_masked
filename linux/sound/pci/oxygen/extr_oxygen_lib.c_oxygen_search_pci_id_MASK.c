
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_device_id {int subdevice; scalar_t__ driver_data; scalar_t__ vendor; } ;
struct oxygen {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct oxygen*,int ,int ) ;
 int FUNC_1 (struct oxygen*,int) ;

__attribute__((used)) static const struct pci_device_id *
FUNC_2(struct oxygen *VAR_3, const struct pci_device_id VAR_4[])
{
 u16 VAR_5;





 FUNC_0(VAR_3, VAR_1,
      VAR_2);




 VAR_5 = FUNC_1(VAR_3, 2);

 if (VAR_5 == 0xffff && FUNC_1(VAR_3, 1) == 0xffff)
  VAR_5 = 0x8788;





 for (; VAR_4->vendor; ++VAR_4)
  if (VAR_4->subdevice == VAR_5 &&
      VAR_4->driver_data != VAR_0)
   return VAR_4;
 return ((void*)0);
}
