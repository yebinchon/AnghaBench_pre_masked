
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hci_dev {int id; int name; } ;
struct hci_conn {int remote_id; } ;
struct amp_mgr {int ident; } ;
struct a2mp_physlink_rsp {int local_id; int status; int remote_id; } ;
typedef int rsp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,struct amp_mgr*,struct hci_conn*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct amp_mgr*,int ,int ,int,struct a2mp_physlink_rsp*) ;
 struct amp_mgr* FUNC_2 (int ) ;
 int FUNC_3 (struct amp_mgr*) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int ,int ) ;

void FUNC_5(struct hci_dev *VAR_6, u8 VAR_7)
{
 struct amp_mgr *VAR_8;
 struct a2mp_physlink_rsp VAR_9;
 struct hci_conn *VAR_10;

 VAR_8 = FUNC_2(VAR_5);
 if (!VAR_8)
  return;

 VAR_10 = FUNC_4(VAR_6, VAR_3, VAR_4);
 if (!VAR_10) {
  VAR_9.status = VAR_2;
 } else {
  VAR_9.remote_id = VAR_10->remote_id;
  VAR_9.status = VAR_1;
 }

 FUNC_0("%s mgr %p hs_hcon %p status %u", VAR_6->name, VAR_8, VAR_10,
        VAR_7);

 VAR_9.local_id = VAR_6->id;
 FUNC_1(VAR_8, VAR_0, VAR_8->ident, sizeof(VAR_9), &VAR_9);
 FUNC_3(VAR_8);
}
