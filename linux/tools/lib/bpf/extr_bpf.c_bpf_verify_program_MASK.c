
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union bpf_attr {int prog_type; size_t log_size; int log_level; void* prog_flags; void* kern_version; void* log_buf; void* license; void* insns; void* insn_cnt; } ;
typedef char bpf_insn ;
typedef enum bpf_prog_type { ____Placeholder_bpf_prog_type } bpf_prog_type ;
typedef int attr ;
typedef void* __u32 ;


 int FUNC_0 (union bpf_attr*,int ,int) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (union bpf_attr*,int) ;

int FUNC_3(enum bpf_prog_type VAR_0, const struct bpf_insn *VAR_1,
         size_t VAR_2, __u32 VAR_3, const char *VAR_4,
         __u32 VAR_5, char *VAR_6, size_t VAR_7,
         int VAR_8)
{
 union bpf_attr VAR_9;

 FUNC_0(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.prog_type = VAR_0;
 VAR_9.insn_cnt = (__u32)VAR_2;
 VAR_9.insns = FUNC_1(VAR_1);
 VAR_9.license = FUNC_1(VAR_4);
 VAR_9.log_buf = FUNC_1(VAR_6);
 VAR_9.log_size = VAR_7;
 VAR_9.log_level = VAR_8;
 VAR_6[0] = 0;
 VAR_9.kern_version = VAR_5;
 VAR_9.prog_flags = VAR_3;

 return FUNC_2(&VAR_9, sizeof(VAR_9));
}
