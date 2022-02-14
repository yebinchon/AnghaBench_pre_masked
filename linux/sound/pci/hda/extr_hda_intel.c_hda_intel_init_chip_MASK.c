
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct hdac_bus {int * mlcap; } ;
struct azx {scalar_t__ driver_type; struct pci_dev* pci; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 struct hdac_bus* FUNC_1 (struct azx*) ;
 int FUNC_2 (struct azx*,int) ;
 int FUNC_3 (struct azx*) ;
 int FUNC_4 (struct azx*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;
 int FUNC_6 (struct pci_dev*,int ,int) ;
 int FUNC_7 (struct hdac_bus*,int) ;

__attribute__((used)) static void FUNC_8(struct azx *VAR_3, bool VAR_4)
{
 struct hdac_bus *VAR_5 = FUNC_1(VAR_3);
 struct pci_dev *VAR_6 = VAR_3->pci;
 u32 VAR_7;

 FUNC_7(VAR_5, 1);
 if (VAR_3->driver_type == VAR_0) {
  FUNC_5(VAR_6, VAR_1, &VAR_7);
  VAR_7 = VAR_7 & ~VAR_2;
  FUNC_6(VAR_6, VAR_1, VAR_7);
 }
 FUNC_2(VAR_3, VAR_4);
 if (VAR_3->driver_type == VAR_0) {
  FUNC_5(VAR_6, VAR_1, &VAR_7);
  VAR_7 = VAR_7 | VAR_2;
  FUNC_6(VAR_6, VAR_1, VAR_7);
 }

 FUNC_7(VAR_5, 0);


 if (FUNC_0(VAR_6))
  FUNC_3(VAR_3);

 if (VAR_5->mlcap != ((void*)0))
  FUNC_4(VAR_3);
}
