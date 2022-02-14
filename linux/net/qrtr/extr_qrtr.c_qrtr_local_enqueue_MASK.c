
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_qrtr {int sq_port; int sq_node; } ;
struct sk_buff {scalar_t__ cb; int * sk; } ;
struct qrtr_sock {int sk; } ;
struct qrtr_node {int dummy; } ;
struct qrtr_cb {int src_port; int src_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 struct qrtr_sock* FUNC_1 (int ) ;
 int FUNC_2 (struct qrtr_sock*) ;
 scalar_t__ FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct qrtr_node *VAR_2, struct sk_buff *VAR_3,
         int VAR_4, struct sockaddr_qrtr *VAR_5,
         struct sockaddr_qrtr *VAR_6)
{
 struct qrtr_sock *VAR_7;
 struct qrtr_cb *VAR_8;

 VAR_7 = FUNC_1(VAR_6->sq_port);
 if (!VAR_7 || &VAR_7->sk == VAR_3->sk) {
  FUNC_0(VAR_3);
  return -VAR_0;
 }

 VAR_8 = (struct qrtr_cb *)VAR_3->cb;
 VAR_8->src_node = VAR_5->sq_node;
 VAR_8->src_port = VAR_5->sq_port;

 if (FUNC_3(&VAR_7->sk, VAR_3)) {
  FUNC_2(VAR_7);
  FUNC_0(VAR_3);
  return -VAR_1;
 }

 FUNC_2(VAR_7);

 return 0;
}
