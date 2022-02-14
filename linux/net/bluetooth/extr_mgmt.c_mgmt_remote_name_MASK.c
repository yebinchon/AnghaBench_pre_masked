
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_ev_device_found {int eir_len; int eir; int rssi; TYPE_1__ addr; } ;
struct hci_dev {int dummy; } ;
typedef int s8 ;
typedef int buf ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int ,struct hci_dev*,struct mgmt_ev_device_found*,scalar_t__,int *) ;

void FUNC_6(struct hci_dev *VAR_3, bdaddr_t *VAR_4, u8 VAR_5,
        u8 VAR_6, s8 VAR_7, u8 *VAR_8, u8 VAR_9)
{
 struct mgmt_ev_device_found *VAR_10;
 char VAR_11[sizeof(*VAR_10) + VAR_1 + 2];
 u16 VAR_12;

 VAR_10 = (struct mgmt_ev_device_found *) VAR_11;

 FUNC_4(VAR_11, 0, sizeof(VAR_11));

 FUNC_0(&VAR_10->addr.bdaddr, VAR_4);
 VAR_10->addr.type = FUNC_3(VAR_5, VAR_6);
 VAR_10->rssi = VAR_7;

 VAR_12 = FUNC_2(VAR_10->eir, 0, VAR_0, VAR_8,
      VAR_9);

 VAR_10->eir_len = FUNC_1(VAR_12);

 FUNC_5(VAR_2, VAR_3, VAR_10, sizeof(*VAR_10) + VAR_12, ((void*)0));
}
