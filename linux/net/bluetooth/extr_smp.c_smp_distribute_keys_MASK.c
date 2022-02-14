
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_ltk {int dummy; } ;
struct smp_csrk {int val; int type; } ;
struct smp_cmd_sign_info {void** ltk; void** csrk; int addr_type; int bdaddr; int irk; void* rand; void* ediv; } ;
struct smp_cmd_pairing {int init_key_dist; int resp_key_dist; } ;
struct smp_cmd_master_ident {void** ltk; void** csrk; int addr_type; int bdaddr; int irk; void* rand; void* ediv; } ;
struct smp_cmd_ident_info {void** ltk; void** csrk; int addr_type; int bdaddr; int irk; void* rand; void* ediv; } ;
struct smp_cmd_ident_addr_info {void** ltk; void** csrk; int addr_type; int bdaddr; int irk; void* rand; void* ediv; } ;
struct smp_cmd_encrypt_info {void** ltk; void** csrk; int addr_type; int bdaddr; int irk; void* rand; void* ediv; } ;
struct smp_chan {int remote_key_dist; int enc_key_size; int flags; struct smp_csrk* slave_csrk; struct smp_ltk* slave_ltk; int * preq; int * prsp; struct l2cap_conn* conn; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_dev {void** irk; } ;
struct hci_conn {scalar_t__ type; scalar_t__ sec_level; int src_type; int src; int dst_type; int dst; scalar_t__ out; struct hci_dev* hdev; } ;
typedef int sign ;
typedef int rand ;
typedef int idinfo ;
typedef int ident ;
typedef int enc ;
typedef int ediv ;
typedef int addrinfo ;
typedef int __u8 ;
typedef void* __le64 ;
typedef void* __le16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (void**,int) ;
 struct smp_ltk* FUNC_3 (struct hci_dev*,int *,int ,int ,int,void**,int,void*,void*) ;
 struct smp_csrk* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,void**,int) ;
 int FUNC_6 (void**,int ,int) ;
 int FUNC_7 (struct smp_chan*) ;
 int FUNC_8 (struct smp_chan*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct smp_chan*) ;
 int FUNC_11 (struct l2cap_conn*) ;
 int FUNC_12 (struct l2cap_conn*) ;
 int FUNC_13 (struct l2cap_conn*,int ,int,struct smp_cmd_sign_info*) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(struct smp_chan *VAR_21)
{
 struct smp_cmd_pairing *VAR_22, *VAR_23;
 struct l2cap_conn *VAR_24 = VAR_21->conn;
 struct hci_conn *VAR_25 = VAR_24->hcon;
 struct hci_dev *VAR_26 = VAR_25->hdev;
 __u8 *VAR_27;

 FUNC_0("conn %p", VAR_24);

 VAR_23 = (void *) &VAR_21->prsp[1];


 if (VAR_25->out && (VAR_21->remote_key_dist & VAR_4)) {
  FUNC_10(VAR_21);
  return;
 }

 VAR_22 = (void *) &VAR_21->preq[1];

 if (VAR_25->out) {
  VAR_27 = &VAR_23->init_key_dist;
  *VAR_27 &= VAR_22->init_key_dist;
 } else {
  VAR_27 = &VAR_23->resp_key_dist;
  *VAR_27 &= VAR_22->resp_key_dist;
 }

 if (FUNC_14(VAR_18, &VAR_21->flags)) {
  if (VAR_25->type == VAR_5 && (*VAR_27 & VAR_15))
   FUNC_7(VAR_21);
  if (VAR_25->type == VAR_0 && (*VAR_27 & VAR_13))
   FUNC_8(VAR_21);


  *VAR_27 &= ~VAR_20;
 }

 FUNC_0("keydist 0x%x", *VAR_27);

 if (*VAR_27 & VAR_13) {
  struct smp_cmd_encrypt_info VAR_28;
  struct smp_cmd_master_ident VAR_29;
  struct smp_ltk *VAR_30;
  u8 VAR_31;
  __le16 VAR_32;
  __le64 VAR_33;





  FUNC_2(VAR_28.ltk, VAR_21->enc_key_size);
  FUNC_6(VAR_28.ltk + VAR_21->enc_key_size, 0,
         sizeof(VAR_28.ltk) - VAR_21->enc_key_size);

  FUNC_2(&VAR_32, sizeof(VAR_32));
  FUNC_2(&VAR_33, sizeof(VAR_33));

  FUNC_13(VAR_24, VAR_8, sizeof(VAR_28), &VAR_28);

  VAR_31 = VAR_25->sec_level == VAR_1;
  VAR_30 = FUNC_3(VAR_26, &VAR_25->dst, VAR_25->dst_type,
      VAR_19, VAR_31, VAR_28.ltk,
      VAR_21->enc_key_size, VAR_32, VAR_33);
  VAR_21->slave_ltk = VAR_30;

  VAR_29.ediv = VAR_32;
  VAR_29.rand = VAR_33;

  FUNC_13(VAR_24, VAR_11, sizeof(VAR_29), &VAR_29);

  *VAR_27 &= ~VAR_13;
 }

 if (*VAR_27 & VAR_14) {
  struct smp_cmd_ident_addr_info VAR_34;
  struct smp_cmd_ident_info VAR_35;

  FUNC_5(VAR_35.irk, VAR_26->irk, sizeof(VAR_35.irk));

  FUNC_13(VAR_24, VAR_10, sizeof(VAR_35), &VAR_35);







  FUNC_1(&VAR_34.bdaddr, &VAR_25->src);
  VAR_34.addr_type = VAR_25->src_type;

  FUNC_13(VAR_24, VAR_9, sizeof(VAR_34),
        &VAR_34);

  *VAR_27 &= ~VAR_14;
 }

 if (*VAR_27 & VAR_16) {
  struct smp_cmd_sign_info VAR_36;
  struct smp_csrk *VAR_37;


  FUNC_2(VAR_36.csrk, sizeof(VAR_36.csrk));

  VAR_37 = FUNC_4(sizeof(*VAR_37), VAR_3);
  if (VAR_37) {
   if (VAR_25->sec_level > VAR_2)
    VAR_37->type = VAR_6;
   else
    VAR_37->type = VAR_7;
   FUNC_5(VAR_37->val, VAR_36.csrk, sizeof(VAR_37->val));
  }
  VAR_21->slave_csrk = VAR_37;

  FUNC_13(VAR_24, VAR_12, sizeof(VAR_36), &VAR_36);

  *VAR_27 &= ~VAR_16;
 }


 if (VAR_21->remote_key_dist & VAR_4) {
  FUNC_10(VAR_21);
  return;
 }

 FUNC_9(VAR_17, &VAR_21->flags);
 FUNC_12(VAR_24);

 FUNC_11(VAR_24);
}
