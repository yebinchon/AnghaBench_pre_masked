
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lwtunnel_state {int dummy; } ;
struct bpf_lwt {int xmit; int out; int in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int *) ;
 struct bpf_lwt* FUNC_1 (struct lwtunnel_state*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_4, struct lwtunnel_state *VAR_5)
{
 struct bpf_lwt *VAR_6 = FUNC_1(VAR_5);

 if (FUNC_0(VAR_4, VAR_1, &VAR_6->in) < 0 ||
     FUNC_0(VAR_4, VAR_2, &VAR_6->out) < 0 ||
     FUNC_0(VAR_4, VAR_3, &VAR_6->xmit) < 0)
  return -VAR_0;

 return 0;
}
