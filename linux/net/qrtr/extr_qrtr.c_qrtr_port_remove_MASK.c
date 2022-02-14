
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_qrtr {int sq_port; int sq_node; int sq_family; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int sq_port; int sq_node; } ;
struct qrtr_sock {int sk; TYPE_2__ us; } ;
struct TYPE_3__ {void* port; void* node; } ;
struct qrtr_ctrl_pkt {TYPE_1__ client; void* cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (struct qrtr_ctrl_pkt**) ;
 int FUNC_6 (int *,struct sk_buff*,int,TYPE_2__*,struct sockaddr_qrtr*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct sk_buff*,int *) ;

__attribute__((used)) static void FUNC_8(struct qrtr_sock *VAR_6)
{
 struct qrtr_ctrl_pkt *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9 = VAR_6->us.sq_port;
 struct sockaddr_qrtr VAR_10;

 VAR_10.sq_family = VAR_0;
 VAR_10.sq_node = VAR_1;
 VAR_10.sq_port = VAR_2;

 VAR_8 = FUNC_5(&VAR_7);
 if (VAR_8) {
  VAR_7->cmd = FUNC_1(VAR_3);
  VAR_7->client.node = FUNC_1(VAR_6->us.sq_node);
  VAR_7->client.port = FUNC_1(VAR_6->us.sq_port);

  FUNC_7(VAR_8, &VAR_6->sk);
  FUNC_6(((void*)0), VAR_8, VAR_3, &VAR_6->us,
       &VAR_10);
 }

 if (VAR_9 == VAR_2)
  VAR_9 = 0;

 FUNC_0(&VAR_6->sk);

 FUNC_3(&VAR_4);
 FUNC_2(&VAR_5, VAR_9);
 FUNC_4(&VAR_4);
}
