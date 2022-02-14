
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_irk {int rpa; int val; int list; int addr_type; int bdaddr; } ;
struct hci_dev {int identity_resolving_keys; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct smp_irk* FUNC_1 (struct hci_dev*,int *,int ) ;
 struct smp_irk* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int) ;

struct smp_irk *FUNC_5(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
       u8 VAR_3, u8 VAR_4[16], bdaddr_t *VAR_5)
{
 struct smp_irk *VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (!VAR_6) {
  VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
  if (!VAR_6)
   return ((void*)0);

  FUNC_0(&VAR_6->bdaddr, VAR_2);
  VAR_6->addr_type = VAR_3;

  FUNC_3(&VAR_6->list, &VAR_1->identity_resolving_keys);
 }

 FUNC_4(VAR_6->val, VAR_4, 16);
 FUNC_0(&VAR_6->rpa, VAR_5);

 return VAR_6;
}
