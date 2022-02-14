
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {int pipe_handle; int message_id; scalar_t__ data0; scalar_t__ utid; } ;
struct pep_sock {int tx_credits; int tx_fc; int pipe_handle; scalar_t__ aligned; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct pep_sock* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct sock*,struct sk_buff*,int *) ;
 struct pnpipehdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_3, struct sk_buff *VAR_4)
{
 struct pep_sock *VAR_5 = FUNC_3(VAR_3);
 struct pnpipehdr *VAR_6;
 int VAR_7;

 if (FUNC_4(VAR_5->tx_fc) &&
     !FUNC_0(&VAR_5->tx_credits, -1, 0)) {
  FUNC_2(VAR_4);
  return -VAR_0;
 }

 FUNC_7(VAR_4, 3 + VAR_5->aligned);
 FUNC_8(VAR_4);
 VAR_6 = FUNC_6(VAR_4);
 VAR_6->utid = 0;
 if (VAR_5->aligned) {
  VAR_6->message_id = VAR_1;
  VAR_6->data0 = 0;
 } else
  VAR_6->message_id = VAR_2;
 VAR_6->pipe_handle = VAR_5->pipe_handle;
 VAR_7 = FUNC_5(VAR_3, VAR_4, ((void*)0));

 if (VAR_7 && FUNC_4(VAR_5->tx_fc))
  FUNC_1(&VAR_5->tx_credits);
 return VAR_7;

}
