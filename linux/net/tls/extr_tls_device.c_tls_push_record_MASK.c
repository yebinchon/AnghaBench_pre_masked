
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_record_info {int num_frags; int * frags; int list; scalar_t__ len; scalar_t__ end_seq; } ;
struct tls_prot_info {int dummy; } ;
struct tls_offload_context_tx {int * sg_tx_data; int * open_record; int records_list; } ;
struct tls_context {int tx; int flags; struct tls_prot_info prot_info; } ;
struct tcp_sock {scalar_t__ write_seq; } ;
struct sock {int dummy; } ;
typedef int skb_frag_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct tcp_sock* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct sock*,struct tls_prot_info*,int *) ;
 int FUNC_12 (struct sock*,struct tls_context*,scalar_t__) ;
 int FUNC_13 (struct sock*,struct tls_context*,int *,int ,int) ;

__attribute__((used)) static int FUNC_14(struct sock *VAR_1,
      struct tls_context *VAR_2,
      struct tls_offload_context_tx *VAR_3,
      struct tls_record_info *VAR_4,
      int VAR_5)
{
 struct tls_prot_info *VAR_6 = &VAR_2->prot_info;
 struct tcp_sock *VAR_7 = FUNC_9(VAR_1);
 skb_frag_t *VAR_8;
 int VAR_9;

 VAR_4->end_seq = VAR_7->write_seq + VAR_4->len;
 FUNC_1(&VAR_4->list, &VAR_3->records_list);
 VAR_3->open_record = ((void*)0);

 if (FUNC_10(VAR_0, &VAR_2->flags))
  FUNC_12(VAR_1, VAR_2, VAR_7->write_seq);

 FUNC_11(VAR_1, VAR_6, &VAR_2->tx);

 for (VAR_9 = 0; VAR_9 < VAR_4->num_frags; VAR_9++) {
  VAR_8 = &VAR_4->frags[VAR_9];
  FUNC_4(&VAR_3->sg_tx_data[VAR_9]);
  FUNC_3(&VAR_3->sg_tx_data[VAR_9], FUNC_7(VAR_8),
       FUNC_8(VAR_8), FUNC_6(VAR_8));
  FUNC_5(VAR_1, FUNC_8(VAR_8));
  FUNC_0(FUNC_7(VAR_8));
 }
 FUNC_2(&VAR_3->sg_tx_data[VAR_4->num_frags - 1]);


 return FUNC_13(VAR_1, VAR_2, VAR_3->sg_tx_data, 0, VAR_5);
}
