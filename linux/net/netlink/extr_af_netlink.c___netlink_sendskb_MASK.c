
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {int len; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2 = VAR_1->len;

 FUNC_0(FUNC_2(VAR_0), VAR_1);

 FUNC_1(&VAR_0->sk_receive_queue, VAR_1);
 VAR_0->sk_data_ready(VAR_0);
 return VAR_2;
}
