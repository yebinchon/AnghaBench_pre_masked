
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct smp_dev {int dummy; } ;
struct l2cap_chan {struct smp_dev* data; } ;
struct hci_dev {struct l2cap_chan* smp_data; } ;
struct TYPE_4__ {int * b; } ;
typedef TYPE_1__ bdaddr_t ;


 int FUNC_0 (char*,TYPE_1__ const*,int,int const*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int const*,int *,int *) ;

bool FUNC_3(struct hci_dev *VAR_0, const u8 VAR_1[16],
       const bdaddr_t *VAR_2)
{
 struct l2cap_chan *VAR_3 = VAR_0->smp_data;
 struct smp_dev *VAR_4;
 u8 VAR_5[3];
 int VAR_6;

 if (!VAR_3 || !VAR_3->data)
  return 0;

 VAR_4 = VAR_3->data;

 FUNC_0("RPA %pMR IRK %*phN", VAR_2, 16, VAR_1);

 VAR_6 = FUNC_2(VAR_1, &VAR_2->b[3], VAR_5);
 if (VAR_6)
  return 0;

 return !FUNC_1(VAR_2->b, VAR_5, 3);
}
