
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct trace_seq {int dummy; } ;
struct pci_driver {unsigned long long name; } ;
struct pci_dev {TYPE_2__* resource; int irq; int device; int vendor; int devfn; TYPE_1__* bus; } ;
typedef int resource_size_t ;
struct TYPE_4__ {int start; int flags; int end; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 struct pci_driver* FUNC_0 (struct pci_dev const*) ;
 int FUNC_1 (struct trace_seq*,char*,unsigned long long,...) ;
 int FUNC_2 (struct trace_seq*,char*) ;

__attribute__((used)) static void FUNC_3(struct trace_seq *VAR_1, const struct pci_dev *VAR_2)
{
 int VAR_3;
 resource_size_t VAR_4, VAR_5;
 const struct pci_driver *VAR_6 = FUNC_0(VAR_2);

 FUNC_1(VAR_1, "PCIDEV %02x%02x %04x%04x %x",
    VAR_2->bus->number, VAR_2->devfn,
    VAR_2->vendor, VAR_2->device, VAR_2->irq);
 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
  VAR_4 = VAR_2->resource[VAR_3].start;
  FUNC_1(VAR_1, " %llx",
   (unsigned long long)(VAR_4 |
   (VAR_2->resource[VAR_3].flags & VAR_0)));
 }
 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
  VAR_4 = VAR_2->resource[VAR_3].start;
  VAR_5 = VAR_2->resource[VAR_3].end;
  FUNC_1(VAR_1, " %llx",
   VAR_2->resource[VAR_3].start < VAR_2->resource[VAR_3].end ?
   (unsigned long long)(VAR_5 - VAR_4) + 1 : 0);
 }
 if (VAR_6)
  FUNC_1(VAR_1, " %s\n", VAR_6->name);
 else
  FUNC_2(VAR_1, " \n");
}
