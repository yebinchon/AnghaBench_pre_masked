
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hw {int chip_type; int model; struct pci_dev* pci; } ;
typedef enum CTCARDS { ____Placeholder_CTCARDS } CTCARDS ;
typedef enum CHIPTYP { ____Placeholder_CHIPTYP } CHIPTYP ;




 int VAR_0 ;
 int FUNC_0 (struct hw**) ;
 int FUNC_1 (struct hw**) ;

int FUNC_2(struct pci_dev *VAR_1, enum CHIPTYP VAR_2,
    enum CTCARDS VAR_3, struct hw **VAR_4)
{
 int VAR_5;

 switch (VAR_2) {
 case 129:
  VAR_5 = FUNC_0(VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 if (VAR_5)
  return VAR_5;

 (*VAR_4)->pci = VAR_1;
 (*VAR_4)->chip_type = VAR_2;
 (*VAR_4)->model = VAR_3;

 return 0;
}
