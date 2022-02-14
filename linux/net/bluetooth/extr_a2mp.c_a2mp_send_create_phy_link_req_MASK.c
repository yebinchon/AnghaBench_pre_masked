
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct l2cap_chan {int remote_amp_id; } ;
struct amp_assoc {int len; int data; } ;
struct hci_dev {int id; int name; struct amp_assoc loc_assoc; } ;
struct amp_mgr {struct l2cap_chan* bredr_chan; } ;
struct a2mp_physlink_req {int amp_assoc; int remote_id; int local_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct amp_mgr*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct amp_mgr*) ;
 int FUNC_2 (struct amp_mgr*,int ,int ,size_t,struct a2mp_physlink_req*) ;
 struct amp_mgr* FUNC_3 (int ) ;
 int FUNC_4 (struct amp_mgr*) ;
 int FUNC_5 (struct a2mp_physlink_req*) ;
 struct a2mp_physlink_req* FUNC_6 (size_t,int ) ;
 int FUNC_7 (int ,int ,int) ;

void FUNC_8(struct hci_dev *VAR_3, u8 VAR_4)
{
 struct amp_mgr *VAR_5;
 struct amp_assoc *VAR_6 = &VAR_3->loc_assoc;
 struct a2mp_physlink_req *VAR_7;
 struct l2cap_chan *VAR_8;
 size_t VAR_9;

 VAR_5 = FUNC_3(VAR_2);
 if (!VAR_5)
  return;

 VAR_9 = sizeof(*VAR_7) + VAR_6->len;

 FUNC_0("%s mgr %p assoc_len %zu", VAR_3->name, VAR_5, VAR_9);

 VAR_7 = FUNC_6(VAR_9, VAR_1);
 if (!VAR_7) {
  FUNC_4(VAR_5);
  return;
 }

 VAR_8 = VAR_5->bredr_chan;
 if (!VAR_8)
  goto clean;

 VAR_7->local_id = VAR_3->id;
 VAR_7->remote_id = VAR_8->remote_amp_id;
 FUNC_7(VAR_7->amp_assoc, VAR_6->data, VAR_6->len);

 FUNC_2(VAR_5, VAR_0, FUNC_1(VAR_5), VAR_9, VAR_7);

clean:
 FUNC_4(VAR_5);
 FUNC_5(VAR_7);
}
