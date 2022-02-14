
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_linfo {struct bpf_prog_linfo* jited_linfo_func_idx; struct bpf_prog_linfo* nr_jited_linfo_per_func; struct bpf_prog_linfo* raw_jited_linfo; struct bpf_prog_linfo* raw_linfo; } ;


 int FUNC_0 (struct bpf_prog_linfo*) ;

void FUNC_1(struct bpf_prog_linfo *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->raw_linfo);
 FUNC_0(VAR_0->raw_jited_linfo);
 FUNC_0(VAR_0->nr_jited_linfo_per_func);
 FUNC_0(VAR_0->jited_linfo_func_idx);
 FUNC_0(VAR_0);
}
