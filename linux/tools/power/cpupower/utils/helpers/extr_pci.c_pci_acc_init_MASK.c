
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_filter {int domain; int bus; int slot; int func; int vendor; int device; } ;
struct pci_dev {struct pci_dev* next; } ;
struct pci_access {struct pci_dev* devices; } ;


 struct pci_access* FUNC_0 () ;
 int FUNC_1 (struct pci_access*) ;
 int FUNC_2 (struct pci_access*,struct pci_filter*) ;
 scalar_t__ FUNC_3 (struct pci_filter*,struct pci_dev*) ;
 int FUNC_4 (struct pci_access*) ;
 int FUNC_5 (struct pci_access*) ;

struct pci_dev *FUNC_6(struct pci_access **VAR_0, int VAR_1, int VAR_2,
        int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct pci_filter VAR_7;
 struct pci_dev *VAR_8;

 *VAR_0 = FUNC_0();
 if (*VAR_0 == ((void*)0))
  return ((void*)0);

 FUNC_2(*VAR_0, &VAR_7);
 VAR_7.domain = VAR_1;
 VAR_7.bus = VAR_2;
 VAR_7.slot = VAR_3;
 VAR_7.func = VAR_4;
 VAR_7.vendor = VAR_5;
 VAR_7.device = VAR_6;

 FUNC_4(*VAR_0);
 FUNC_5(*VAR_0);

 for (VAR_8 = (*VAR_0)->devices; VAR_8; VAR_8 = VAR_8->next) {
  if (FUNC_3(&VAR_7, VAR_8))
   return VAR_8;
 }
 FUNC_1(*VAR_0);
 return ((void*)0);
}
