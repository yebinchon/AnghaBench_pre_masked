
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct nci_hcp_message {int header; } ;
struct nci_dev {TYPE_1__* hci_dev; } ;
struct nci_data {size_t pipe; size_t* data; size_t data_len; int cmd; int conn_id; } ;
struct nci_conn_info {TYPE_2__* rx_skb; int conn_id; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct TYPE_3__ {size_t* gate2pipe; struct nci_conn_info* conn_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (size_t*) ;
 size_t* FUNC_3 (int,int ) ;
 int FUNC_4 (size_t*,size_t const*,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_10 ;
 int FUNC_7 (struct nci_dev*,int ,unsigned long,int ) ;
 int FUNC_8 (char*,size_t,size_t) ;
 int FUNC_9 (TYPE_2__*,int ) ;

int FUNC_10(struct nci_dev *VAR_11, u8 VAR_12, u8 VAR_13,
        const u8 *VAR_14, size_t VAR_15)
{
 struct nci_hcp_message *VAR_16;
 struct nci_conn_info *VAR_17;
 struct nci_data VAR_18;
 int VAR_19;
 u8 *VAR_20;
 u8 VAR_21 = VAR_11->hci_dev->gate2pipe[VAR_12];

 FUNC_8("idx=%d to gate %d\n", VAR_13, VAR_12);

 if (VAR_21 == VAR_8)
  return -VAR_0;

 VAR_17 = VAR_11->hci_dev->conn_info;
 if (!VAR_17)
  return -VAR_2;

 VAR_20 = FUNC_3(1 + VAR_15, VAR_3);
 if (!VAR_20)
  return -VAR_1;

 *VAR_20 = VAR_13;
 FUNC_4(VAR_20 + 1, VAR_14, VAR_15);

 VAR_18.conn_id = VAR_17->conn_id;
 VAR_18.pipe = VAR_21;
 VAR_18.cmd = FUNC_0(VAR_6,
           VAR_5);
 VAR_18.data = VAR_20;
 VAR_18.data_len = VAR_15 + 1;

 VAR_19 = FUNC_7(VAR_11, VAR_10,
   (unsigned long)&VAR_18,
   FUNC_5(VAR_4));
 if (VAR_19 == VAR_9) {
  VAR_16 = (struct nci_hcp_message *)VAR_17->rx_skb->data;
  VAR_19 = FUNC_6(
   FUNC_1(VAR_16->header));
  FUNC_9(VAR_17->rx_skb, VAR_7);
 }

 FUNC_2(VAR_20);
 return VAR_19;
}
