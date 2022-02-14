
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_program {int nr_reloc; TYPE_2__* reloc_desc; int section_name; scalar_t__ insns_cnt; struct bpf_insn* insns; } ;
struct bpf_object {TYPE_1__* maps; scalar_t__ btf_ext; } ;
struct bpf_insn {int imm; int src_reg; } ;
struct TYPE_5__ {scalar_t__ type; int insn_idx; int map_idx; } ;
struct TYPE_4__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct bpf_program*,struct bpf_object*,TYPE_2__*) ;
 int FUNC_1 (struct bpf_program*,struct bpf_object*,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_2__**) ;

__attribute__((used)) static int
FUNC_4(struct bpf_program *VAR_6, struct bpf_object *VAR_7)
{
 int VAR_8, VAR_9;

 if (!VAR_6)
  return 0;

 if (VAR_7->btf_ext) {
  VAR_9 = FUNC_1(VAR_6, VAR_7,
      VAR_6->section_name, 0);
  if (VAR_9)
   return VAR_9;
 }

 if (!VAR_6->reloc_desc)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_6->nr_reloc; VAR_8++) {
  if (VAR_6->reloc_desc[VAR_8].type == VAR_5 ||
      VAR_6->reloc_desc[VAR_8].type == VAR_4) {
   bool VAR_10 = VAR_6->reloc_desc[VAR_8].type == VAR_4;
   struct bpf_insn *VAR_11 = VAR_6->insns;
   int VAR_12, VAR_13;

   VAR_12 = VAR_6->reloc_desc[VAR_8].insn_idx;
   VAR_13 = VAR_6->reloc_desc[VAR_8].map_idx;

   if (VAR_12 + 1 >= (int)VAR_6->insns_cnt) {
    FUNC_2("relocation out of range: '%s'\n",
        VAR_6->section_name);
    return -VAR_2;
   }

   if (!VAR_10) {
    VAR_11[VAR_12].src_reg = VAR_0;
   } else {
    VAR_11[VAR_12].src_reg = VAR_1;
    VAR_11[VAR_12 + 1].imm = VAR_11[VAR_12].imm;
   }
   VAR_11[VAR_12].imm = VAR_7->maps[VAR_13].fd;
  } else if (VAR_6->reloc_desc[VAR_8].type == VAR_3) {
   VAR_9 = FUNC_0(VAR_6, VAR_7,
            &VAR_6->reloc_desc[VAR_8]);
   if (VAR_9)
    return VAR_9;
  }
 }

 FUNC_3(&VAR_6->reloc_desc);
 VAR_6->nr_reloc = 0;
 return 0;
}
