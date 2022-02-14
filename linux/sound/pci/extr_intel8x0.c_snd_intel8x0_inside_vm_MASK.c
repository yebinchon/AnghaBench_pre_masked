
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subsystem_vendor; scalar_t__ subsystem_device; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_3)
{
 int VAR_4 = VAR_2;
 char *VAR_5 = ((void*)0);


 if (VAR_4 >= 0) {
  VAR_5 = VAR_4 ? "enable (forced) VM" : "disable (forced) VM";
  goto fini;
 }


 VAR_4 = 0;
 if (VAR_3->subsystem_vendor == VAR_1 &&
     VAR_3->subsystem_device == VAR_0) {

  VAR_5 = "enable KVM";
  VAR_4 = 1;
 } else if (VAR_3->subsystem_vendor == 0x1ab8) {

  VAR_5 = "enable Parallels VM";
  VAR_4 = 1;
 }

fini:
 if (VAR_5 != ((void*)0))
  FUNC_0(&VAR_3->dev, "%s optimization\n", VAR_5);

 return VAR_4;
}
