
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int dccph_doff; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct sock*) ;
 int FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 FUNC_0(VAR_1, FUNC_2(VAR_1)->dccph_doff * 4);
 FUNC_1(&VAR_0->sk_receive_queue, VAR_1);
 FUNC_3(VAR_1, VAR_0);
 VAR_0->sk_data_ready(VAR_0);
}
