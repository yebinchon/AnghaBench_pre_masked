
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct disassemble_info {char* disassembler_options; int endian; int stream; int * fprintf_func; int * print_address_func; int * memory_error_func; int * symbol_at_address_func; int * read_memory_func; int buffer; } ;
typedef int bfd_vma ;
struct TYPE_6__ {int bits; scalar_t__ syntax; scalar_t__* cpu; int big_endian; int pc; } ;
struct TYPE_5__ {int size; int buf_asm; } ;
typedef TYPE_1__ RAsmOp ;
typedef TYPE_2__ RAsm ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct disassemble_info*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int const*,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct disassemble_info*,char,int) ;
 int FUNC_4 (int ,struct disassemble_info*) ;
 int FUNC_5 (int ,struct disassemble_info*) ;
 int FUNC_6 (int ,struct disassemble_info*) ;
 int FUNC_7 (int ,struct disassemble_info*) ;
 int FUNC_8 (int ,struct disassemble_info*) ;
 int FUNC_9 (int ,struct disassemble_info*) ;
 int FUNC_10 (int *,char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_11 (scalar_t__*,char*) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(RAsm *VAR_10, RAsmOp *VAR_11, const ut8 *VAR_12, int VAR_13) {
 struct disassemble_info VAR_14;
 int VAR_15 = 2;
 if (VAR_13 < 4) {
  return -1;
 }
 VAR_2 = &VAR_11->buf_asm;
 VAR_0 = VAR_10->pc;
 FUNC_2 (VAR_3, VAR_12, FUNC_0 (VAR_13, 8));


 FUNC_3 (&VAR_14, '\0', sizeof (struct disassemble_info));
 VAR_14.disassembler_options=(VAR_10->bits==64)?"64":"";
 VAR_14.buffer = VAR_3;
 VAR_14.read_memory_func = &VAR_4;
 VAR_14.symbol_at_address_func = &VAR_9;
 VAR_14.memory_error_func = &VAR_7;
 VAR_14.print_address_func = &VAR_6;
 VAR_14.endian = !VAR_10->big_endian;
 VAR_14.fprintf_func = &VAR_5;
 VAR_14.stream = VAR_8;

 if (VAR_10->cpu && *VAR_10->cpu) {




  VAR_15 = 0;
  if (FUNC_11 (VAR_10->cpu, "v10")) {
   VAR_15 = 1;
  }
  if (FUNC_11 (VAR_10->cpu, "v32")) {
   VAR_15 = 2;
  }
 } else {
  VAR_15 = 2;
 }
 (void)FUNC_1 (&VAR_14, VAR_15);
 if (VAR_10->syntax == VAR_1) {
  switch (VAR_15) {
  case 0:
   VAR_11->size = FUNC_4 ((bfd_vma)VAR_0, &VAR_14);
   break;
  case 1:
   VAR_11->size = FUNC_6 ((bfd_vma)VAR_0, &VAR_14);
   break;
  default:
   VAR_11->size = FUNC_8 ((bfd_vma)VAR_0, &VAR_14);
   break;
  }
 } else {
  switch (VAR_15) {
  case 0:
   VAR_11->size = FUNC_5 ((bfd_vma)VAR_0, &VAR_14);
   break;
  case 1:
   VAR_11->size = FUNC_7 ((bfd_vma)VAR_0, &VAR_14);
   break;
  default:
   VAR_11->size = FUNC_9 ((bfd_vma)VAR_0, &VAR_14);
   break;
  }
 }
 if (VAR_11->size == -1) {
  FUNC_10 (&VAR_11->buf_asm, "(data)");
 }
 return VAR_11->size;
}
