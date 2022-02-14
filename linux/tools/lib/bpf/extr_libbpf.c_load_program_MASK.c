
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_program {scalar_t__ type; int prog_flags; scalar_t__ log_level; int line_info_cnt; int line_info_rec_size; int line_info; int func_info_cnt; int func_info_rec_size; int func_info; TYPE_2__* obj; int prog_ifindex; int name; TYPE_1__* caps; scalar_t__ expected_attach_type; } ;
struct bpf_load_program_attr {scalar_t__ prog_type; int insns_cnt; char* license; int prog_btf_fd; scalar_t__ expected_attach_type; scalar_t__ log_level; int prog_flags; int line_info_cnt; int line_info_rec_size; int line_info; int func_info_cnt; int func_info_rec_size; int func_info; int prog_ifindex; int kern_version; struct bpf_insn* insns; int name; } ;
struct bpf_insn {int dummy; } ;
typedef int errmsg ;
typedef int __u32 ;
struct TYPE_4__ {scalar_t__ btf_ext; } ;
struct TYPE_3__ {scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bpf_load_program_attr*,char*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__,char*,int) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (struct bpf_load_program_attr*,int ,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static int
FUNC_9(struct bpf_program *VAR_12, struct bpf_insn *VAR_13, int VAR_14,
      char *VAR_15, __u32 VAR_16, int *VAR_17)
{
 struct bpf_load_program_attr VAR_18;
 char *VAR_19, VAR_20[VAR_10];
 int VAR_21 = VAR_0;
 char *VAR_22;
 int VAR_23, VAR_24;

 if (!VAR_13 || !VAR_14)
  return -VAR_3;

 FUNC_6(&VAR_18, 0, sizeof(struct bpf_load_program_attr));
 VAR_18.prog_type = VAR_12->type;
 VAR_18.expected_attach_type = VAR_12->expected_attach_type;
 if (VAR_12->caps->name)
  VAR_18.name = VAR_12->name;
 VAR_18.insns = VAR_13;
 VAR_18.insns_cnt = VAR_14;
 VAR_18.license = VAR_15;
 VAR_18.kern_version = VAR_16;
 VAR_18.prog_ifindex = VAR_12->prog_ifindex;

 if (VAR_12->obj->btf_ext)
  VAR_23 = FUNC_1(VAR_12->obj);
 else
  VAR_23 = -1;
 VAR_18.prog_btf_fd = VAR_23 >= 0 ? VAR_23 : 0;
 VAR_18.func_info = VAR_12->func_info;
 VAR_18.func_info_rec_size = VAR_12->func_info_rec_size;
 VAR_18.func_info_cnt = VAR_12->func_info_cnt;
 VAR_18.line_info = VAR_12->line_info;
 VAR_18.line_info_rec_size = VAR_12->line_info_rec_size;
 VAR_18.line_info_cnt = VAR_12->line_info_cnt;
 VAR_18.log_level = VAR_12->log_level;
 VAR_18.prog_flags = VAR_12->prog_flags;

retry_load:
 VAR_22 = FUNC_5(VAR_21);
 if (!VAR_22)
  FUNC_8("Alloc log buffer for bpf loader error, continue without log\n");

 VAR_24 = FUNC_0(&VAR_18, VAR_22, VAR_21);

 if (VAR_24 >= 0) {
  if (VAR_18.log_level)
   FUNC_7("verifier log:\n%s", VAR_22);
  *VAR_17 = VAR_24;
  VAR_24 = 0;
  goto out;
 }

 if (VAR_11 == VAR_4) {
  VAR_21 <<= 1;
  FUNC_3(VAR_22);
  goto retry_load;
 }
 VAR_24 = -VAR_6;
 VAR_19 = FUNC_4(VAR_11, VAR_20, sizeof(VAR_20));
 FUNC_8("load bpf program failed: %s\n", VAR_19);

 if (VAR_22 && VAR_22[0] != '\0') {
  VAR_24 = -VAR_9;
  FUNC_8("-- BEGIN DUMP LOG ---\n");
  FUNC_8("\n%s\n", VAR_22);
  FUNC_8("-- END LOG --\n");
 } else if (VAR_18.insns_cnt >= VAR_1) {
  FUNC_8("Program too large (%zu insns), at most %d insns\n",
      VAR_18.insns_cnt, VAR_1);
  VAR_24 = -VAR_7;
 } else {

  if (VAR_18.prog_type != VAR_2) {
   int VAR_25;

   VAR_18.prog_type = VAR_2;
   VAR_18.expected_attach_type = 0;
   VAR_25 = FUNC_0(&VAR_18, ((void*)0), 0);
   if (VAR_25 >= 0) {
    FUNC_2(VAR_25);
    VAR_24 = -VAR_8;
    goto out;
   }
  }

  if (VAR_22)
   VAR_24 = -VAR_5;
 }

out:
 FUNC_3(VAR_22);
 return VAR_24;
}
