
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int class; int class_mask; int member_0; } ;




 int FUNC_0 (int ,int ) ;

 int FUNC_1 (struct pci_device_id const*) ;

__attribute__((used)) static bool FUNC_2(void)
{
 static const struct pci_device_id VAR_0[] = {
  { FUNC_0(128, 130),
    .class = 129 << 16,
    .class_mask = 0xff << 16 },
  {}
 };
 return FUNC_1(VAR_0);
}
