
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_hook_state {scalar_t__ sk; scalar_t__ out; scalar_t__ in; } ;
struct nf_queue_entry {int skb; struct nf_hook_state state; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct nf_queue_entry *VAR_0)
{
 struct nf_hook_state *VAR_1 = &VAR_0->state;


 if (VAR_1->in)
  FUNC_0(VAR_1->in);
 if (VAR_1->out)
  FUNC_0(VAR_1->out);
 if (VAR_1->sk)
  FUNC_2(VAR_1->sk);

 FUNC_1(VAR_0->skb);
}
