
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nfc_hci_dev {int dummy; } ;
struct hci_create_pipe_resp {void* pipe; } ;
struct hci_create_pipe_params {void* dest_gate; void* dest_host; int src_gate; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nfc_hci_dev*,int ,int ,void**,int,struct sk_buff**) ;
 int FUNC_2 (char*,void*) ;

__attribute__((used)) static u8 FUNC_3(struct nfc_hci_dev *VAR_4, u8 VAR_5,
         u8 VAR_6, int *VAR_7)
{
 struct sk_buff *VAR_8;
 struct hci_create_pipe_params VAR_9;
 struct hci_create_pipe_resp *VAR_10;
 u8 VAR_11;

 FUNC_2("gate=%d\n", VAR_6);

 VAR_9.src_gate = VAR_0;
 VAR_9.dest_host = VAR_5;
 VAR_9.dest_gate = VAR_6;

 *VAR_7 = FUNC_1(VAR_4, VAR_1,
          VAR_2,
          (u8 *) &VAR_9, sizeof(VAR_9), &VAR_8);
 if (*VAR_7 < 0)
  return VAR_3;

 VAR_10 = (struct hci_create_pipe_resp *)VAR_8->data;
 VAR_11 = VAR_10->pipe;
 FUNC_0(VAR_8);

 FUNC_2("pipe created=%d\n", VAR_11);

 return VAR_11;
}
