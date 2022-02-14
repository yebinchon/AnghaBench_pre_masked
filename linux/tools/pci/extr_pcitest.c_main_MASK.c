
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_test {int barnum; int size; char* device; int legacyirq; int msinum; int msixnum; int irqtype; int set_irqtype; int get_irqtype; int read; int write; int copy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*) ;
 struct pci_test* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int,char**,char*) ;
 char* VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct pci_test*) ;
 int VAR_4 ;
 int FUNC_6 (char*,int *,int ) ;

int FUNC_7(int VAR_5, char **VAR_6)
{
 int VAR_7;
 struct pci_test *VAR_8;

 VAR_8 = FUNC_1(1, sizeof(*VAR_8));
 if (!VAR_8) {
  FUNC_4("Fail to allocate memory for pci_test\n");
  return -VAR_1;
 }


 VAR_8->barnum = -1;


 VAR_8->size = 0x19000;


 VAR_8->device = "/dev/pci-endpoint-test.0";

 while ((VAR_7 = FUNC_3(VAR_5, VAR_6, "D:b:m:x:i:Ilhrwcs:")) != VAR_2)
 switch (VAR_7) {
 case 'D':
  VAR_8->device = VAR_3;
  continue;
 case 'b':
  VAR_8->barnum = FUNC_0(VAR_3);
  if (VAR_8->barnum < 0 || VAR_8->barnum > 5)
   goto usage;
  continue;
 case 'l':
  VAR_8->legacyirq = 1;
  continue;
 case 'm':
  VAR_8->msinum = FUNC_0(VAR_3);
  if (VAR_8->msinum < 1 || VAR_8->msinum > 32)
   goto usage;
  continue;
 case 'x':
  VAR_8->msixnum = FUNC_0(VAR_3);
  if (VAR_8->msixnum < 1 || VAR_8->msixnum > 2048)
   goto usage;
  continue;
 case 'i':
  VAR_8->irqtype = FUNC_0(VAR_3);
  if (VAR_8->irqtype < 0 || VAR_8->irqtype > 2)
   goto usage;
  VAR_8->set_irqtype = 1;
  continue;
 case 'I':
  VAR_8->get_irqtype = 1;
  continue;
 case 'r':
  VAR_8->read = 1;
  continue;
 case 'w':
  VAR_8->write = 1;
  continue;
 case 'c':
  VAR_8->copy = 1;
  continue;
 case 's':
  VAR_8->size = FUNC_6(VAR_3, ((void*)0), 0);
  continue;
 case 'h':
 default:
usage:
  FUNC_2(VAR_4,
   "usage: %s [options]\n"
   "Options:\n"
   "\t-D <dev>		PCI endpoint test device {default: /dev/pci-endpoint-test.0}\n"
   "\t-b <bar num>		BAR test (bar number between 0..5)\n"
   "\t-m <msi num>		MSI test (msi number between 1..32)\n"
   "\t-x <msix num>	\tMSI-X test (msix number between 1..2048)\n"
   "\t-i <irq type>	\tSet IRQ type (0 - Legacy, 1 - MSI, 2 - MSI-X)\n"
   "\t-I			Get current IRQ type configured\n"
   "\t-l			Legacy IRQ test\n"
   "\t-r			Read buffer test\n"
   "\t-w			Write buffer test\n"
   "\t-c			Copy buffer test\n"
   "\t-s <size>		Size of buffer {default: 100KB}\n"
   "\t-h			Print this help message\n",
   VAR_6[0]);
  return -VAR_0;
 }

 return FUNC_5(VAR_8);
}
