
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct nci_dev {int flags; int data_timer; } ;
struct nci_conn_info {void* data_exchange_cb_context; int (* data_exchange_cb ) (void*,struct sk_buff*,int) ;} ;
typedef int (* data_exchange_cb_t ) (void*,struct sk_buff*,int) ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct nci_conn_info* FUNC_3 (struct nci_dev*,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*) ;

void FUNC_6(struct nci_dev *VAR_2, struct sk_buff *VAR_3,
    __u8 VAR_4, int VAR_5)
{
 struct nci_conn_info *VAR_6;
 data_exchange_cb_t VAR_7;
 void *VAR_8;

 VAR_6 = FUNC_3(VAR_2, VAR_4);
 if (!VAR_6) {
  FUNC_2(VAR_3);
  goto exit;
 }

 VAR_7 = VAR_6->data_exchange_cb;
 VAR_8 = VAR_6->data_exchange_cb_context;

 FUNC_4("len %d, err %d\n", VAR_3 ? VAR_3->len : 0, VAR_5);


 FUNC_1(&VAR_2->data_timer);
 FUNC_0(VAR_1, &VAR_2->flags);

 if (VAR_7) {

  VAR_7(VAR_8, VAR_3, VAR_5);
 } else if (VAR_3) {
  FUNC_5("no rx callback, dropping rx data...\n");


  FUNC_2(VAR_3);
 }

exit:
 FUNC_0(VAR_0, &VAR_2->flags);
}
