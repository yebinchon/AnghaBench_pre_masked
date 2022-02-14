
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smp_chan {scalar_t__ enc_key_size; } ;
struct l2cap_conn {TYPE_1__* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_dev {scalar_t__ le_max_key_size; } ;
typedef scalar_t__ __u8 ;
struct TYPE_2__ {struct hci_dev* hdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u8 FUNC_0(struct l2cap_conn *VAR_2, __u8 VAR_3)
{
 struct l2cap_chan *VAR_4 = VAR_2->smp;
 struct hci_dev *VAR_5 = VAR_2->hcon->hdev;
 struct smp_chan *VAR_6 = VAR_4->data;

 if (VAR_3 > VAR_5->le_max_key_size ||
     VAR_3 < VAR_1)
  return VAR_0;

 VAR_6->enc_key_size = VAR_3;

 return 0;
}
