
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reloc_desc {scalar_t__ type; size_t insn_idx; int text_off; } ;
struct bpf_program {scalar_t__ idx; int main_prog_cnt; size_t insns_cnt; struct bpf_insn* insns; int section_name; } ;
struct TYPE_2__ {scalar_t__ text_shndx; } ;
struct bpf_object {scalar_t__ btf_ext; TYPE_1__ efile; } ;
struct bpf_insn {int imm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct bpf_program* FUNC_0 (struct bpf_object*,scalar_t__) ;
 int FUNC_1 (struct bpf_program*,struct bpf_object*,int ,size_t) ;
 int FUNC_2 (struct bpf_insn*,struct bpf_insn*,int) ;
 int FUNC_3 (char*,size_t,int ,int ) ;
 int FUNC_4 (char*,...) ;
 struct bpf_insn* FUNC_5 (struct bpf_insn*,size_t,int) ;

__attribute__((used)) static int
FUNC_6(struct bpf_program *VAR_3, struct bpf_object *VAR_4,
   struct reloc_desc *VAR_5)
{
 struct bpf_insn *VAR_6, *VAR_7;
 struct bpf_program *VAR_8;
 size_t VAR_9;
 int VAR_10;

 if (VAR_5->type != VAR_2)
  return -VAR_1;

 if (VAR_3->idx == VAR_4->efile.text_shndx) {
  FUNC_4("relo in .text insn %d into off %d\n",
      VAR_5->insn_idx, VAR_5->text_off);
  return -VAR_1;
 }

 if (VAR_3->main_prog_cnt == 0) {
  VAR_8 = FUNC_0(VAR_4, VAR_4->efile.text_shndx);
  if (!VAR_8) {
   FUNC_4("no .text section found yet relo into text exist\n");
   return -VAR_1;
  }
  VAR_9 = VAR_3->insns_cnt + VAR_8->insns_cnt;
  VAR_7 = FUNC_5(VAR_3->insns, VAR_9, sizeof(*VAR_6));
  if (!VAR_7) {
   FUNC_4("oom in prog realloc\n");
   return -VAR_0;
  }

  if (VAR_4->btf_ext) {
   VAR_10 = FUNC_1(VAR_3, VAR_4,
       VAR_8->section_name,
       VAR_3->insns_cnt);
   if (VAR_10)
    return VAR_10;
  }

  FUNC_2(VAR_7 + VAR_3->insns_cnt, VAR_8->insns,
         VAR_8->insns_cnt * sizeof(*VAR_6));
  VAR_3->insns = VAR_7;
  VAR_3->main_prog_cnt = VAR_3->insns_cnt;
  VAR_3->insns_cnt = VAR_9;
  FUNC_3("added %zd insn from %s to prog %s\n",
    VAR_8->insns_cnt, VAR_8->section_name,
    VAR_3->section_name);
 }
 VAR_6 = &VAR_3->insns[VAR_5->insn_idx];
 VAR_6->imm += VAR_3->main_prog_cnt - VAR_5->insn_idx;
 return 0;
}
