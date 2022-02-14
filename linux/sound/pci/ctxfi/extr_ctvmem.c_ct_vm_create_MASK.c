
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ct_vm_block {int size; int list; scalar_t__ addr; } ;
struct ct_vm {int size; int unused; int used; int get_ptp_phys; int unmap; int map; int * ptp; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ct_vm*) ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (struct pci_dev*) ;

int FUNC_7(struct ct_vm **VAR_9, struct pci_dev *VAR_10)
{
 struct ct_vm *VAR_11;
 struct ct_vm_block *VAR_12;
 int VAR_13, VAR_14 = 0;

 *VAR_9 = ((void*)0);

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 FUNC_4(&VAR_11->lock);


 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  VAR_14 = FUNC_5(VAR_5,
       FUNC_6(VAR_10),
       VAR_4, &VAR_11->ptp[VAR_13]);
  if (VAR_14 < 0)
   break;
 }
 if (VAR_14 < 0) {

  FUNC_1(VAR_11);
  return -VAR_2;
 }
 VAR_11->size = VAR_0 * VAR_13;
 VAR_11->map = VAR_7;
 VAR_11->unmap = VAR_8;
 VAR_11->get_ptp_phys = VAR_6;
 FUNC_0(&VAR_11->unused);
 FUNC_0(&VAR_11->used);
 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_3);
 if (((void*)0) != VAR_12) {
  VAR_12->addr = 0;
  VAR_12->size = VAR_11->size;
  FUNC_3(&VAR_12->list, &VAR_11->unused);
 }

 *VAR_9 = VAR_11;
 return 0;
}
