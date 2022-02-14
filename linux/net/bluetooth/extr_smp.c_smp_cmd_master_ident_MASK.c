
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smp_ltk {int dummy; } ;
struct smp_cmd_master_ident {int rand; int ediv; } ;
struct smp_chan {int remote_key_dist; struct smp_ltk* ltk; int enc_key_size; int tk; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {struct hci_conn* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_dev {int dummy; } ;
struct hci_conn {scalar_t__ sec_level; int dst_type; int dst; struct hci_dev* hdev; } ;


 int FUNC_0 (char*,struct l2cap_conn*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct smp_chan*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct smp_ltk* FUNC_2 (struct hci_dev*,int *,int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct smp_chan*) ;

__attribute__((used)) static int FUNC_5(struct l2cap_conn *VAR_9, struct sk_buff *VAR_10)
{
 struct smp_cmd_master_ident *VAR_11 = (void *) VAR_10->data;
 struct l2cap_chan *VAR_12 = VAR_9->smp;
 struct smp_chan *VAR_13 = VAR_12->data;
 struct hci_dev *VAR_14 = VAR_9->hcon->hdev;
 struct hci_conn *VAR_15 = VAR_9->hcon;
 struct smp_ltk *VAR_16;
 u8 VAR_17;

 FUNC_0("conn %p", VAR_9);

 if (VAR_10->len < sizeof(*VAR_11))
  return VAR_7;


 VAR_13->remote_key_dist &= ~VAR_4;

 if (VAR_13->remote_key_dist & VAR_5)
  FUNC_1(VAR_13, VAR_2);
 else if (VAR_13->remote_key_dist & VAR_6)
  FUNC_1(VAR_13, VAR_3);

 FUNC_3(VAR_10, sizeof(*VAR_11));

 VAR_17 = (VAR_15->sec_level == VAR_0);
 VAR_16 = FUNC_2(VAR_14, &VAR_15->dst, VAR_15->dst_type, VAR_8,
     VAR_17, VAR_13->tk, VAR_13->enc_key_size,
     VAR_11->ediv, VAR_11->rand);
 VAR_13->ltk = VAR_16;
 if (!(VAR_13->remote_key_dist & VAR_1))
  FUNC_4(VAR_13);

 return 0;
}
