
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwtunnel_state {int dummy; } ;
struct bpf_lwt {int xmit; int out; int in; } ;


 struct bpf_lwt* FUNC_0 (struct lwtunnel_state*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct lwtunnel_state *VAR_0)
{
 struct bpf_lwt *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->in);
 FUNC_1(&VAR_1->out);
 FUNC_1(&VAR_1->xmit);
}
