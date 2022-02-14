
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_sys_data {struct oxnas_pcie* private_data; } ;
struct oxnas_pcie {int dummy; } ;



__attribute__((used)) static inline struct oxnas_pcie *FUNC_0(struct pci_sys_data *VAR_0)
{
 return VAR_0->private_data;
}
