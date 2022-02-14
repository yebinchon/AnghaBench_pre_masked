
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smp_cmd_ident_addr_info {scalar_t__ addr_type; int bdaddr; } ;
struct smp_chan {int remote_key_dist; scalar_t__ id_addr_type; int irk; int id_addr; int remote_irk; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct l2cap_conn {struct hci_conn* hcon; struct l2cap_chan* smp; } ;
struct l2cap_chan {struct smp_chan* data; } ;
struct hci_conn {scalar_t__ dst_type; int hdev; int dst; } ;
typedef int bdaddr_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct smp_chan*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int *,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct smp_chan*) ;

__attribute__((used)) static int FUNC_10(struct l2cap_conn *VAR_6,
       struct sk_buff *VAR_7)
{
 struct smp_cmd_ident_addr_info *VAR_8 = (void *) VAR_7->data;
 struct l2cap_chan *VAR_9 = VAR_6->smp;
 struct smp_chan *VAR_10 = VAR_9->data;
 struct hci_conn *VAR_11 = VAR_6->hcon;
 bdaddr_t VAR_12;

 FUNC_0("");

 if (VAR_7->len < sizeof(*VAR_8))
  return VAR_5;


 VAR_10->remote_key_dist &= ~VAR_3;

 if (VAR_10->remote_key_dist & VAR_4)
  FUNC_1(VAR_10, VAR_2);

 FUNC_8(VAR_7, sizeof(*VAR_8));
 if (!FUNC_2(&VAR_8->bdaddr, VAR_0) ||
     !FUNC_7(&VAR_8->bdaddr, VAR_8->addr_type)) {
  FUNC_4(VAR_11->hdev, "ignoring IRK with no identity address");
  goto distribute;
 }






 if (FUNC_7(&VAR_11->dst, VAR_11->dst_type) &&
     (FUNC_2(&VAR_8->bdaddr, &VAR_11->dst) ||
      VAR_8->addr_type != VAR_11->dst_type)) {
  FUNC_4(VAR_11->hdev,
      "ignoring IRK with invalid identity address");
  goto distribute;
 }

 FUNC_3(&VAR_10->id_addr, &VAR_8->bdaddr);
 VAR_10->id_addr_type = VAR_8->addr_type;

 if (FUNC_6(&VAR_11->dst, VAR_11->dst_type))
  FUNC_3(&VAR_12, &VAR_11->dst);
 else
  FUNC_3(&VAR_12, VAR_0);

 VAR_10->remote_irk = FUNC_5(VAR_6->hcon->hdev, &VAR_10->id_addr,
          VAR_10->id_addr_type, VAR_10->irk, &VAR_12);

distribute:
 if (!(VAR_10->remote_key_dist & VAR_1))
  FUNC_9(VAR_10);

 return 0;
}
