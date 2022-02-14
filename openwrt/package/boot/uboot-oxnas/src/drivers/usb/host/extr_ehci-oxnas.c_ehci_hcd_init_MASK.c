
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ehci_hcor {int dummy; } ;
struct ehci_hccr {int cr_capbase; } ;
typedef enum usb_init_type { ____Placeholder_usb_init_type } usb_init_type ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 struct ehci_hcor* VAR_1 ;
 int FUNC_2 () ;

int FUNC_3(int VAR_2, enum usb_init_type VAR_3, struct ehci_hccr **VAR_4,
    struct ehci_hcor **VAR_5)
{
 FUNC_2();
 *VAR_4 = (struct ehci_hccr *)(VAR_0 + 0x100);
 *VAR_5 = (struct ehci_hcor *)((uint32_t)*VAR_4 +
   FUNC_0(FUNC_1(&(*VAR_4)->cr_capbase)));
 VAR_1 = *VAR_5;
 return 0;
}
