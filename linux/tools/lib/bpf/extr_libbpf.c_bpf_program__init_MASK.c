
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr; int * fds; } ;
struct bpf_program {size_t insns_cnt; int idx; int type; TYPE_1__ instances; int insns; int pin_name; int section_name; } ;
struct bpf_insn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bpf_program*) ;
 int FUNC_1 (struct bpf_program*) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int ,void*,size_t) ;
 int FUNC_4 (struct bpf_program*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int
FUNC_7(void *VAR_3, size_t VAR_4, char *VAR_5, int VAR_6,
    struct bpf_program *VAR_7)
{
 const size_t VAR_8 = sizeof(struct bpf_insn);

 if (VAR_4 == 0 || VAR_4 % VAR_8) {
  FUNC_5("corrupted section '%s', size: %zu\n",
      VAR_5, VAR_4);
  return -VAR_1;
 }

 FUNC_4(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->section_name = FUNC_6(VAR_5);
 if (!VAR_7->section_name) {
  FUNC_5("failed to alloc name for prog under section(%d) %s\n",
      VAR_6, VAR_5);
  goto errout;
 }

 VAR_7->pin_name = FUNC_0(VAR_7);
 if (!VAR_7->pin_name) {
  FUNC_5("failed to alloc pin name for prog under section(%d) %s\n",
      VAR_6, VAR_5);
  goto errout;
 }

 VAR_7->insns = FUNC_2(VAR_4);
 if (!VAR_7->insns) {
  FUNC_5("failed to alloc insns for prog under section %s\n",
      VAR_5);
  goto errout;
 }
 VAR_7->insns_cnt = VAR_4 / VAR_8;
 FUNC_3(VAR_7->insns, VAR_3, VAR_4);
 VAR_7->idx = VAR_6;
 VAR_7->instances.fds = ((void*)0);
 VAR_7->instances.nr = -1;
 VAR_7->type = VAR_0;

 return 0;
errout:
 FUNC_1(VAR_7);
 return -VAR_2;
}
