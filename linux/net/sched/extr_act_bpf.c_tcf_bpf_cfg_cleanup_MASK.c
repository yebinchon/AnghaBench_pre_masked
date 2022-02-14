
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_bpf_cfg {int bpf_name; int bpf_ops; scalar_t__ is_ebpf; struct bpf_prog* filter; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog*) ;
 int FUNC_1 (struct bpf_prog*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct tcf_bpf_cfg *VAR_0)
{
 struct bpf_prog *VAR_1 = VAR_0->filter;

 if (VAR_1) {
  if (VAR_0->is_ebpf)
   FUNC_1(VAR_1);
  else
   FUNC_0(VAR_1);
 }

 FUNC_2(VAR_0->bpf_ops);
 FUNC_2(VAR_0->bpf_name);
}
