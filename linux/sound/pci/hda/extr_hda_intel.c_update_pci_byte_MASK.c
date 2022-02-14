
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*,unsigned int,unsigned char*) ;
 int FUNC_1 (struct pci_dev*,unsigned int,unsigned char) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0, unsigned int VAR_1,
       unsigned char VAR_2, unsigned char VAR_3)
{
 unsigned char VAR_4;

 FUNC_0(VAR_0, VAR_1, &VAR_4);
 VAR_4 &= ~VAR_2;
 VAR_4 |= (VAR_3 & VAR_2);
 FUNC_1(VAR_0, VAR_1, VAR_4);
}
