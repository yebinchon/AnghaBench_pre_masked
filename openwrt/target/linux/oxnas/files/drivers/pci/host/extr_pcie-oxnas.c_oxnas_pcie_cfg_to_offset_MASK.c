
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_sys_data {unsigned char busnr; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned FUNC_2(
 struct pci_sys_data *VAR_0,
 unsigned char VAR_1,
 unsigned int VAR_2,
 int VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5 = FUNC_1(VAR_2);
 unsigned char VAR_6;

 VAR_6 = VAR_1 - VAR_0->busnr;
 return (VAR_6 << 20) | (VAR_5 << 15) | (VAR_4 << 12) |
  (VAR_3 & ~3);
}
