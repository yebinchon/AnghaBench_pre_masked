
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct smp_dev {int dummy; } ;
struct l2cap_chan {struct smp_dev* data; } ;
struct hci_dev {struct l2cap_chan* smp_data; } ;
struct TYPE_4__ {int* b; } ;
typedef TYPE_1__ bdaddr_t ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int const*,int*,int*) ;

int FUNC_3(struct hci_dev *VAR_1, const u8 VAR_2[16], bdaddr_t *VAR_3)
{
 struct l2cap_chan *VAR_4 = VAR_1->smp_data;
 struct smp_dev *VAR_5;
 int VAR_6;

 if (!VAR_4 || !VAR_4->data)
  return -VAR_0;

 VAR_5 = VAR_4->data;

 FUNC_1(&VAR_3->b[3], 3);

 VAR_3->b[5] &= 0x3f;
 VAR_3->b[5] |= 0x40;

 VAR_6 = FUNC_2(VAR_2, &VAR_3->b[3], VAR_3->b);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0("RPA %pMR", VAR_3);

 return 0;
}
