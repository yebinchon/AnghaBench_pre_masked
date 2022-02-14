
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int * data; } ;
struct nfc_llcp_sock {int recv_n; struct nfc_llcp_local* local; } ;
struct nfc_llcp_local {int tx_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (struct nfc_llcp_sock*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;

int FUNC_4(struct nfc_llcp_sock *VAR_4)
{
 struct sk_buff *VAR_5;
 struct nfc_llcp_local *VAR_6;

 FUNC_1("Send rr nr %d\n", VAR_4->recv_n);

 VAR_6 = VAR_4->local;
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 FUNC_2(VAR_5, VAR_3);

 VAR_5->data[2] = VAR_4->recv_n;

 FUNC_3(&VAR_6->tx_queue, VAR_5);

 return 0;
}
