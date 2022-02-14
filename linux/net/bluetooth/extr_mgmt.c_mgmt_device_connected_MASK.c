
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef size_t u16 ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_ev_device_connected {int eir_len; int * eir; int flags; TYPE_1__ addr; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {size_t le_adv_data_len; scalar_t__* dev_class; int le_adv_data; int dst_type; int type; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (size_t) ;
 size_t FUNC_3 (int *,size_t,int ,scalar_t__*,int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__*,char*,int) ;
 int FUNC_6 (int *,int ,size_t) ;
 int FUNC_7 (int ,struct hci_dev*,char*,int,int *) ;

void FUNC_8(struct hci_dev *VAR_3, struct hci_conn *VAR_4,
      u32 VAR_5, u8 *VAR_6, u8 VAR_7)
{
 char VAR_8[512];
 struct mgmt_ev_device_connected *VAR_9 = (void *) VAR_8;
 u16 VAR_10 = 0;

 FUNC_1(&VAR_9->addr.bdaddr, &VAR_4->dst);
 VAR_9->addr.type = FUNC_4(VAR_4->type, VAR_4->dst_type);

 VAR_9->flags = FUNC_0(VAR_5);





 if (VAR_4->le_adv_data_len > 0) {
  FUNC_6(&VAR_9->eir[VAR_10],
         VAR_4->le_adv_data, VAR_4->le_adv_data_len);
  VAR_10 = VAR_4->le_adv_data_len;
 } else {
  if (VAR_7 > 0)
   VAR_10 = FUNC_3(VAR_9->eir, 0, VAR_1,
        VAR_6, VAR_7);

  if (FUNC_5(VAR_4->dev_class, "\0\0\0", 3) != 0)
   VAR_10 = FUNC_3(VAR_9->eir, VAR_10,
        VAR_0,
        VAR_4->dev_class, 3);
 }

 VAR_9->eir_len = FUNC_2(VAR_10);

 FUNC_7(VAR_2, VAR_3, VAR_8,
      sizeof(*VAR_9) + VAR_10, ((void*)0));
}
