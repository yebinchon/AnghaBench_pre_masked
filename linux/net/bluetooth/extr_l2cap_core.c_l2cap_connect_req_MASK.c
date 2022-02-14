
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct l2cap_conn_req {int dummy; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct l2cap_cmd_hdr {int dummy; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {int flags; struct hci_dev* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hci_dev*) ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct l2cap_conn*,struct l2cap_cmd_hdr*,int *,int ,int ) ;
 int FUNC_4 (struct hci_dev*,struct hci_conn*,int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct l2cap_conn *VAR_4,
        struct l2cap_cmd_hdr *VAR_5, u16 VAR_6, u8 *VAR_7)
{
 struct hci_dev *VAR_8 = VAR_4->hcon->hdev;
 struct hci_conn *VAR_9 = VAR_4->hcon;

 if (VAR_6 < sizeof(struct l2cap_conn_req))
  return -VAR_0;

 FUNC_0(VAR_8);
 if (FUNC_1(VAR_8, VAR_2) &&
     !FUNC_5(VAR_1, &VAR_9->flags))
  FUNC_4(VAR_8, VAR_9, 0, ((void*)0), 0);
 FUNC_2(VAR_8);

 FUNC_3(VAR_4, VAR_5, VAR_7, VAR_3, 0);
 return 0;
}
