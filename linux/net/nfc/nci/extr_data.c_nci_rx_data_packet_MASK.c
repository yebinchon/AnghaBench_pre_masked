
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int * data; } ;
struct nci_dev {scalar_t__ target_active_prot; } ;
struct nci_conn_info {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct nci_dev*,struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 struct nci_conn_info* FUNC_2 (struct nci_dev*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int) ;

void FUNC_9(struct nci_dev *VAR_5, struct sk_buff *VAR_6)
{
 __u8 VAR_7 = FUNC_3(VAR_6->data);
 __u8 VAR_8 = 0;
 __u8 VAR_9 = FUNC_1(VAR_6->data);
 struct nci_conn_info *VAR_10;

 FUNC_6("len %d\n", VAR_6->len);

 FUNC_6("NCI RX: MT=data, PBF=%d, conn_id=%d, plen=%d\n",
   FUNC_3(VAR_6->data),
   FUNC_1(VAR_6->data),
   FUNC_4(VAR_6->data));

 VAR_10 = FUNC_2(VAR_5, FUNC_1(VAR_6->data));
 if (!VAR_10)
  return;


 FUNC_7(VAR_6, VAR_0);

 if (VAR_5->target_active_prot == VAR_4 ||
     VAR_5->target_active_prot == VAR_3 ||
     VAR_5->target_active_prot == VAR_1 ||
     VAR_5->target_active_prot == VAR_2) {

  FUNC_6("frame I/F => remove the status byte\n");
  VAR_8 = VAR_6->data[VAR_6->len - 1];
  FUNC_8(VAR_6, (VAR_6->len - 1));
 }

 FUNC_0(VAR_5, VAR_6, VAR_7, VAR_9, FUNC_5(VAR_8));
}
