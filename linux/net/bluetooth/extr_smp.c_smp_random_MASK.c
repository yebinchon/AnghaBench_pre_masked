
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_chan {int enc_key_size; int rrnd; int prnd; int tk; int pcnf; int prsp; int preq; struct l2cap_conn* conn; } ;
struct l2cap_conn {struct hci_conn* hcon; } ;
struct hci_conn {scalar_t__ pending_sec_level; int dst_type; int dst; int hdev; int flags; int enc_key_size; scalar_t__ out; int resp_addr; int resp_addr_type; int init_addr; int init_addr_type; } ;
typedef int __le64 ;
typedef int __le16 ;


 int FUNC_0 (char*,struct l2cap_conn*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,int*,int) ;
 int FUNC_3 (int ,int *,int ,int ,int,int*,int ,int ,int ) ;
 int FUNC_4 (struct hci_conn*,int ,int ,int*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int ,int ,int ,int *,int ,int *,int*) ;
 int FUNC_7 (int ,int ,int ,int*) ;
 int FUNC_8 (struct l2cap_conn*,int ,int,int ) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static u8 FUNC_10(struct smp_chan *VAR_7)
{
 struct l2cap_conn *VAR_8 = VAR_7->conn;
 struct hci_conn *VAR_9 = VAR_8->hcon;
 u8 VAR_10[16];
 int VAR_11;

 FUNC_0("conn %p %s", VAR_8, VAR_8->hcon->out ? "master" : "slave");

 VAR_11 = FUNC_6(VAR_7->tk, VAR_7->rrnd, VAR_7->preq, VAR_7->prsp,
       VAR_9->init_addr_type, &VAR_9->init_addr,
       VAR_9->resp_addr_type, &VAR_9->resp_addr, VAR_10);
 if (VAR_11)
  return VAR_6;

 if (FUNC_2(VAR_7->pcnf, VAR_10, sizeof(VAR_7->pcnf))) {
  FUNC_1(VAR_9->hdev, "pairing failed "
      "(confirmation values mismatch)");
  return VAR_4;
 }

 if (VAR_9->out) {
  u8 VAR_12[16];
  __le64 VAR_13 = 0;
  __le16 VAR_14 = 0;

  FUNC_7(VAR_7->tk, VAR_7->rrnd, VAR_7->prnd, VAR_12);

  if (FUNC_9(VAR_1, &VAR_9->flags))
   return VAR_6;

  FUNC_4(VAR_9, VAR_14, VAR_13, VAR_12, VAR_7->enc_key_size);
  VAR_9->enc_key_size = VAR_7->enc_key_size;
  FUNC_5(VAR_2, &VAR_9->flags);
 } else {
  u8 VAR_15[16], VAR_16;
  __le64 VAR_17 = 0;
  __le16 VAR_18 = 0;

  FUNC_8(VAR_8, VAR_3, sizeof(VAR_7->prnd),
        VAR_7->prnd);

  FUNC_7(VAR_7->tk, VAR_7->prnd, VAR_7->rrnd, VAR_15);

  if (VAR_9->pending_sec_level == VAR_0)
   VAR_16 = 1;
  else
   VAR_16 = 0;





  FUNC_3(VAR_9->hdev, &VAR_9->dst, VAR_9->dst_type,
       VAR_5, VAR_16, VAR_15, VAR_7->enc_key_size, VAR_18, VAR_17);
 }

 return 0;
}
