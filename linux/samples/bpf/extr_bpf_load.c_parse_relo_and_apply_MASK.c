
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct bpf_map_data {scalar_t__ elf_offset; int fd; } ;
struct bpf_insn {int code; int imm; int src_reg; } ;
struct TYPE_9__ {int r_offset; int r_info; } ;
struct TYPE_8__ {int sh_size; int sh_entsize; } ;
struct TYPE_7__ {scalar_t__ st_value; } ;
typedef TYPE_1__ GElf_Sym ;
typedef TYPE_2__ GElf_Shdr ;
typedef TYPE_3__ GElf_Rel ;
typedef int Elf_Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,TYPE_3__*) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_4(Elf_Data *VAR_4, Elf_Data *VAR_5,
    GElf_Shdr *VAR_6, struct bpf_insn *VAR_7,
    struct bpf_map_data *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;

 VAR_11 = VAR_6->sh_size / VAR_6->sh_entsize;

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  GElf_Sym VAR_12;
  GElf_Rel VAR_13;
  unsigned int VAR_14;
  bool VAR_15 = 0;
  int VAR_16, VAR_17;

  FUNC_1(VAR_4, VAR_10, &VAR_13);

  VAR_14 = VAR_13.r_offset / sizeof(struct bpf_insn);

  FUNC_2(VAR_5, FUNC_0(VAR_13.r_info), &VAR_12);

  if (VAR_7[VAR_14].code != (VAR_2 | VAR_1 | VAR_0)) {
   FUNC_3("invalid relo for insn[%d].code 0x%x\n",
          VAR_14, VAR_7[VAR_14].code);
   return 1;
  }
  VAR_7[VAR_14].src_reg = VAR_3;


  for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
   if (VAR_8[VAR_17].elf_offset == VAR_12.st_value) {
    VAR_15 = 1;
    break;
   }
  }
  if (VAR_15) {
   VAR_7[VAR_14].imm = VAR_8[VAR_17].fd;
  } else {
   FUNC_3("invalid relo for insn[%d] no map_data match\n",
          VAR_14);
   return 1;
  }
 }

 return 0;
}
