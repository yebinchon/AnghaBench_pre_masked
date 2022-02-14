
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct nci_rf_deactivate_ntf {int type; int reason; } ;
struct nci_dev {int state; int flags; int * rx_data_reassembly; int tx_q; struct nci_conn_info* rf_conn_info; } ;
struct nci_conn_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (struct nci_dev*,int *,int ,int ) ;
 int FUNC_4 (struct nci_dev*,int ) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct nci_dev *VAR_7,
      struct sk_buff *VAR_8)
{
 struct nci_conn_info *VAR_9;
 struct nci_rf_deactivate_ntf *VAR_10 = (void *) VAR_8->data;

 FUNC_5("entry, type 0x%x, reason 0x%x\n", VAR_10->type, VAR_10->reason);

 VAR_9 = VAR_7->rf_conn_info;
 if (!VAR_9)
  return;


 FUNC_6(&VAR_7->tx_q);


 if (VAR_7->rx_data_reassembly) {
  FUNC_1(VAR_7->rx_data_reassembly);
  VAR_7->rx_data_reassembly = ((void*)0);
 }


 if (FUNC_7(VAR_1, &VAR_7->flags))
  FUNC_3(VAR_7, ((void*)0), VAR_4,
        -VAR_0);

 switch (VAR_10->type) {
 case 130:
  FUNC_2(VAR_7);
  FUNC_0(&VAR_7->state, VAR_3);
  break;
 case 128:
 case 129:
  FUNC_0(&VAR_7->state, VAR_6);
  break;
 case 131:
  FUNC_2(VAR_7);
  FUNC_0(&VAR_7->state, VAR_2);
  break;
 }

 FUNC_4(VAR_7, VAR_5);
}
