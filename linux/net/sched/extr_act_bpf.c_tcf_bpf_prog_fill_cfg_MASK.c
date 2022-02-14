
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_bpf_cfg {int bpf_name; int bpf_ops; int filter; int is_ebpf; } ;
struct tcf_bpf {int bpf_name; int bpf_ops; int filter; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct tcf_bpf const*) ;

__attribute__((used)) static void FUNC_2(const struct tcf_bpf *VAR_0,
      struct tcf_bpf_cfg *VAR_1)
{
 VAR_1->is_ebpf = FUNC_1(VAR_0);



 VAR_1->filter = FUNC_0(VAR_0->filter, 1);

 VAR_1->bpf_ops = VAR_0->bpf_ops;
 VAR_1->bpf_name = VAR_0->bpf_name;
}
