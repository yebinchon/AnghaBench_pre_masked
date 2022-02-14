
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct amp_assoc {int len; int data; } ;
struct hci_dev {int id; int name; struct amp_assoc loc_assoc; } ;
struct amp_mgr {int ident; } ;
struct a2mp_amp_assoc_rsp {int amp_assoc; int status; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,struct amp_mgr*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct amp_mgr*,int ,int ,size_t,struct a2mp_amp_assoc_rsp*) ;
 struct amp_mgr* FUNC_2 (int ) ;
 int FUNC_3 (struct amp_mgr*) ;
 int FUNC_4 (struct a2mp_amp_assoc_rsp*) ;
 struct a2mp_amp_assoc_rsp* FUNC_5 (size_t,int ) ;
 int FUNC_6 (int ,int ,int) ;

void FUNC_7(struct hci_dev *VAR_5, u8 VAR_6)
{
 struct amp_mgr *VAR_7;
 struct amp_assoc *VAR_8 = &VAR_5->loc_assoc;
 struct a2mp_amp_assoc_rsp *VAR_9;
 size_t VAR_10;

 VAR_7 = FUNC_2(VAR_4);
 if (!VAR_7)
  return;

 FUNC_0("%s mgr %p", VAR_5->name, VAR_7);

 VAR_10 = sizeof(struct a2mp_amp_assoc_rsp) + VAR_8->len;
 VAR_9 = FUNC_5(VAR_10, VAR_3);
 if (!VAR_9) {
  FUNC_3(VAR_7);
  return;
 }

 VAR_9->id = VAR_5->id;

 if (VAR_6) {
  VAR_9->status = VAR_1;
 } else {
  VAR_9->status = VAR_2;
  FUNC_6(VAR_9->amp_assoc, VAR_8->data, VAR_8->len);
 }

 FUNC_1(VAR_7, VAR_0, VAR_7->ident, VAR_10, VAR_9);
 FUNC_3(VAR_7);
 FUNC_4(VAR_9);
}
