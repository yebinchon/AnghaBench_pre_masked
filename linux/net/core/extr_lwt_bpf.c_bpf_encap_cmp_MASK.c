
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwtunnel_state {int dummy; } ;
struct bpf_lwt {int xmit; int out; int in; } ;


 struct bpf_lwt* FUNC_0 (struct lwtunnel_state*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct lwtunnel_state *VAR_0, struct lwtunnel_state *VAR_1)
{
 struct bpf_lwt *VAR_2 = FUNC_0(VAR_0);
 struct bpf_lwt *VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(&VAR_2->in, &VAR_3->in) ||
        FUNC_1(&VAR_2->out, &VAR_3->out) ||
        FUNC_1(&VAR_2->xmit, &VAR_3->xmit);
}
