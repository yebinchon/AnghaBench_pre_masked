
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {scalar_t__ prog_flags; scalar_t__ kern_version; scalar_t__ log_level; scalar_t__ log_size; scalar_t__ log_buf; scalar_t__ license; scalar_t__ insns; scalar_t__ insn_cnt; int prog_type; } ;
typedef int attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,union bpf_attr*,int) ;

int FUNC_1(void)
{
 union bpf_attr VAR_3;


 VAR_3.prog_type = VAR_1;
 VAR_3.insn_cnt = 0;
 VAR_3.insns = 0;
 VAR_3.license = 0;
 VAR_3.log_buf = 0;
 VAR_3.log_size = 0;
 VAR_3.log_level = 0;
 VAR_3.kern_version = 0;
 VAR_3.prog_flags = 0;





 return FUNC_0(VAR_2, VAR_0, &VAR_3, sizeof(VAR_3));
}
