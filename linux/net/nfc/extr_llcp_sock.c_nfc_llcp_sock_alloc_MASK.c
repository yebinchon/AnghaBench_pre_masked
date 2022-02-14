
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int state; } ;
struct sock {int sk_type; int sk_destruct; int sk_protocol; int sk_state; } ;
struct nfc_llcp_sock {int remote_ready; int accept_queue; int tx_pending_queue; int tx_queue; int reserved_ssap; scalar_t__ recv_ack_n; scalar_t__ recv_n; scalar_t__ send_ack_n; scalar_t__ send_n; int miux; scalar_t__ rw; int dsap; scalar_t__ ssap; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct nfc_llcp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct nfc_llcp_sock*) ;
 struct sock* FUNC_4 (int *,int ,int ,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct socket*,struct sock*) ;

struct sock *FUNC_7(struct socket *VAR_11, int VAR_12, gfp_t VAR_13, int VAR_14)
{
 struct sock *VAR_15;
 struct nfc_llcp_sock *VAR_16;

 VAR_15 = FUNC_4(&VAR_8, VAR_6, VAR_13, &VAR_10, VAR_14);
 if (!VAR_15)
  return ((void*)0);

 VAR_16 = FUNC_2(VAR_15);

 FUNC_6(VAR_11, VAR_15);
 VAR_15->sk_state = VAR_0;
 VAR_15->sk_protocol = VAR_5;
 VAR_15->sk_type = VAR_12;
 VAR_15->sk_destruct = VAR_9;

 VAR_16->ssap = 0;
 VAR_16->dsap = VAR_4;
 VAR_16->rw = VAR_2 + 1;
 VAR_16->miux = FUNC_1(VAR_1 + 1);
 VAR_16->send_n = VAR_16->send_ack_n = 0;
 VAR_16->recv_n = VAR_16->recv_ack_n = 0;
 VAR_16->remote_ready = 1;
 VAR_16->reserved_ssap = VAR_3;
 FUNC_3(VAR_16);
 FUNC_5(&VAR_16->tx_queue);
 FUNC_5(&VAR_16->tx_pending_queue);
 FUNC_0(&VAR_16->accept_queue);

 if (VAR_11 != ((void*)0))
  VAR_11->state = VAR_7;

 return VAR_15;
}
