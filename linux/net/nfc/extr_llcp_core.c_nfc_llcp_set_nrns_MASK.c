
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct nfc_llcp_sock {int send_n; int recv_n; int recv_ack_n; } ;



__attribute__((used)) static void FUNC_0(struct nfc_llcp_sock *VAR_0, struct sk_buff *VAR_1)
{
 VAR_1->data[2] = (VAR_0->send_n << 4) | (VAR_0->recv_n);
 VAR_0->send_n = (VAR_0->send_n + 1) % 16;
 VAR_0->recv_ack_n = (VAR_0->recv_n - 1) % 16;
}
