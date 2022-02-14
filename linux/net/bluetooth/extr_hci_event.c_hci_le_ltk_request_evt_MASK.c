
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_ltk {scalar_t__ ediv; scalar_t__ rand; int enc_size; scalar_t__ type; int list; int val; } ;
struct sk_buff {scalar_t__ data; } ;
struct hci_ev_le_ltk_req {scalar_t__ ediv; scalar_t__ rand; int handle; } ;
struct hci_dev {int name; } ;
struct hci_cp_le_ltk_reply {int handle; int ltk; } ;
struct hci_cp_le_ltk_neg_reply {int handle; int ltk; } ;
struct hci_conn {int enc_key_size; int flags; int pending_sec_level; int handle; int role; int dst_type; int dst; } ;
typedef int neg ;
typedef int cp ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 struct hci_conn* FUNC_4 (struct hci_dev*,int ) ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 struct smp_ltk* FUNC_7 (struct hci_dev*,int *,int ,int ) ;
 int FUNC_8 (struct hci_dev*,int ,int,struct hci_cp_le_ltk_reply*) ;
 int FUNC_9 (struct smp_ltk*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (struct smp_ltk*) ;
 int FUNC_15 (struct smp_ltk*) ;

__attribute__((used)) static void FUNC_16(struct hci_dev *VAR_5, struct sk_buff *VAR_6)
{
 struct hci_ev_le_ltk_req *VAR_7 = (void *) VAR_6->data;
 struct hci_cp_le_ltk_reply VAR_8;
 struct hci_cp_le_ltk_neg_reply VAR_9;
 struct hci_conn *VAR_10;
 struct smp_ltk *VAR_11;

 FUNC_0("%s handle 0x%4.4x", VAR_5->name, FUNC_1(VAR_7->handle));

 FUNC_5(VAR_5);

 VAR_10 = FUNC_4(VAR_5, FUNC_1(VAR_7->handle));
 if (VAR_10 == ((void*)0))
  goto not_found;

 VAR_11 = FUNC_7(VAR_5, &VAR_10->dst, VAR_10->dst_type, VAR_10->role);
 if (!VAR_11)
  goto not_found;

 if (FUNC_14(VAR_11)) {

  if (VAR_7->ediv || VAR_7->rand)
   goto not_found;
 } else {

  if (VAR_7->ediv != VAR_11->ediv || VAR_7->rand != VAR_11->rand)
   goto not_found;
 }

 FUNC_11(VAR_8.ltk, VAR_11->val, VAR_11->enc_size);
 FUNC_12(VAR_8.ltk + VAR_11->enc_size, 0, sizeof(VAR_8.ltk) - VAR_11->enc_size);
 VAR_8.handle = FUNC_3(VAR_10->handle);

 VAR_10->pending_sec_level = FUNC_15(VAR_11);

 VAR_10->enc_key_size = VAR_11->enc_size;

 FUNC_8(VAR_5, VAR_2, sizeof(VAR_8), &VAR_8);







 if (VAR_11->type == VAR_3) {
  FUNC_13(VAR_0, &VAR_10->flags);
  FUNC_10(&VAR_11->list);
  FUNC_9(VAR_11, VAR_4);
 } else {
  FUNC_2(VAR_0, &VAR_10->flags);
 }

 FUNC_6(VAR_5);

 return;

not_found:
 VAR_9.handle = VAR_7->handle;
 FUNC_8(VAR_5, VAR_1, sizeof(VAR_9), &VAR_9);
 FUNC_6(VAR_5);
}
