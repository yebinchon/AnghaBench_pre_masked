
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; int* fds; } ;
struct bpf_program {int (* preprocessor ) (struct bpf_program*,int,int ,scalar_t__,struct bpf_prog_prep_result*) ;scalar_t__ insns_cnt; int insns; int section_name; TYPE_1__ instances; } ;
struct bpf_prog_prep_result {int* pfd; scalar_t__ new_insn_cnt; int new_insn_ptr; } ;
typedef int result ;
typedef int (* bpf_program_prep_t ) (struct bpf_program*,int,int ,scalar_t__,struct bpf_prog_prep_result*) ;
typedef int __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bpf_program*,int ,scalar_t__,char*,int ,int*) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (struct bpf_prog_prep_result*,int ,int) ;
 int FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct bpf_program *VAR_2,
    char *VAR_3, __u32 VAR_4)
{
 int VAR_5 = 0, VAR_6, VAR_7;

 if (VAR_2->instances.nr < 0 || !VAR_2->instances.fds) {
  if (VAR_2->preprocessor) {
   FUNC_4("Internal error: can't load program '%s'\n",
       VAR_2->section_name);
   return -VAR_1;
  }

  VAR_2->instances.fds = FUNC_1(sizeof(int));
  if (!VAR_2->instances.fds) {
   FUNC_4("Not enough memory for BPF fds\n");
   return -VAR_0;
  }
  VAR_2->instances.nr = 1;
  VAR_2->instances.fds[0] = -1;
 }

 if (!VAR_2->preprocessor) {
  if (VAR_2->instances.nr != 1) {
   FUNC_4("Program '%s' is inconsistent: nr(%d) != 1\n",
       VAR_2->section_name, VAR_2->instances.nr);
  }
  VAR_5 = FUNC_0(VAR_2, VAR_2->insns, VAR_2->insns_cnt,
       VAR_3, VAR_4, &VAR_6);
  if (!VAR_5)
   VAR_2->instances.fds[0] = VAR_6;
  goto out;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->instances.nr; VAR_7++) {
  struct bpf_prog_prep_result VAR_8;
  bpf_program_prep_t VAR_9 = VAR_2->preprocessor;

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_5 = VAR_9(VAR_2, VAR_7, VAR_2->insns,
       VAR_2->insns_cnt, &VAR_8);
  if (VAR_5) {
   FUNC_4("Preprocessing the %dth instance of program '%s' failed\n",
       VAR_7, VAR_2->section_name);
   goto out;
  }

  if (!VAR_8.new_insn_ptr || !VAR_8.new_insn_cnt) {
   FUNC_3("Skip loading the %dth instance of program '%s'\n",
     VAR_7, VAR_2->section_name);
   VAR_2->instances.fds[VAR_7] = -1;
   if (VAR_8.pfd)
    *VAR_8.pfd = -1;
   continue;
  }

  VAR_5 = FUNC_0(VAR_2, VAR_8.new_insn_ptr,
       VAR_8.new_insn_cnt,
       VAR_3, VAR_4, &VAR_6);

  if (VAR_5) {
   FUNC_4("Loading the %dth instance of program '%s' failed\n",
     VAR_7, VAR_2->section_name);
   goto out;
  }

  if (VAR_8.pfd)
   *VAR_8.pfd = VAR_6;
  VAR_2->instances.fds[VAR_7] = VAR_6;
 }
out:
 if (VAR_5)
  FUNC_4("failed to load program '%s'\n",
      VAR_2->section_name);
 FUNC_5(&VAR_2->insns);
 VAR_2->insns_cnt = 0;
 return VAR_5;
}
