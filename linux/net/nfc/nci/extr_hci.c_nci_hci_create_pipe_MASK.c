
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct sk_buff {scalar_t__ data; } ;
struct nci_hci_create_pipe_resp {void* pipe; } ;
struct nci_hci_create_pipe_params {void* dest_gate; void* dest_host; int src_gate; } ;
struct nci_dev {int dummy; } ;
typedef int params ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct nci_dev*,int ,int ,void**,int,struct sk_buff**) ;
 int FUNC_2 (char*,void*) ;

__attribute__((used)) static u8 FUNC_3(struct nci_dev *VAR_3, u8 VAR_4,
         u8 VAR_5, int *VAR_6)
{
 u8 VAR_7;
 struct sk_buff *VAR_8;
 struct nci_hci_create_pipe_params VAR_9;
 struct nci_hci_create_pipe_resp *VAR_10;

 FUNC_2("gate=%d\n", VAR_5);

 VAR_9.src_gate = VAR_0;
 VAR_9.dest_host = VAR_4;
 VAR_9.dest_gate = VAR_5;

 *VAR_6 = FUNC_1(VAR_3, VAR_0,
       VAR_1,
       (u8 *)&VAR_9, sizeof(VAR_9), &VAR_8);
 if (*VAR_6 < 0)
  return VAR_2;

 VAR_10 = (struct nci_hci_create_pipe_resp *)VAR_8->data;
 VAR_7 = VAR_10->pipe;
 FUNC_0(VAR_8);

 FUNC_2("pipe created=%d\n", VAR_7);

 return VAR_7;
}
