
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_bpf_info* matchinfo; } ;
struct xt_bpf_info {int filter; int bpf_program_num_elem; int bpf_program; } ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(const struct xt_mtchk_param *VAR_0)
{
 struct xt_bpf_info *VAR_1 = VAR_0->matchinfo;

 return FUNC_0(VAR_1->bpf_program,
           VAR_1->bpf_program_num_elem,
           &VAR_1->filter);
}
