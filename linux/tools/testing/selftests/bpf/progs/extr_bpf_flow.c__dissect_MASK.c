
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_flow_keys {int n_proto; } ;
struct __sk_buff {struct bpf_flow_keys* flow_keys; } ;


 int FUNC_0 (struct __sk_buff*,int ) ;

int FUNC_1(struct __sk_buff *VAR_0)
{
 struct bpf_flow_keys *VAR_1 = VAR_0->flow_keys;

 return FUNC_0(VAR_0, VAR_1->n_proto);
}
